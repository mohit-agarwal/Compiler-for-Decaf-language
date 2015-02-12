/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     NOT_EQUAL = 278,
     EQUAL_EQUAL = 279,
     LESS_EQUAL = 280,
     GREATER_EQUAL = 281
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
#define NOT_EQUAL 278
#define EQUAL_EQUAL 279
#define LESS_EQUAL 280
#define GREATER_EQUAL 281




/* Copy the first part of user declarations.  */
#line 1 "llvmCodeGen.y"

	#include "llvmCodeGen.cpp"
	class_node *root;
	int yylex();
	void yyerror(const char * s);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 10 "llvmCodeGen.y"
{
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
/* Line 193 of yacc.c.  */
#line 181 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 194 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,    33,     2,     2,
      41,    42,    31,    29,    40,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      25,     2,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    15,    18,    21,    27,    28,
      32,    39,    40,    43,    48,    53,    56,    62,    63,    68,
      73,    74,    78,    82,    83,    87,    88,    91,    96,    99,
     104,   112,   116,   119,   122,   124,   125,   128,   132,   133,
     135,   137,   139,   141,   143,   145,   147,   149,   152,   155,
     159,   161,   166,   171,   177,   179,   180,   183,   184,   188,
     190,   192,   194,   196,   198,   202,   206,   210,   214,   218,
     222,   226,   230,   234,   238,   242,   246,   250,   251,   255
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,     4,    35,    45,    49,    36,    -1,
      -1,    45,    46,    37,    -1,    15,    47,    -1,    13,    48,
      -1,    13,    38,    69,    39,    48,    -1,    -1,    40,    13,
      48,    -1,    40,    13,    38,    69,    39,    48,    -1,    -1,
      50,    49,    -1,    15,    13,    51,    53,    -1,    14,    13,
      51,    53,    -1,    41,    42,    -1,    41,    15,    13,    52,
      42,    -1,    -1,    40,    15,    13,    52,    -1,    35,    54,
      57,    36,    -1,    -1,    55,    37,    54,    -1,    15,    13,
      56,    -1,    -1,    40,    13,    56,    -1,    -1,    57,    58,
      -1,    63,    12,    62,    37,    -1,    64,    37,    -1,     6,
      60,    53,    59,    -1,     5,    13,    12,    62,    40,    62,
      53,    -1,    10,    61,    37,    -1,     9,    37,    -1,     8,
      37,    -1,    53,    -1,    -1,     7,    53,    -1,    41,    62,
      42,    -1,    -1,    62,    -1,    63,    -1,    64,    -1,    68,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    30,
      62,    -1,    34,    62,    -1,    41,    62,    42,    -1,    13,
      -1,    13,    38,    62,    39,    -1,    65,    41,    66,    42,
      -1,    11,    41,    20,    74,    42,    -1,    13,    -1,    -1,
      62,    67,    -1,    -1,    40,    62,    67,    -1,    69,    -1,
      18,    -1,    19,    -1,    17,    -1,    16,    -1,    62,    31,
      62,    -1,    62,    32,    62,    -1,    62,    33,    62,    -1,
      62,    29,    62,    -1,    62,    30,    62,    -1,    62,    25,
      62,    -1,    62,    26,    62,    -1,    62,    27,    62,    -1,
      62,    28,    62,    -1,    62,    24,    62,    -1,    62,    23,
      62,    -1,    62,    22,    62,    -1,    62,    21,    62,    -1,
      -1,    74,    40,    62,    -1,    74,    40,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    90,    91,    93,    95,    97,   100,   101,
     103,   106,   107,   109,   110,   112,   113,   116,   117,   120,
     122,   123,   125,   128,   129,   131,   132,   135,   137,   138,
     139,   141,   142,   143,   144,   147,   148,   150,   152,   153,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     166,   167,   169,   170,   172,   174,   175,   177,   178,   180,
     181,   182,   184,   185,   187,   188,   189,   190,   191,   193,
     194,   195,   196,   198,   199,   201,   202,   204,   205,   206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PROGRAM", "FOR", "IF", "ELSE",
  "CONTINUE", "BREAK", "RETURN", "CALLOUT", "ASSIGNMENT_OPERATOR",
  "IDENTIFIER", "VOID", "TYPE", "HEX_LITERAL", "DECIMAL_LITERAL",
  "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", "OR", "AND",
  "NOT_EQUAL", "EQUAL_EQUAL", "'<'", "'>'", "LESS_EQUAL", "GREATER_EQUAL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'{'", "'}'", "';'", "'['",
  "']'", "','", "'('", "')'", "$accept", "program", "field_decl_multiple",
  "field_decl_single", "idList", "id_single", "method_decl_multiple",
  "method_decl_single", "argumentList", "arg", "block",
  "var_decl_multiple", "var_decl_single", "variableList",
  "statement_multiple", "statement_single", "else_block", "condition",
  "return_expr", "expr", "location", "method_call", "method_name",
  "parameterList", "parameter", "literal", "int_literal", "arith_expr",
  "rel_expr", "equal_expr", "condition_expr", "callout_arg", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    60,    62,   280,   281,    43,
      45,    42,    47,    37,    33,   123,   125,    59,    91,    93,
      44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    47,    47,    48,    48,
      48,    49,    49,    50,    50,    51,    51,    52,    52,    53,
      54,    54,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    64,    65,    66,    66,    67,    67,    68,
      68,    68,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     3,     2,     2,     5,     0,     3,
       6,     0,     2,     4,     4,     2,     5,     0,     4,     4,
       0,     3,     3,     0,     3,     0,     2,     4,     2,     4,
       7,     3,     2,     2,     1,     0,     2,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     4,     4,     5,     1,     0,     2,     0,     3,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,    11,     0,     0,     0,
       0,    11,     0,     8,     5,     4,     2,     0,    12,     0,
       0,     0,     0,     6,     0,     0,     0,    15,    20,    14,
      63,    62,     0,     8,    13,    17,     0,    25,     0,     8,
       0,     9,     0,     0,    23,     0,    20,     7,     0,     0,
      16,     0,    22,     0,     0,     0,     0,    38,     0,    50,
      19,    34,    26,     0,     0,     0,    21,     8,    17,    23,
       0,     0,     0,    33,    32,    60,    61,     0,     0,     0,
       0,    39,    40,    41,    42,    59,    43,    44,    45,    46,
       0,     0,     0,    28,    55,    10,    18,    24,     0,     0,
      35,    47,    48,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,    57,     0,     0,    37,     0,    29,    49,    76,    75,
      74,    73,    69,    70,    71,    72,    67,    68,    64,    65,
      66,     0,    51,    27,     0,    56,    52,     0,    36,     0,
      53,    57,     0,    79,    78,    58,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     9,    14,    23,    10,    11,    24,    43,
      29,    37,    38,    52,    45,    62,   126,    72,    80,    81,
      82,    83,    65,   122,   145,    84,    85,    86,    87,    88,
      89,   141
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int16 yypact[] =
{
      29,    30,    38,    31,   -56,   -56,    -1,    27,    52,    32,
      54,     5,    26,   -23,   -56,   -56,   -56,    75,   -56,   -13,
      58,    47,    82,   -56,    58,    26,    83,   -56,    85,   -56,
     -56,   -56,    67,   -12,   -56,    68,    94,   -56,    72,    70,
      47,   -56,    96,    71,    74,    36,    85,   -56,    73,   102,
     -56,   104,   -56,   105,    78,    84,    87,    86,    81,   -11,
     -56,   -56,   -56,   111,    88,   101,   -56,    70,    68,    74,
     114,    86,    58,   -56,   -56,   -56,   -56,    86,    86,    86,
     106,   243,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     124,    86,    86,   -56,    86,   -56,   -56,   -56,    86,   108,
     138,   -28,   -56,   130,   -56,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,   -56,   192,
     211,   152,   107,   172,   -56,    58,   -56,   -56,   255,   266,
      53,    53,   -21,   -21,   -21,   -21,   -28,   -28,   -56,   -56,
     -56,    -9,   -56,   -56,    86,   -56,   -56,    86,   -56,    57,
     -56,   152,   228,   -56,   243,   -56,   -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   -56,   -56,   -56,   -32,   135,   -56,   136,    79,
     -24,   118,   -56,    97,   -56,   -56,   -56,   -56,   -56,   -55,
     120,   122,   -56,   -56,    17,   -56,   -15,   -56,   -56,   -56,
     -56,   -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -55
static const yytype_int16 yytable[] =
{
      34,    41,    26,   115,   116,   117,    32,    47,   113,   114,
     115,   116,   117,     7,     8,    21,    99,    22,    19,     7,
      17,    61,   101,   102,   103,    48,    40,    91,    22,    27,
     -54,   149,     1,   150,     3,    95,   119,   120,     4,   121,
      12,    53,    54,   123,    55,    56,    57,    58,   100,    59,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    30,    31,    13,     5,    19,    58,    15,
      59,    28,    60,    30,    31,    75,    76,   153,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    77,    25,   151,
      16,    78,   152,    28,   154,    33,    35,    58,    79,    59,
      36,   148,    30,    31,    75,    76,    39,    44,    42,    46,
      22,    49,    67,    50,    51,    68,    77,    69,    70,    71,
      78,    73,    90,    92,    74,    93,    98,    79,   156,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    94,   104,   118,   125,    18,    96,    20,   146,
     124,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,    66,    63,    97,    64,   155,     0,
       0,     0,   127,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,   144,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,   147,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,   142,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,     0,     0,     0,   143,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,    28,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      24,    33,    15,    31,    32,    33,    21,    39,    29,    30,
      31,    32,    33,    14,    15,    38,    71,    40,    41,    14,
      15,    45,    77,    78,    79,    40,    38,    38,    40,    42,
      41,    40,     3,    42,     4,    67,    91,    92,     0,    94,
      13,     5,     6,    98,     8,     9,    10,    11,    72,    13,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    16,    17,    13,    35,    41,    11,    37,
      13,    35,    36,    16,    17,    18,    19,    20,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    30,    13,   144,
      36,    34,   147,    35,   149,    13,    13,    11,    41,    13,
      15,   125,    16,    17,    18,    19,    39,    13,    40,    37,
      40,    15,    39,    42,    40,    13,    30,    13,    13,    41,
      34,    37,    41,    12,    37,    37,    12,    41,   152,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    41,    37,    20,     7,    11,    68,    12,    42,
      42,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    46,    45,    69,    45,   151,    -1,
      -1,    -1,    42,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    37,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,     4,     0,    35,    45,    14,    15,    46,
      49,    50,    13,    13,    47,    37,    36,    15,    49,    41,
      51,    38,    40,    48,    51,    13,    15,    42,    35,    53,
      16,    17,    69,    13,    53,    13,    15,    54,    55,    39,
      38,    48,    40,    52,    13,    57,    37,    48,    69,    15,
      42,    40,    56,     5,     6,     8,     9,    10,    11,    13,
      36,    53,    58,    63,    64,    65,    54,    39,    13,    13,
      13,    41,    60,    37,    37,    18,    19,    30,    34,    41,
      61,    62,    63,    64,    68,    69,    70,    71,    72,    73,
      41,    38,    12,    37,    41,    48,    52,    56,    12,    62,
      53,    62,    62,    62,    37,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    20,    62,
      62,    62,    66,    62,    42,     7,    59,    42,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    74,    39,    37,    40,    67,    42,    40,    53,    40,
      42,    62,    62,    20,    62,    67,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 88 "llvmCodeGen.y"
    {(yyval.programnode) = new class_node((yyvsp[(4) - (6)].field_node_list),(yyvsp[(5) - (6)].method_node_list));root=(yyval.programnode);}
    break;

  case 3:
#line 90 "llvmCodeGen.y"
    {(yyval.field_node_list)=new list<field_decl_node*>();}
    break;

  case 4:
#line 91 "llvmCodeGen.y"
    {(yyval.field_node_list) = (yyvsp[(1) - (3)].field_node_list); (yyval.field_node_list) -> push_back((yyvsp[(2) - (3)].fieldnode));}
    break;

  case 5:
#line 93 "llvmCodeGen.y"
    {(yyval.fieldnode)=new field_decl_node((yyvsp[(1) - (2)].type_),(yyvsp[(2) - (2)].id_list));}
    break;

  case 6:
#line 95 "llvmCodeGen.y"
    {idListVar *x=new idListVar((yyvsp[(1) - (2)].id_));
                                                                        (yyvsp[(2) - (2)].id_list)->push_front(x);(yyval.id_list)=(yyvsp[(2) - (2)].id_list);}
    break;

  case 7:
#line 97 "llvmCodeGen.y"
    {idListArr *x=new idListArr((yyvsp[(1) - (5)].id_),(yyvsp[(3) - (5)].decimal_));
                                                                        (yyvsp[(5) - (5)].id_list)->push_front(x);(yyval.id_list)=(yyvsp[(5) - (5)].id_list);}
    break;

  case 8:
#line 100 "llvmCodeGen.y"
    {(yyval.id_list)=new list<idList*>();}
    break;

  case 9:
#line 101 "llvmCodeGen.y"
    {idListVar *x=new idListVar((yyvsp[(2) - (3)].id_));
																		(yyvsp[(3) - (3)].id_list)->push_front(x); (yyval.id_list)=(yyvsp[(3) - (3)].id_list);}
    break;

  case 10:
#line 103 "llvmCodeGen.y"
    {idListArr *x=new idListArr((yyvsp[(2) - (6)].id_),(yyvsp[(4) - (6)].decimal_));
																		(yyvsp[(6) - (6)].id_list)->push_front(x); (yyval.id_list)=(yyvsp[(6) - (6)].id_list);}
    break;

  case 11:
#line 106 "llvmCodeGen.y"
    { (yyval.method_node_list) = new list<method_decl_node *>(); }
    break;

  case 12:
#line 107 "llvmCodeGen.y"
    {(yyval.method_node_list)=(yyvsp[(2) - (2)].method_node_list); (yyvsp[(2) - (2)].method_node_list)->push_front((yyvsp[(1) - (2)].methodnode));}
    break;

  case 13:
#line 109 "llvmCodeGen.y"
    {(yyval.methodnode) = new method_decl_node((yyvsp[(1) - (4)].type_),(yyvsp[(2) - (4)].id_),(yyvsp[(3) - (4)].arg_node_list),(yyvsp[(4) - (4)].blocknode)); }
    break;

  case 14:
#line 110 "llvmCodeGen.y"
    {(yyval.methodnode) = new method_decl_node((yyvsp[(1) - (4)].void_),(yyvsp[(2) - (4)].id_),(yyvsp[(3) - (4)].arg_node_list),(yyvsp[(4) - (4)].blocknode)); }
    break;

  case 15:
#line 112 "llvmCodeGen.y"
    {(yyval.arg_node_list) = new list<arg_node *> ();}
    break;

  case 16:
#line 113 "llvmCodeGen.y"
    {arg_node *a= new arg_node((yyvsp[(2) - (5)].type_),(yyvsp[(3) - (5)].id_));
                                                                        (yyvsp[(4) - (5)].arg_node_list)->push_front(a); (yyval.arg_node_list)=(yyvsp[(4) - (5)].arg_node_list);}
    break;

  case 17:
#line 116 "llvmCodeGen.y"
    {(yyval.arg_node_list) = new list<arg_node *>(); }
    break;

  case 18:
#line 117 "llvmCodeGen.y"
    {arg_node *a = new arg_node((yyvsp[(2) - (4)].type_),(yyvsp[(3) - (4)].id_));
																		(yyvsp[(4) - (4)].arg_node_list)->push_front(a);(yyval.arg_node_list)=(yyvsp[(4) - (4)].arg_node_list); }
    break;

  case 19:
#line 120 "llvmCodeGen.y"
    {(yyval.blocknode)=new block_node((yyvsp[(2) - (4)].var_node_list),(yyvsp[(3) - (4)].statement_list));}
    break;

  case 20:
#line 122 "llvmCodeGen.y"
    {(yyval.var_node_list) = new list<var_decl_node *>();}
    break;

  case 21:
#line 123 "llvmCodeGen.y"
    {(yyval.var_node_list) = (yyvsp[(3) - (3)].var_node_list);(yyvsp[(3) - (3)].var_node_list)->push_front((yyvsp[(1) - (3)].varnode));}
    break;

  case 22:
#line 125 "llvmCodeGen.y"
    {(yyvsp[(3) - (3)].string_list)->push_back((yyvsp[(2) - (3)].id_));
																		(yyval.varnode)= new var_decl_node((yyvsp[(1) - (3)].type_),(yyvsp[(3) - (3)].string_list));}
    break;

  case 23:
#line 128 "llvmCodeGen.y"
    {(yyval.string_list) = new list<string>();}
    break;

  case 24:
#line 129 "llvmCodeGen.y"
    {(yyvsp[(3) - (3)].string_list)->push_front((yyvsp[(2) - (3)].id_)); (yyval.string_list)=(yyvsp[(3) - (3)].string_list);}
    break;

  case 25:
#line 131 "llvmCodeGen.y"
    {(yyval.statement_list) = new list<statement_node *>();}
    break;

  case 26:
#line 132 "llvmCodeGen.y"
    {(yyval.statement_list) = (yyvsp[(1) - (2)].statement_list);(yyvsp[(1) - (2)].statement_list)->push_back((yyvsp[(2) - (2)].stmt));}
    break;

  case 27:
#line 135 "llvmCodeGen.y"
    {assignment_node *a = new assignment_node((yyvsp[(2) - (4)].assignment_));
																		(yyval.stmt) = new assignment_stmt(a,(yyvsp[(1) - (4)].loc_),(yyvsp[(3) - (4)].exprnode));}
    break;

  case 28:
#line 137 "llvmCodeGen.y"
    {(yyval.stmt)=(yyvsp[(1) - (2)].methodcall);}
    break;

  case 29:
#line 138 "llvmCodeGen.y"
    {(yyval.stmt) = new if_else_stmt((yyvsp[(2) - (4)].exprnode),(yyvsp[(3) - (4)].blocknode),(yyvsp[(4) - (4)].blocknode));}
    break;

  case 30:
#line 139 "llvmCodeGen.y"
    { assignment_node *a = new assignment_node((yyvsp[(3) - (7)].assignment_));
																		(yyval.stmt) = new for_stmt((yyvsp[(2) - (7)].id_),a,(yyvsp[(7) - (7)].blocknode),(yyvsp[(4) - (7)].exprnode),(yyvsp[(6) - (7)].exprnode));}
    break;

  case 31:
#line 141 "llvmCodeGen.y"
    {(yyval.stmt) = new return_stmt((yyvsp[(2) - (3)].exprnode));}
    break;

  case 32:
#line 142 "llvmCodeGen.y"
    {(yyval.stmt) = new break_stmt();}
    break;

  case 33:
#line 143 "llvmCodeGen.y"
    {(yyval.stmt) = new continue_stmt();}
    break;

  case 34:
#line 144 "llvmCodeGen.y"
    {(yyval.stmt) = (yyvsp[(1) - (1)].blocknode);}
    break;

  case 35:
#line 147 "llvmCodeGen.y"
    {(yyval.blocknode) = new block_node(new list<var_decl_node *>(), new list<statement_node *>());}
    break;

  case 36:
#line 148 "llvmCodeGen.y"
    {(yyval.blocknode) = (yyvsp[(2) - (2)].blocknode);}
    break;

  case 37:
#line 150 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(2) - (3)].exprnode);}
    break;

  case 38:
#line 152 "llvmCodeGen.y"
    {(yyval.exprnode) = new expr_node();}
    break;

  case 39:
#line 153 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].exprnode);}
    break;

  case 40:
#line 155 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].loc_);}
    break;

  case 41:
#line 156 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].methodcall);}
    break;

  case 42:
#line 157 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].litr_);}
    break;

  case 43:
#line 158 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].exprnode);}
    break;

  case 44:
#line 159 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].exprnode);}
    break;

  case 45:
#line 160 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].exprnode);}
    break;

  case 46:
#line 161 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(1) - (1)].exprnode);}
    break;

  case 47:
#line 162 "llvmCodeGen.y"
    {(yyval.exprnode) = new neg((yyvsp[(2) - (2)].exprnode)); }
    break;

  case 48:
#line 163 "llvmCodeGen.y"
    {(yyval.exprnode) = new notof((yyvsp[(2) - (2)].exprnode));}
    break;

  case 49:
#line 164 "llvmCodeGen.y"
    {(yyval.exprnode) = (yyvsp[(2) - (3)].exprnode);}
    break;

  case 50:
#line 166 "llvmCodeGen.y"
    {(yyval.loc_) = new location_node((yyvsp[(1) - (1)].id_));}
    break;

  case 51:
#line 167 "llvmCodeGen.y"
    {(yyval.loc_) = new location_node((yyvsp[(1) - (4)].id_),(yyvsp[(3) - (4)].exprnode));}
    break;

  case 52:
#line 169 "llvmCodeGen.y"
    {(yyval.methodcall)= new method_call((yyvsp[(1) - (4)].type_),(yyvsp[(3) - (4)].expr_list));}
    break;

  case 53:
#line 170 "llvmCodeGen.y"
    {(yyval.methodcall) = new method_call((yyvsp[(3) - (5)].id_), (yyvsp[(4) - (5)].expr_list));}
    break;

  case 54:
#line 172 "llvmCodeGen.y"
    {(yyval.type_)=(yyvsp[(1) - (1)].id_);}
    break;

  case 55:
#line 174 "llvmCodeGen.y"
    {(yyval.expr_list) = new list<expr_node*>();}
    break;

  case 56:
#line 175 "llvmCodeGen.y"
    {(yyvsp[(2) - (2)].expr_list)->push_front((yyvsp[(1) - (2)].exprnode));(yyval.expr_list)=(yyvsp[(2) - (2)].expr_list);}
    break;

  case 57:
#line 177 "llvmCodeGen.y"
    {(yyval.expr_list) = new list<expr_node *>();}
    break;

  case 58:
#line 178 "llvmCodeGen.y"
    {(yyvsp[(3) - (3)].expr_list)->push_front((yyvsp[(2) - (3)].exprnode));(yyval.expr_list)=(yyvsp[(3) - (3)].expr_list);}
    break;

  case 59:
#line 180 "llvmCodeGen.y"
    {(yyval.litr_) = new int_literal((yyvsp[(1) - (1)].decimal_));}
    break;

  case 60:
#line 181 "llvmCodeGen.y"
    {(yyval.litr_) = new char_literal((yyvsp[(1) - (1)].char_literal));}
    break;

  case 61:
#line 182 "llvmCodeGen.y"
    {(yyval.litr_) = new bool_literal((yyvsp[(1) - (1)].bool_literal));}
    break;

  case 62:
#line 184 "llvmCodeGen.y"
    {(yyval.decimal_) = (yyvsp[(1) - (1)].decimal_);}
    break;

  case 63:
#line 185 "llvmCodeGen.y"
    {(yyval.decimal_) = (yyvsp[(1) - (1)].hex_);}
    break;

  case 64:
#line 187 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"*"); }
    break;

  case 65:
#line 188 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"/"); }
    break;

  case 66:
#line 189 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"%"); }
    break;

  case 67:
#line 190 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"+"); }
    break;

  case 68:
#line 191 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"-"); }
    break;

  case 69:
#line 193 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"<"); }
    break;

  case 70:
#line 194 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),">"); }
    break;

  case 71:
#line 195 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"<="); }
    break;

  case 72:
#line 196 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),">="); }
    break;

  case 73:
#line 198 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"=="); }
    break;

  case 74:
#line 199 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"!="); }
    break;

  case 75:
#line 201 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"&&"); }
    break;

  case 76:
#line 202 "llvmCodeGen.y"
    {(yyval.exprnode) = new operator_node((yyvsp[(1) - (3)].exprnode),(yyvsp[(3) - (3)].exprnode),"||"); }
    break;

  case 77:
#line 204 "llvmCodeGen.y"
    {(yyval.expr_list) = new list<expr_node*>();}
    break;

  case 78:
#line 205 "llvmCodeGen.y"
    {(yyval.expr_list) = (yyvsp[(1) - (3)].expr_list); (yyvsp[(1) - (3)].expr_list) -> push_back((yyvsp[(3) - (3)].exprnode));}
    break;

  case 79:
#line 206 "llvmCodeGen.y"
    {(yyval.expr_list) = (yyvsp[(1) - (3)].expr_list); (yyvsp[(1) - (3)].expr_list) -> push_back(new expr_node((yyvsp[(3) - (3)].id_)));}
    break;


/* Line 1267 of yacc.c.  */
#line 1953 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 208 "llvmCodeGen.y"


int main()
{
	yyparse();
	root->Codegen();
    TheModule->dump();
    //std::string ec;
	//LLVMWriteBitcodeToFile(&TheModule, "output.txt");
	//llvm::raw_fd_ostream fd("output.txt",ec,llvm::sys::fs::F_None);
    //llvm::WriteBitcodeToFile(TheModule,fd);
    //bool unbuffered = false;
   // int fd = open("output.txt",O_WRONLY);
   // llvm::raw_fd_ostream ro(fd,false); 
   // llvm::WriteBitcodeToFile(TheModule, ro); 
    //const char *Path = "output.s"; 
    //int ans = LLVMWriteBitcodeToFile(TheModule, Path);
}
void yyerror(const char * s)
{
	return;
}

