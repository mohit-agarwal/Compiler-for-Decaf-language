%{ 
	#include "code.cpp"
	#include "y.tab.h"

%}

%%

"class"  				    			return CLASS;

"Program" 								return PROGRAM;

"int"|"boolean"							{yylval.type_=strdup(yytext);return TYPE;}

"void"									{yylval.void_=strdup(yytext);return VOID;}

"true"									{yylval.bool_literal = true;return BOOL_LITERAL;}

"false"									{yylval.bool_literal = false;return BOOL_LITERAL;}

"for"									return FOR; 

"if"									return IF;

"else"									return ELSE;

"break"									return BREAK;

"continue"								return CONTINUE;

"return"								return RETURN;

"callout"								return CALLOUT;

[_a-zA-Z]+[_a-zA-Z0-9]*					{yylval.id_=strdup(yytext);return IDENTIFIER;}

[0-9]+								    {yylval.decimal_ = (int)strtol(yytext, NULL, 10); return DECIMAL_LITERAL;}

0x[0-9a-fA-F]+							{yylval.hex_ = (int)strtol(yytext, NULL, 16); return HEX_LITERAL;}

"="|"+="|"-="							{yylval.assignment_ = strdup(yytext);return ASSIGNMENT_OPERATOR;}

'(\\.|[^\\'])+'             			{yylval.char_literal=strdup(yytext);return CHAR_LITERAL;}

"=="									return EQUAL_EQUAL;

"<="									return LESS_EQUAL;

">="									return GREATER_EQUAL;

"!="									return NOT_EQUAL;

"||"									return OR;

"&&"									return AND;

\/\/.*$  														

[ \t\n]*		

\"(\\.|[^\\"])*\"                   	{yylval.id_=strdup(yytext);return STRING_LITERAL;}

		
.	                        			{return *yytext;}

%%

