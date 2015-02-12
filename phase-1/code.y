%{
	#include <stdio.h>
	void yyerror(char const* s){printf("ERROR %s\n",s);}
%}

%token CLASS
%token PROGRAM
%token FOR
%token IF
%token ELSE
%token CONTINUE
%token BREAK
%token RETURN
%token CALLOUT
%token ASSIGNMENT_OPERATOR
%token IDENTIFIER
%token VOID
%token TYPE
%token HEX_LITERAL
%token DECIMAL_LITERAL
%token CHAR_LITERAL
%token BOOL_LITERAL
%token STRING_LITERAL

%left TYPE

%left OR
%left AND
%left EQUAL_EQUAL NOT_EQUAL
%left GREATER_EQUAL LESS_EQUAL '<' '>'
%left '+' '-' 
%left '*' '/' '%'
%nonassoc '!'

%%


program: 					CLASS PROGRAM  '{' field_decl_multiple method_decl_multiple '}'
																		
field_decl_multiple:		/*epsilon*/  				                
							|field_decl_multiple field_decl_single ';' 	

field_decl_single: 			TYPE idList 							    

idList:                     IDENTIFIER id_single                        
                            |IDENTIFIER '[' int_literal ']' id_single   

id_single: 					/*epsilon*/  								
							|',' IDENTIFIER id_single 					
							|',' IDENTIFIER '[' int_literal ']' id_single		

						
method_decl_multiple:		/*epsilon*/ 								
							|method_decl_single method_decl_multiple   

method_decl_single: 		TYPE IDENTIFIER argumentList block 	        
                            |VOID IDENTIFIER argumentList block 	   

argumentList:               '(' ')'                                    
                            |'(' TYPE IDENTIFIER arg ')'                

arg:					    /*epsilon*/ 								
							|',' TYPE IDENTIFIER arg 					

block:						'{' var_decl_multiple statement_multiple '}'

var_decl_multiple:			/*epsilon*/ 								
							|var_decl_single ';' var_decl_multiple 		

var_decl_single:			TYPE IDENTIFIER variableList 				

variableList:				/*epsilon*/ 								
							|',' IDENTIFIER variableList 				

statement_multiple: 		/*epsilon*/ 								
							|statement_multiple statement_single 		

statement_single: 			location ASSIGNMENT_OPERATOR expr ';' 		
							|method_call ';' 							
							|IF condition block else_block 		    	
							|FOR IDENTIFIER ASSIGNMENT_OPERATOR expr ',' expr block 	
							|RETURN return_expr ';' 					
							|BREAK ';' 									
							|CONTINUE ';' 								
							|block 										

else_block:                 /*epsilon*/                  
                            |ELSE block                                

condition:                  '(' expr ')'                                

return_expr:                /*epsilon*/                                   
                            |expr                                       

expr:						location 							
							|method_call 							
							|literal 									
							|arith_expr 							
							|rel_expr 					              
							|equal_expr 						       
							|condition_expr 					
							|'-' expr 								
							|'!' expr 								
							|'(' expr ')'								
							
location:					IDENTIFIER 									
							|IDENTIFIER '[' expr ']' 				

method_call:			    method_name '('parameterList')' 			
						    |CALLOUT '(' STRING_LITERAL  callout_arg ')'

method_name:                IDENTIFIER                                  

parameterList:              /*epsilon*/                                 
                            | expr parameter                            

parameter:			    	/*epsilon*/ 							
					    	|',' expr parameter 						

literal:                    int_literal 								
						    |CHAR_LITERAL 								
						    |BOOL_LITERAL								

int_literal:				DECIMAL_LITERAL 							
						    |HEX_LITERAL								

arith_expr:					expr '*' expr 								
							|expr '/' expr 								
							|expr '%' expr 								
							|expr '+' expr 								
							|expr '-' expr 								

rel_expr:					expr '<' expr 								
							|expr '>' expr 							
							|expr LESS_EQUAL expr 						
							|expr GREATER_EQUAL expr 					

equal_expr:					expr EQUAL_EQUAL expr 						
							|expr NOT_EQUAL expr 						

condition_expr:				expr AND expr 								
							|expr OR expr 							

callout_arg:			    /*epsilon*/ 								
						    |callout_arg ',' expr        				
						    |callout_arg ',' STRING_LITERAL 			

