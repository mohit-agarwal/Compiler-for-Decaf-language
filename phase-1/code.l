%{ 
	#include "code.tab.h"
%}

%%

"class"  				    			return CLASS;

"Program" 								return PROGRAM;

"int"|"boolean"							{return TYPE;}

"void"									{return VOID;}

"true"									{return BOOL_LITERAL;}

"false"									{return BOOL_LITERAL;}

"for"									return FOR; 

"if"									return IF;

"else"									return ELSE;

"break"									return BREAK;

"continue"								return CONTINUE;

"return"								return RETURN;

"callout"								return CALLOUT;

[_a-zA-Z]+[_a-zA-Z0-9]*					{return IDENTIFIER;}

[0-9]+								    {return DECIMAL_LITERAL;}

0x[0-9a-fA-F]+							{return HEX_LITERAL;}

"="|"+="|"-="							{return ASSIGNMENT_OPERATOR;}

'(\\.|[^\\'])+'             			{return CHAR_LITERAL;}

"=="									return EQUAL_EQUAL;

"<="									return LESS_EQUAL;

">="									return GREATER_EQUAL;

"!="									return NOT_EQUAL;

"||"									return OR;

"&&"									return AND;

\/\/.*$  														

[ \t\n]*		

\"(\\.|[^\\"])*\"                   	{return STRING_LITERAL;}

		
.	                        			{return *yytext;}

%%

int main(){
	int a = yyparse();
    if(!a)
        printf("Valid Code.\n");
    else
        printf("Not Valid Code.\n");
}
