#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>
#include <list>
#include "llvm/Analysis/Passes.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/SectionMemoryManager.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/PassManager.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Transforms/Scalar.h"

#define debug 1

using namespace std;

static llvm::Module *TheModule = new llvm::Module("my cool jit",llvm::getGlobalContext());;
static llvm::LLVMContext &Context = llvm::getGlobalContext();
static llvm::IRBuilder<> Builder(Context);
static std::map<std::string, llvm::AllocaInst * > NamedValues;
static llvm::FunctionPassManager *TheFPM;

static void printDebug(string s){
    if(debug)
        cout<<"In Codegen of "<<s<<endl;
}

static void printLevel(int level){
    int i;
    for(i=0;i<level-1;i++){
        cout<<'\t';
    }
    cout<<"|"<<endl;
/*    for(i=0;i<level-1;i++){
        cout<<'\t';
    }
    cout<<"|"<<endl;
  */  for(i=0;i<level-1;i++){
        cout<<'\t';
    }
    for(i=0;i<8;i++)
        cout<<"-";
    cout<<" ";
}

static llvm::AllocaInst* CreateEntryBlockAlloca(llvm::Function *TheFunction, const std::string &VarName, string type) {

    llvm::IRBuilder<> TmpB(&TheFunction->getEntryBlock(),
                   TheFunction->getEntryBlock().begin());
    llvm::AllocaInst* alloca;
    if(type=="int") 
        alloca = TmpB.CreateAlloca(llvm::Type::getInt32Ty(llvm::getGlobalContext()), 0, VarName.c_str());
    else if(type=="boolean")
        alloca = TmpB.CreateAlloca(llvm::Type::getInt1Ty(llvm::getGlobalContext()), 0, VarName.c_str());
    return alloca;
}


class ReportError{
    public:
        static llvm::Value* ErrorV(string str) { 
            cout<<str<<endl;
            return 0;
        }
};


class statement_node{
    public:
        virtual void evaluate(int level)=0;
        virtual llvm::Value* Codegen()=0;
};


class expr_node{

    public:		
        string expValue;
        expr_node(){} 
        void node_value(string expValue);
        expr_node(string a){
            expValue = a;
        }

        virtual void evaluate(int level){
        //    cout<<"expr_node evaluate\n";
        }

        virtual llvm::Value* Codegen(){
            printDebug("expr_node");
        }
};

class neg: public expr_node{

    protected:
        expr_node *expn_;

    public:
        neg(expr_node *expn){
            expn_ = expn;
        }
        void evaluate(int level){
            printLevel(level);
            
            cout<<"NEGATION UNARY STATEMENT:"<<endl;
            if (expn_ != NULL)
                expn_ -> evaluate(level+1);
        }
        
        llvm::Value* Codegen(){
            llvm::Value* V;
            return V;
        }
};

class notof : public expr_node{

    protected:
        expr_node *expn_;

    public:
        notof(expr_node *expn){
            expn_ = expn;
        }
        void evaluate(int level){
            printLevel(level);

            cout<<"NOT OF UNARY STATEMENT:"<<endl;
            if (expn_ != NULL)
                expn_ -> evaluate(level+1);
        }

        llvm::Value* Codegen(){
            llvm::Value* V;
            return V;
        }
};


class var_decl_node{
   
