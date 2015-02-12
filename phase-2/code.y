%{
	#include "code.cpp"
	class_node *root;
	int yylex();
	void yyerror(const char * s);

%}

%start program
%union {
	class_node *programnode;
	field_decl_node	*fieldnode;
	method_decl_node *methodnode;
	var_decl_node *varnode;
	block_node *blocknode;
	arg_node *argnode;
	statement_node *stmt;
	location_node *loc_;
	method_call *methodcall;
	expr_node *exprnode;
	literal *litr_;
	list<var_decl_node *> *var_node_list;
	list<method_decl_node *> *method_node_list;
	list<arg_node *> *arg_node_list;
	list<string> *string_list;
	list<field_decl_node*>  *field_node_list;
	list<idList*>	*id_list;
	list<statement_node *> *statement_list;
	list<expr_node *> *expr_list;
	char *assignment_, *char_literal, *id_, *type_, *void_;
	int hex_,decimal_;
	bool bool_literal;
}

%token CLASS
%token PROGRAM
%token FOR
%token IF
%token ELSE
%token CONTINUE
%token BREAK
%token RETURN
%token CALLOUT
%token <assignment_>ASSIGNMENT_OPERATOR
%token <id_> IDENTIFIER
%token <void_>VOID
%token <type_>TYPE
%token <hex_>HEX_LITERAL
%token <decimal_>DECIMAL_LITERAL
%token <char_literal> CHAR_LITERAL
%token <bool_literal>BOOL_LITERAL
%token <id_> STRING_LITERAL

%left TYPE

%left OR
%left AND
%left EQUAL_EQUAL NOT_EQUAL
%left GREATER_EQUAL LESS_EQUAL '<' '>'
%left '+' '-' 
%left '*' '/' '%'
%nonassoc '!'

%type <programnode> program
%type <fieldnode> field_decl_single
%type <methodnode> method_decl_single
%type <varnode> var_decl_single
%type <blocknode> block else_block;
%type <exprnode> expr arith_expr rel_expr equal_expr condition_expr return_expr condition
%type <stmt> statement_single
%type <loc_> location
%type <arg_node_list> arg argumentList;
%type <field_node_list>  field_decl_multiple
%type <method_node_list> method_decl_multiple
%type <string_list> variableList
%type <id_list> idList id_single
%type <statement_list> statement_multiple
%type <var_node_list> var_decl_multiple
%type <expr_list> parameterList parameter callout_arg
%type <litr_> literal
%type <decimal_>  int_literal
%type <type_> method_name
%type <methodcall> method_call
%%


program: 					CLASS PROGRAM  '{' field_decl_multiple method_decl_multiple '}'
																		{$$ = new class_node($4,$5);root=$$;};

field_decl_multiple:		/*epsilon*/  				                {$$=new list<field_decl_node*>();}
							|field_decl_multiple field_decl_single ';' 	{$$ = $1; $$ -> push_back($2);}; 

field_decl_single: 			TYPE idList 							    {$$=new field_decl_node($1,$2);}

idList:                     IDENTIFIER id_single                        {idListVar *x=new idListVar($1);
                                                                        $2->push_front(x);$$=$2;}
                            |IDENTIFIER '[' int_literal ']' id_single   {idListArr *x=new idListArr($1,$3);
                                                                        $5->push_front(x);$$=$5;}

id_single: 					/*epsilon*/  								{$$=new list<idList*>();}
							|',' IDENTIFIER id_single 					{idListVar *x=new idListVar($2);
																		$3->push_front(x); $$=$3;}
							|',' IDENTIFIER '[' int_literal ']' id_single		{idListArr *x=new idListArr($2,$4);
																		$6->push_front(x); $$=$6;};
						
method_decl_multiple:		/*epsilon*/ 								{ $$ = new list<method_decl_node *>(); }
							|method_decl_single method_decl_multiple    {$$=$2; $2->push_front($1);};

method_decl_single: 		TYPE IDENTIFIER argumentList block 	        {$$ = new method_decl_node($1,$2,$3,$4); }
                            |VOID IDENTIFIER argumentList block 	    {$$ = new method_decl_node($1,$2,$3,$4); }

argumentList:               '(' ')'                                     {$$ = new list<arg_node *> ();}
                            |'(' TYPE IDENTIFIER arg ')'                {arg_node *a= new arg_node($2,$3);
                                                                        $4->push_front(a); $$=$4;}

arg:					    /*epsilon*/ 								{$$ = new list<arg_node *>(); }
							|',' TYPE IDENTIFIER arg 					{arg_node *a = new arg_node($2,$3);
																		$4->push_front(a);$$=$4; };

block:						'{' var_decl_multiple statement_multiple '}'{$$=new block_node($2,$3);};

var_decl_multiple:			/*epsilon*/ 								{$$ = new list<var_decl_node *>();}
							|var_decl_single ';' var_decl_multiple 		{$$ = $3;$3->push_front($1);};

