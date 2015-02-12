/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CLASS = 258,
    PROGRAM = 259,
    FOR = 260,
    IF = 261,
    ELSE = 262,
    CONTINUE = 263,
    BREAK = 264,
    RETURN = 265,
    CALLOUT = 266,
    ASSIGNMENT_OPERATOR = 267,
    IDENTIFIER = 268,
    VOID = 269,
    TYPE = 270,
    HEX_LITERAL = 271,
    DECIMAL_LITERAL = 272,
    CHAR_LITERAL = 273,
    BOOL_LITERAL = 274,
    STRING_LITERAL = 275,
    OR = 276,
    AND = 277,
    EQUAL_EQUAL = 278,
    NOT_EQUAL = 279,
    GREATER_EQUAL = 280,
    LESS_EQUAL = 281
  };
#endif
/* Tokens.  */
#define CLASS 258
#define PROGRAM 259
#define FOR 260
#define IF 261
#define ELSE 262
#define CONTINUE 263
#define BREAK 264
#define RETURN 265
#define CALLOUT 266
#define ASSIGNMENT_OPERATOR 267
#define IDENTIFIER 268
#define VOID 269
#define TYPE 270
#define HEX_LITERAL 271
#define DECIMAL_LITERAL 272
#define CHAR_LITERAL 273
#define BOOL_LITERAL 274
#define STRING_LITERAL 275
#define OR 276
#define AND 277
#define EQUAL_EQUAL 278
#define NOT_EQUAL 279
#define GREATER_EQUAL 280
#define LESS_EQUAL 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "code.y" /* yacc.c:1909  */

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

#line 131 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