    public:
        char *type_;
        list<string> *idlist_;
        var_decl_node(char *type, list<string> *idlist){
            type_ = type;
            idlist_ = idlist;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"VARIABLE DECLARATION: " <<endl;

            printLevel(level+1);

            cout<<"Variable Type :" << type_ << "\n";

            printLevel(level+1);

            cout<<"Variable List :";
            for (list <string>::iterator it = idlist_ -> begin(); it != idlist_ -> end(); it++) {
                cout<< *it <<" ";
            }
            cout<<endl;
        }
        llvm::Value* Codegen(map<string,llvm::AllocaInst *>& OldBindings) {
            printDebug("var_decl_node");
            llvm::Function *TheFunction = Builder.GetInsertBlock()->getParent();
            for (list <string>::iterator it = idlist_ -> begin(); it != idlist_ -> end(); it++) { 
                llvm::Value *InitVal;
                llvm::AllocaInst *Alloca;
                if(!strcmp(type_,"int")){
                    InitVal = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,0));
                    Alloca = CreateEntryBlockAlloca(TheFunction, *it, "int");
                }
                else{
                    InitVal = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1,0));
                    Alloca = CreateEntryBlockAlloca(TheFunction, *it,"boolean");
                }
                
                Builder.CreateStore(InitVal, Alloca);

                OldBindings[*it] = NamedValues[*it];
                NamedValues[*it] = Alloca;
                if(debug){
                    cout<<*it<<"\n";
                    InitVal->dump();
                }
            }
            llvm::Value *retV = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            return retV;
        }
};

class block_node : public statement_node{
    protected:
        list<var_decl_node *> *varl_;
        list<statement_node *> *statel_;
    public:
        block_node(list<var_decl_node *> *varl, list<statement_node *> *statel){
            varl_ = varl;
            statel_ = statel;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"BLOCK:"<<endl;


            for (list <var_decl_node *>::iterator it = varl_ -> begin(); it != varl_ -> end(); it++) {
                (*it)->evaluate(level+1);
            }


            for (list <statement_node *>::iterator it = statel_ -> begin(); it != statel_ -> end(); it++) {
                (*it)->evaluate(level+1);
            }
        }

        llvm::Value* Codegen(){
            printDebug("block_node");
            llvm::Value* V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));;
            map<string,llvm::AllocaInst *> OldBindings;
            for (list <var_decl_node *>::iterator it = varl_ -> begin(); it != varl_ -> end(); it++) {
                V = (*it)->Codegen(OldBindings);
            }
            for (list <statement_node *>::iterator it = statel_ -> begin(); it != statel_ -> end(); it++) {
                V = (*it)->Codegen();
            }
            for (list <var_decl_node *>::iterator it = varl_ -> begin(); it != varl_ -> end(); it++) {
                list<string>::iterator it2 = (*it)->idlist_->begin();
                while(it2 != (*it)->idlist_->end()){
                    NamedValues[*it2] = OldBindings[*it2];
                    it2++;    
                }
                
            }
            return V;
        }
};

class arg_node{
    public:
        char *type_;
        char *id_;
        arg_node(char *type,char *id){
            id_ = id;
            type_ = type;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"ARGUMENT:"<<endl;

            printLevel(level+1);

            cout<<"TYPE:"<<string(type_)<<endl;

            printLevel(level+1);

            cout<<"ID:"<<string(id_)<<endl;
        }
};

class method_decl_node{
    protected:
        char *type_;
        char *id_;
        list<arg_node *> *argl_;
        block_node *blk_;

    public:
        method_decl_node(char *type, char *id, list<arg_node *> *argl, block_node *blk){
            type_ = type;
            id_ = id;
            argl_ = argl;
            blk_ = blk;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"METHOD:"<<endl;

            printLevel(level+1);

            cout<<"TYPE:"<<string(type_)<<endl;

            printLevel(level+1);

            cout<<"ID:"<<string(id_)<<endl;


            for (list <arg_node *>::iterator it = argl_ -> begin(); it != argl_ -> end(); it++) {
                (*it)->evaluate(level+1);
            }


            if(blk_!=NULL)
                blk_->evaluate(level+1);
        }