var_decl_single:			TYPE IDENTIFIER variableList 				{$3->push_back($2);
																		$$= new var_decl_node($1,$3);};

variableList:				/*epsilon*/ 								{$$ = new list<string>();}
							|',' IDENTIFIER variableList 				{$3->push_front($2); $$=$3;};

statement_multiple: 		/*epsilon*/ 								{$$ = new list<statement_node *>();}
							|statement_multiple statement_single 		{$$ = $1;$1->push_back($2);};


statement_single: 			location ASSIGNMENT_OPERATOR expr ';' 		{assignment_node *a = new assignment_node($2);
																		$$ = new assignment_stmt(a,$1,$3);} 
							|method_call ';' 							{$$=$1;}
							|IF condition block else_block 		    	{$$ = new if_else_stmt($2,$3,$4);}
							|FOR IDENTIFIER ASSIGNMENT_OPERATOR expr ',' expr block 	{ assignment_node *a = new assignment_node($3);
																		$$ = new for_stmt($2,a,$7,$4,$6);}
							|RETURN return_expr ';' 					{$$ = new return_stmt($2);}
							|BREAK ';' 									{$$ = new break_stmt();}
							|CONTINUE ';' 								{$$ = new continue_stmt();}
							|block 										{$$ = $1;};
            

else_block:                 /*epsilon*/                   {$$ = new block_node(new list<var_decl_node *>(), new list<statement_node *>());}
                            |ELSE block                                 {$$ = $2;}

condition:                  '(' expr ')'                                {$$ = $2;}

return_expr:                /*epsilon*/                                   {$$ = new expr_node();}
                            |expr                                       {$$ = $1;}

expr:						location 									{$$ = $1;}
							|method_call 								{$$ = $1;} 
							|literal 									{$$ = $1;}
							|arith_expr 								{$$ = $1;}
							|rel_expr 					                {$$ = $1;}
							|equal_expr 						        {$$ = $1;}
							|condition_expr 						    {$$ = $1;}
							|'-' expr 									{$$ = new neg($2); }
							|'!' expr 									{$$ = new notof($2);}
							|'(' expr ')'								{$$ = $2;};
							
location:					IDENTIFIER 									{$$ = new location_node($1);}
							|IDENTIFIER '[' expr ']' 					{$$ = new location_node($1,$3);};

method_call:			    method_name '('parameterList')' 			{$$= new method_call($1,$3);}
						    |CALLOUT '(' STRING_LITERAL  callout_arg ')'{$$ = new method_call($3, $4);};

method_name:                IDENTIFIER                                  {$$=$1;}    

parameterList:              /*epsilon*/                                 {$$ = new list<expr_node*>();}
                            | expr parameter                            {$2->push_front($1);$$=$2;}

parameter:			    	/*epsilon*/ 								{$$ = new list<expr_node *>();}
					    	|',' expr parameter 						{$3->push_front($2);$$=$3;};

literal:                    int_literal 								{$$ = new int_literal($1);}
						    |CHAR_LITERAL 								{$$ = new char_literal($1);} 
						    |BOOL_LITERAL								{$$ = new bool_literal($1);}

int_literal:				DECIMAL_LITERAL 							{$$ = $1;}
						    |HEX_LITERAL								{$$ = $1;}

arith_expr:					expr '*' expr 								{$$ = new operator_node($1,$3,"*"); }
							|expr '/' expr 								{$$ = new operator_node($1,$3,"/"); }
							|expr '%' expr 								{$$ = new operator_node($1,$3,"%"); }
							|expr '+' expr 								{$$ = new operator_node($1,$3,"+"); }
							|expr '-' expr 								{$$ = new operator_node($1,$3,"-"); }

rel_expr:					expr '<' expr 								{$$ = new operator_node($1,$3,"<"); }
							|expr '>' expr 								{$$ = new operator_node($1,$3,">"); }
							|expr LESS_EQUAL expr 						{$$ = new operator_node($1,$3,"<="); }
							|expr GREATER_EQUAL expr 					{$$ = new operator_node($1,$3,">="); }

equal_expr:					expr EQUAL_EQUAL expr 						{$$ = new operator_node($1,$3,"=="); }
							|expr NOT_EQUAL expr 						{$$ = new operator_node($1,$3,"!="); }

condition_expr:				expr AND expr 								{$$ = new operator_node($1,$3,"&&"); }
							|expr OR expr 								{$$ = new operator_node($1,$3,"||"); }

callout_arg:			    /*epsilon*/ 								{$$ = new list<expr_node*>();}
						    |callout_arg ',' expr        				{$$ = $1; $1 -> push_back($3);}
						    |callout_arg ',' STRING_LITERAL 			{$$ = $1; $1 -> push_back(new expr_node($3));};

%%

int main()
{
	yyparse();
	root -> evaluate(0);
}
void yyerror(const char * s)
{
	return;
}