        llvm::Function* Codegen(){
            printDebug("method_decl_node");
            vector<string> argNames;
            vector<string> argTypes;
            int arg_size = argl_->size();
            vector<llvm::Type*> arguments;
            for (list <arg_node *>::iterator it = argl_ -> begin(); it != argl_ -> end(); it++) {
                if( !strcmp( (*it)->type_,"int")) {
                    arguments.push_back(llvm::Type::getInt32Ty(llvm::getGlobalContext()));
                    argTypes.push_back("int");
                }
                else if(!strcmp((*it)->type_,"boolean")) {
                    arguments.push_back(llvm::Type::getInt1Ty(llvm::getGlobalContext()));
                    argTypes.push_back("boolean");
                }
                else{
                    cout<<"Error : arguments should be only int or boolean\n";
                    return 0;
                }
                argNames.push_back( (*it)->id_);
            }
            llvm::Type *returnType;
            if(!strcmp(type_,"int"))
                returnType = llvm::Type::getInt32Ty(llvm::getGlobalContext());
            else if(!strcmp(type_,"boolean"))
                returnType = llvm::Type::getInt1Ty(llvm::getGlobalContext());
            else{
                cout<<"Invalid return type of the function "<<id_<<endl;
                return 0;
            }

            llvm::FunctionType *FT = llvm::FunctionType::get(returnType, arguments, false);
            llvm::Function *F = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, string(id_), TheModule);
            unsigned Idx = 0;
            for (llvm::Function::arg_iterator AI = F->arg_begin(); Idx != arg_size; ++AI, ++Idx) {
                AI->setName(argNames[Idx]); 
            }
            if(debug){
                cout<<"function created\n";
                F->dump();
            }
            
            llvm::BasicBlock *BB = llvm::BasicBlock::Create(llvm::getGlobalContext(), "entry", F);
            Builder.SetInsertPoint(BB);
            if(debug)cout<<"allocing arguments\n";
            Idx = 0;
            for (llvm::Function::arg_iterator AI = F->arg_begin(); Idx != arg_size; ++AI, ++Idx) { 
                //cout<<"for "<<argNames[Idx]<<" "<<argTypes[Idx]<<endl;
                llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(F, argNames[Idx],argTypes[Idx]);
                //cout<<"alloc created\n";
                // Store the initial value into the alloca.
                Builder.CreateStore(AI, Alloca);
                //cout<<"stored\n";
                // Add arguments to variable symbol table.
                NamedValues[argNames[Idx]] = Alloca;
                //cout<<"stored in map\n";
            }
            
            if(debug)
                cout<<"evaluating body\n";

            llvm::Value *RetVal = blk_->Codegen();
            if (RetVal) {
                // Finish off the function.
                Builder.CreateRet(RetVal);
                // Validate the generated code, checking for consistency.
                llvm::verifyFunction(*F);
                if(debug){
                    cout<<"final function\n";
                    F->dump();
                }
                return F;
            }
  
            // Error reading body, remove function.
            F->eraseFromParent();
            return 0;
        }

};


class idList{

    public: 
        string variable;
        virtual void evaluate(int level)=0;

        virtual llvm::Value* Codegen()=0;
};

class field_decl_node{

    protected:
        string Type;
        list<idList*> *idlist;

    public:
        field_decl_node(string type, list<idList*> *idlist){
            Type = type;
            this->idlist = idlist;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"FIELD DECLARATION LIST\n";

            printLevel(level+1);

            cout<<"Field Type :" << Type << "\n";


            for (list <idList *>::iterator it = idlist -> begin(); it != idlist -> end(); it++) {
                (*it)->evaluate(level+1);

            }
        }

        llvm::Value* Codegen(){
            printDebug("field_decl_node");
            for (list <idList *>::iterator it = idlist -> begin(); it != idlist -> end(); it++) {
                llvm::GlobalVariable *gv = new llvm::GlobalVariable(*TheModule,llvm::Type::getInt32Ty(Context),false,llvm::GlobalValue::CommonLinkage,0,(*it)->variable);
                //llvm::GlobalVariable *test = TheModule->getNamedGlobal((*it)->variable);
            }
            llvm::Value* V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            return V;
        }

};

class class_node{

    protected:
        list<method_decl_node *> *mdl_;
        list<field_decl_node*> *field_list;

    public:
        class_node(list<field_decl_node*> *fld_list,list<method_decl_node *> *mdl){
            mdl_ = mdl;
            field_list = fld_list;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"CLASS PROGRAM\n";

            //cout << "Size of field_list is " << field_list->size() << endl;

            for (list <field_decl_node *>::iterator it = field_list -> begin(); it != field_list -> end(); it++) {
                (*it)->evaluate(level+1);
            }

            for (list <method_decl_node *>::iterator it = mdl_ -> begin(); it != mdl_ -> end(); it++) {
                (*it)->evaluate(level+1);
            }
        }

        llvm::Value* Codegen(){
            printDebug("class_node");
            llvm::Value *V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,0));
            for (list <field_decl_node *>::iterator it = field_list -> begin(); it != field_list -> end(); it++) {
                V = (*it)->Codegen();
            }
            for (list <method_decl_node *>::iterator it = mdl_ -> begin(); it != mdl_ -> end(); it++) {
                V = (*it)->Codegen();
            }
            return V;
        }

};


class idListVar: public idList{
    
    public:

        idListVar(string var){
            variable = var; 
        }
        void evaluate(int level){
            printLevel(level);

            cout<<"ID:"<<variable<<endl;
        }

        llvm::Value* Codegen(){
            printDebug("idListVar");
            llvm::Value *V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,0));
            if(debug)
                V->dump();
            return V ? V : ReportError::ErrorV("Unknown variable name");
        }
};

class idListArr: public idList{

    protected:
        string variable;
        int int_literal;

    public:
        idListArr(string var,int lit){
            variable = var;
            int_literal = lit;
        }
        void evaluate(int level){
            printLevel(level);

            cout<<"ID:"<<variable<<"[]"<<endl;
            printLevel(level+1);
            cout<<"INT_LITERAL: "<<int_literal<<endl;
        }

        llvm::Value* Codegen(){
            printDebug("idListArr");
            llvm::Value *V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,0));
            if(debug)
                V->dump();
            return V ? V : ReportError::ErrorV("Unknown variable name");
        }
};

class location_node : public expr_node{
       
    public:
        char *id_;
        expr_node *expn_;
        location_node(char *id){
            id_ = id;
        }
        location_node(char *id, expr_node *expn){
            id_ = id;
            expn_ = expn;
        }
        void evaluate (int level){

            printLevel(level);

            cout << "LOCATION :" << endl;   

            printLevel(level+1);

            if (expn_ != NULL) {
                cout << "ID : " << string(id_) << "[]" <<endl;
                expn_->evaluate(level+1);
            }
            else
                cout << "ID : " << string(id_) << endl;
        }
        llvm::Value* Codegen(){
            printDebug("location_node");
            if(debug)
                cout<<"looking for "<<id_<<endl;
            llvm::Value *V = NamedValues[string(id_)];
            if (V == 0){
                return ReportError::ErrorV("Unknown variable name");
            }
            if(debug)
                cout<<"found\n";
            return Builder.CreateLoad(V, string(id_));
        }

};


class operator_node: public expr_node{

    public:
        expr_node *Left;
        expr_node *Right;
        char* optr;

        operator_node(expr_node *left, expr_node *right,char* opter){
            Left  = left;
            Right = right;
            optr  = opter; 	
        }
        operator_node(){}
        void evaluate(int level){
            printLevel(level);
            cout<<"Operator: "<<optr<<endl;
            Left->evaluate(level+1);
            Right->evaluate(level+1);
        }

        llvm::Value* Codegen(){
            printDebug("operator_node");
            if (!strcmp(optr,"=")) {
                // Assignment requires the LHS to be an identifier.
                if(debug)
                    cout<<"assigning operator\n";
                location_node *LHSE = static_cast<location_node *>(Left);
                if (!LHSE){
                  return ReportError::ErrorV("destination of '=' must be a variable");
                }
                // Codegen the RHS.
                llvm::Value *Val = Right->Codegen();
                if (Val == 0)
                    return 0;
                if(debug){
                    cout<<"value returned from right\n";
                    Val->dump();
                }
                
                // Look up the name.
                llvm::Value *Variable = NamedValues[string(LHSE->id_)];
                if (Variable == 0){
                  return ReportError::ErrorV("Unknown variable name");
                }
                if(debug){
                    cout<<"storing\n";
                    Val->dump();
                    cout<<"in\n";
                    Variable->dump();
                }
                Builder.CreateStore(Val, Variable);
                return Val;
            }

            llvm::Value* L = Left->Codegen();
            llvm::Value* R = Right->Codegen();
            if(debug)
                cout<<"returned from left and right\n";
            if(L==0){
                return ReportError::ErrorV("Error in left operand of " + string(optr));
            }
            if(R==0){
                return ReportError::ErrorV("Error in right operand of " + string(optr));
            }
            if(debug){
                cout<<"left\n";
                L->dump();
                cout<<"right\n";
                R->dump();
            }
            
            llvm::Value *V;
            string op(optr);
            if(!strcmp(optr,"+")){
                V =  Builder.CreateAdd(L, R, "addtmp");
            }
            else if(!strcmp(optr,"-")){
                V = Builder.CreateSub(L, R, "subtmp");
            }
            else if(!strcmp(optr,"*")){
                V = Builder.CreateMul(L, R, "multmp");
            }
            else if(!strcmp(optr,"<")){
                if(debug)
                    cout<<"operator_node "<<" < "<<endl;
                L = Builder.CreateICmpULT(L, R, "cmptmp");
                // Convert bool 0/1 to double 0.0 or 1.0
                V =  Builder.CreateUIToFP(L, llvm::Type::getDoubleTy(Context),
                            "booltmp");
            }
                //default: return ErrorV("invalid binary operator");
            if(debug){
                cout<<"result\n";
                V->dump();
            }
            return V;
        }

};

class literal : public expr_node{
    public:
        virtual void evaluate(int level){

        }

        virtual llvm::Value* Codegen(){

        }
};

class int_literal : public literal{
    protected:
        int val_;
    public:
        int_literal(int val){
            val_ = val;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"INTEGER LITERAL: "<< val_ <<" ";
            cout<<endl;
            //Codegen();
        }

        llvm::Value* Codegen(){ 
            printDebug("int literal");
            llvm::Value* V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,val_));
            if(debug)
                V->dump();
            return V;
        }
};

class char_literal : public literal{
    protected:
        char *val_;
    public:
        char_literal(char *val){
            val_ = val;
        }
        void evaluate(int level){

            printLevel(level);

            cout<<"CHAR LITERAL: "<< val_ << endl;
        }
        
       /* llvm::Value* Codegen(){ 
            llvm::Value* V = llvm::ConstantFP::get(llvm::getGlobalContext(), llvm::APInt(val_));
            V->dump();
            return V;
        }
        */
};

class bool_literal : public literal{
    protected:
        bool val_;
    public:
        bool_literal(bool val){
            val_ = val;
        }
        void evaluate(int level){
            printLevel(level);

            cout<<"BOOL_LITERAL: "<< val_ << endl;
        }
        
        llvm::Value* Codegen(){ 
            llvm::Value* V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1,val_));
            if(debug)
                V->dump();
            return V;
        }

};

class assignment_node{
    public:
        char *id_;
        assignment_node(char *node) : id_(node) {};
        void evaluate (int level){
            printLevel(level);

            cout << "ASSIGN OPERATOR : " << string(id_) << endl;
        }
};

class assignment_stmt : public statement_node{
    protected:
        assignment_node *assignop_;
        location_node *lnode_;
        expr_node *expn_;
    public:
        void evaluate(int level){
            printLevel(level);

            cout << "ASSIGN STATEMENT: " << endl;	

            if (assignop_ != NULL)
                assignop_ -> evaluate(level+1);

            if (lnode_ != NULL)
                lnode_ -> evaluate(level+1);

            if (expn_ != NULL)
                expn_ -> evaluate(level+1);
        }
        assignment_stmt(assignment_node *assignop, location_node *lnode, expr_node *expn){
            assignop_ = assignop;
            lnode_ = lnode;
            expn_  = expn;
        }

        llvm::Value* Codegen(){
            printDebug("assignment_node");
            llvm::Value* rightVal = expn_->Codegen();
            if(!rightVal){
                return ReportError::ErrorV("problem in right hand side of the expression\n");
            }
            llvm::Value *Variable = NamedValues[string(lnode_->id_)];
            if (Variable == 0){
                return ReportError::ErrorV("Unknown variable name");
            }
            if(!strcmp(assignop_->id_,"=")){
                if(debug)
                    cout<<"equality operator\n";
            }
            else if(!strcmp(assignop_->id_,"+=")){
                if(debug)
                    cout<<"plus equality operator\n";
                rightVal = Builder.CreateAdd(Variable,rightVal,"plusEqualTo");
            }
            else if(!strcmp(assignop_->id_,"-=")){
                if(debug)
                    cout<<"minus equality operator\n";
                rightVal = Builder.CreateSub(Variable,rightVal,"plusEqualTo");
            }
            if(debug){
                cout<<"storing\n";
                rightVal->dump();
                cout<<"in\n";
                Variable->dump();
            }   
            Builder.CreateStore(rightVal, Variable);
            return rightVal;
        }        

};


class method_call : public statement_node, public expr_node{
    protected:
        char *id_;
        list<expr_node *> *explist_;
    public:
        method_call(char *id, list<expr_node *> *explist){
            id_ = id;
            explist_ = explist;
        }
        void evaluate (int level){
            printLevel(level);

            cout << "METHOD CALL: " << endl;

            printLevel(level+1);

            cout << "ID: " << string(id_) << endl;

            printLevel(level+1);
            
            cout<<"ARGUMENTS: "<<endl;

            for (list <expr_node *>::iterator it = explist_ -> begin(); it != explist_ -> end(); it++) {
                (*it)->evaluate(level+1);
            }
        }
        llvm::Value* Codegen(){
            llvm::Function *CalleeF = TheModule->getFunction(id_);
            if (CalleeF == 0)
                return ReportError::ErrorV("Unknown function referenced");

            // If argument mismatch error.
            if (CalleeF->arg_size() != explist_->size())
                return ReportError::ErrorV("Incorrect no of arguments passed");

            std::vector<llvm::Value*> ArgsV;
            list<expr_node *>::iterator it;
            for (it = (*explist_).begin() ; it != (*explist_).end() ; it++) {
                ArgsV.push_back( (*it)->Codegen() );
                if (ArgsV.back() == 0) 
                    return 0;
            }
            llvm::Value *V = Builder.CreateCall(CalleeF, ArgsV, "calltmp");
            if(debug)
                V->dump();
            return V;
        }
};


class if_else_stmt : public statement_node{
    protected:
        expr_node *expn_;
        block_node *ifblock_;
        block_node *elseblock_;
    public:
        if_else_stmt(expr_node *expn, block_node *ifblock, block_node *elseblock){
            ifblock_ = ifblock;
            elseblock_ = elseblock;
            expn_ = expn;
        }
        void evaluate (int level){
            printLevel(level);

            cout << "IF ELSE STATEMENT: " << endl;

            if (expn_ != NULL)
            {
                printLevel(level);
                cout<<"CONDITION"<<endl;
                expn_ -> evaluate(level+1);
            }

            if (ifblock_ != NULL)
            {
                printLevel(level);
                cout<<"THEN"<<endl;
                ifblock_ -> evaluate(level+1);	
            }

            if (elseblock_ != NULL)
            {
                printLevel(level);
                cout<<"ELSE"<<endl;
                elseblock_ -> evaluate(level+1);	
            }
            //Codegen();
        }

        llvm::Value* Codegen(){
            printDebug("if_else_statement");
            llvm::Value* condV = expn_->Codegen();
            if(debug){
                cout<<"returned in if else\n";
                condV->dump();
            }
            if(condV == 0)
                return ReportError::ErrorV("if expression not right\n");

            condV = Builder.CreateICmpEQ(condV,
                              llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1)),
                                "ifcond");
            if(debug){
                cout<<"condition\n";
                condV->dump();
            }
            llvm::Function *TheFunction = Builder.GetInsertBlock()->getParent();
            if(debug){
                cout<<"base function\n";
                TheFunction->dump();
            }
            llvm::BasicBlock *ThenBB = llvm::BasicBlock::Create(llvm::getGlobalContext(), "then", TheFunction);
            llvm::BasicBlock *ElseBB = llvm::BasicBlock::Create(llvm::getGlobalContext(), "else");
            llvm::BasicBlock *MergeBB = llvm::BasicBlock::Create(llvm::getGlobalContext(), "ifcont");

            Builder.CreateCondBr(condV, ThenBB, ElseBB);
            
            Builder.SetInsertPoint(ThenBB);
            if(debug)
                cout<<"codegening if block\n";
            llvm::Value *ThenV = ifblock_->Codegen();
            if (ThenV == 0) {
                ReportError::ErrorV("problem in then block\n");
            }
            if(debug){
                cout<<"returned->\n";
                ThenV->dump();
            }
            Builder.CreateBr(MergeBB);
            // Codegen of 'Then' can change the current block, update ThenBB for the PHI.
            ThenBB = Builder.GetInsertBlock();

            // Emit else block.
            TheFunction->getBasicBlockList().push_back(ElseBB);
            Builder.SetInsertPoint(ElseBB);
            if(debug)cout<<"codegening else block\n";
            llvm::Value *ElseV = elseblock_->Codegen();
            if (ElseV == 0){
                ReportError::ErrorV("problem in else block\n");
            } 
            if(debug){
                cout<<"returned->\n";
                ElseV->dump();
            }
            Builder.CreateBr(MergeBB);
            // Codegen of 'Else' can change the current block, update ElseBB for the PHI.
            ElseBB = Builder.GetInsertBlock();
            TheFunction->getBasicBlockList().push_back(MergeBB);
            Builder.SetInsertPoint(MergeBB);
            if(debug)
                cout<<"creating merged node\n";
            llvm::PHINode *PN = Builder.CreatePHI(llvm::Type::getInt32Ty(llvm::getGlobalContext()), 2,"iftmp");
            if(debug)
                cout<<"adding incoming nodes\n";
            PN->addIncoming(ThenV, ThenBB);
            PN->addIncoming(ElseV, ElseBB);
            if(debug)
                PN->dump();
            return PN;
        }
};


class for_stmt : public statement_node{
    protected:
        expr_node *start_;
        expr_node *end_;
        block_node *forblock_;
        char *id_;
        assignment_node *assign_;
    public:
        for_stmt(char *id, assignment_node *assign, block_node *forblock, expr_node *start, expr_node *end){
            id_ = id;
            assign_ = assign;
            forblock_ = forblock;
            start_ = start;
            end_ = end;
        }
        void evaluate (int level){
            printLevel(level);

            cout << "FOR STATEMENT: " << endl;

            printLevel(level+1);

            cout << "ID: " << string(id_) << endl;

            if (assign_ != NULL)
                assign_ -> evaluate(level+1);	

            if (start_ != NULL)
            {
                printLevel(level+1);
                cout<<"START"<<endl;
                start_ -> evaluate(level+1);	
            }
            if (end_ != NULL)
            {
                printLevel(level+1);
                cout<<"END"<<endl;
                end_ -> evaluate(level+1);	
            }

            if (forblock_ != NULL)
                forblock_ -> evaluate(level+1);	

        }

        llvm::Value* Codegen(){
            printDebug("for_statement");
            llvm::Value *StartVal = start_->Codegen();
            if (StartVal == 0)
                return 0;
            if(debug){
                cout<<"startVal->\n";
                StartVal->dump();
            }
            llvm::Function *TheFunction = Builder.GetInsertBlock()->getParent();

            llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(TheFunction, string(id_),"int");
            Builder.CreateStore(StartVal, Alloca);


            llvm::BasicBlock *PreheaderBB = Builder.GetInsertBlock();
            llvm::BasicBlock *LoopBB = llvm::BasicBlock::Create(llvm::getGlobalContext(), "loop", TheFunction);
            if(debug){
                cout<<"in func->\n";
                TheFunction->dump();
            }
            Builder.CreateBr(LoopBB);

            Builder.SetInsertPoint(LoopBB);

            llvm::PHINode *Variable = Builder.CreatePHI(llvm::Type::getInt32Ty(llvm::getGlobalContext()), 2, string(id_));

            Variable->addIncoming(StartVal, PreheaderBB);

            
            llvm::AllocaInst *OldVal = NamedValues[string(id_)];
            NamedValues[string(id_)] = Alloca;

            if(debug)cout<<"executing body\n";
            if (forblock_->Codegen() == 0)
                return 0;
            if(debug)cout<<"body executed\n";
            llvm::Value* StepVal = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            if(debug){
                cout<<"step Value->\n";
                StepVal->dump();
            }
            
            //llvm::Value* NextVar = Builder.CreateAdd(Variable, StepVal, "nextvar");
            
            llvm::Value *CurVar = Builder.CreateLoad(Alloca, string(id_));
            llvm::Value *NextVar = Builder.CreateAdd(CurVar, StepVal, "nextvar");
            Builder.CreateStore(NextVar, Alloca);

            if(debug){
                cout<<"next Value->\n";
                NextVar->dump();
            }
            if(debug)cout<<"ending condition->\n";
            llvm::Value *EndCond = end_->Codegen();
            if (EndCond == 0)
                return ReportError::ErrorV("Ending condition not valid\n");
            if(debug)EndCond->dump();

            EndCond = Builder.CreateICmpULE(Variable, EndCond, "loopcond");

            llvm::BasicBlock *LoopEndBB = Builder.GetInsertBlock();
            llvm::BasicBlock *AfterBB = llvm::BasicBlock::Create(llvm::getGlobalContext(), "afterloop", TheFunction);

            if(debug)
                cout<<"creating block after the loop\n";
            Builder.CreateCondBr(EndCond, LoopBB, AfterBB);

            Builder.SetInsertPoint(AfterBB);

            Variable->addIncoming(NextVar, LoopEndBB);

            if (OldVal)
                NamedValues[string(id_)] = OldVal;
            else
                NamedValues.erase(string(id_));

            llvm::Value *V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            return V;
        }

};


class return_stmt : public statement_node{
    protected:
        expr_node *expn_;
    public:
        return_stmt(){}
        return_stmt(expr_node *expn){
            expn_ = expn;
        }
        void evaluate (int level){
            printLevel(level);

            cout << "RETURN STATEMENT: " << endl;
            if (expn_ != NULL)
                expn_ -> evaluate(level+1);	
        }

        llvm::Value* Codegen(){
            printDebug("return_statement");
            llvm::Value *V;
            if(expn_){
                V  = expn_->Codegen();
                return V;
            }
            V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            return V;
        }
};

class continue_stmt : public statement_node {
    public:
        continue_stmt () {}
        void evaluate (int level){
            printLevel(level);

            cout << "CONTINUE: " << endl;
        }
        llvm::Value* Codegen(){
            printDebug("continue_statement");
            llvm::Value *V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            return V;
        }
};

class break_stmt : public statement_node{
    public:
        break_stmt () {}
        void evaluate (int level){
            printLevel(level);

            cout << "BREAK: " << endl;
        }

        llvm::Value* Codegen(){
            printDebug("break_statement");
            llvm::Value *V = llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(32,1));
            return V;
        }
};

