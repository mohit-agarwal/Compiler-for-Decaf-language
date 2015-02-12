/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "code.y" /* yacc.c:339  */

	#include "code.cpp"
	class_node *root;
	int yylex();
	void yyerror(const char * s);


#line 74 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 10 "code.y" /* yacc.c:355  */

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

#line 191 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,    33,     2,     2,
      41,    42,    31,    29,    40,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      27,     2,    28,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PROGRAM", "FOR", "IF", "ELSE",
  "CONTINUE", "BREAK", "RETURN", "CALLOUT", "ASSIGNMENT_OPERATOR",
  "IDENTIFIER", "VOID", "TYPE", "HEX_LITERAL", "DECIMAL_LITERAL",
  "CHAR_LITERAL", "BOOL_LITERAL", "STRING_LITERAL", "OR", "AND",
  "EQUAL_EQUAL", "NOT_EQUAL", "GREATER_EQUAL", "LESS_EQUAL", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'{'", "'}'", "';'", "'['",
  "']'", "','", "'('", "')'", "$accept", "program", "field_decl_multiple",
  "field_decl_single", "idList", "id_single", "method_decl_multiple",
  "method_decl_single", "argumentList", "arg", "block",
  "var_decl_multiple", "var_decl_single", "variableList",
  "statement_multiple", "statement_single", "else_block", "condition",
  "return_expr", "expr", "location", "method_call", "method_name",
  "parameterList", "parameter", "literal", "int_literal", "arith_expr",
  "rel_expr", "equal_expr", "condition_expr", "callout_arg", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    60,    62,    43,
      45,    42,    47,    37,    33,   123,   125,    59,    91,    93,
      44,    40,    41
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
      73,    74,    72,    71,    69,    70,    67,    68,    64,    65,
      66,     0,    51,    27,     0,    56,    52,     0,    36,     0,
      53,    57,     0,    79,    78,    58,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   -56,   -56,   -56,   -32,   135,   -56,   136,    79,
     -24,   118,   -56,    97,   -56,   -56,   -56,   -56,   -56,   -55,
     120,   122,   -56,   -56,    17,   -56,   -15,   -56,   -56,   -56,
     -56,   -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     9,    14,    23,    10,    11,    24,    43,
      29,    37,    38,    52,    45,    62,   126,    72,    80,    81,
      82,    83,    65,   122,   145,    84,    85,    86,    87,    88,
      89,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 88 "code.y" /* yacc.c:1646  */
    {(yyval.programnode) = new class_node((yyvsp[-2].field_node_list),(yyvsp[-1].method_node_list));root=(yyval.programnode);}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 90 "code.y" /* yacc.c:1646  */
    {(yyval.field_node_list)=new list<field_decl_node*>();}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "code.y" /* yacc.c:1646  */
    {(yyval.field_node_list) = (yyvsp[-2].field_node_list); (yyval.field_node_list) -> push_back((yyvsp[-1].fieldnode));}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "code.y" /* yacc.c:1646  */
    {(yyval.fieldnode)=new field_decl_node((yyvsp[-1].type_),(yyvsp[0].id_list));}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "code.y" /* yacc.c:1646  */
    {idListVar *x=new idListVar((yyvsp[-1].id_));
                                                                        (yyvsp[0].id_list)->push_front(x);(yyval.id_list)=(yyvsp[0].id_list);}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 97 "code.y" /* yacc.c:1646  */
    {idListArr *x=new idListArr((yyvsp[-4].id_),(yyvsp[-2].decimal_));
                                                                        (yyvsp[0].id_list)->push_front(x);(yyval.id_list)=(yyvsp[0].id_list);}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "code.y" /* yacc.c:1646  */
    {(yyval.id_list)=new list<idList*>();}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "code.y" /* yacc.c:1646  */
    {idListVar *x=new idListVar((yyvsp[-1].id_));
																		(yyvsp[0].id_list)->push_front(x); (yyval.id_list)=(yyvsp[0].id_list);}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "code.y" /* yacc.c:1646  */
    {idListArr *x=new idListArr((yyvsp[-4].id_),(yyvsp[-2].decimal_));
																		(yyvsp[0].id_list)->push_front(x); (yyval.id_list)=(yyvsp[0].id_list);}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 106 "code.y" /* yacc.c:1646  */
    { (yyval.method_node_list) = new list<method_decl_node *>(); }
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 107 "code.y" /* yacc.c:1646  */
    {(yyval.method_node_list)=(yyvsp[0].method_node_list); (yyvsp[0].method_node_list)->push_front((yyvsp[-1].methodnode));}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 109 "code.y" /* yacc.c:1646  */
    {(yyval.methodnode) = new method_decl_node((yyvsp[-3].type_),(yyvsp[-2].id_),(yyvsp[-1].arg_node_list),(yyvsp[0].blocknode)); }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "code.y" /* yacc.c:1646  */
    {(yyval.methodnode) = new method_decl_node((yyvsp[-3].void_),(yyvsp[-2].id_),(yyvsp[-1].arg_node_list),(yyvsp[0].blocknode)); }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "code.y" /* yacc.c:1646  */
    {(yyval.arg_node_list) = new list<arg_node *> ();}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "code.y" /* yacc.c:1646  */
    {arg_node *a= new arg_node((yyvsp[-3].type_),(yyvsp[-2].id_));
                                                                        (yyvsp[-1].arg_node_list)->push_front(a); (yyval.arg_node_list)=(yyvsp[-1].arg_node_list);}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "code.y" /* yacc.c:1646  */
    {(yyval.arg_node_list) = new list<arg_node *>(); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "code.y" /* yacc.c:1646  */
    {arg_node *a = new arg_node((yyvsp[-2].type_),(yyvsp[-1].id_));
																		(yyvsp[0].arg_node_list)->push_front(a);(yyval.arg_node_list)=(yyvsp[0].arg_node_list); }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 120 "code.y" /* yacc.c:1646  */
    {(yyval.blocknode)=new block_node((yyvsp[-2].var_node_list),(yyvsp[-1].statement_list));}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "code.y" /* yacc.c:1646  */
    {(yyval.var_node_list) = new list<var_decl_node *>();}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "code.y" /* yacc.c:1646  */
    {(yyval.var_node_list) = (yyvsp[0].var_node_list);(yyvsp[0].var_node_list)->push_front((yyvsp[-2].varnode));}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 125 "code.y" /* yacc.c:1646  */
    {(yyvsp[0].string_list)->push_back((yyvsp[-1].id_));
																		(yyval.varnode)= new var_decl_node((yyvsp[-2].type_),(yyvsp[0].string_list));}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 128 "code.y" /* yacc.c:1646  */
    {(yyval.string_list) = new list<string>();}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 129 "code.y" /* yacc.c:1646  */
    {(yyvsp[0].string_list)->push_front((yyvsp[-1].id_)); (yyval.string_list)=(yyvsp[0].string_list);}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 131 "code.y" /* yacc.c:1646  */
    {(yyval.statement_list) = new list<statement_node *>();}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 132 "code.y" /* yacc.c:1646  */
    {(yyval.statement_list) = (yyvsp[-1].statement_list);(yyvsp[-1].statement_list)->push_back((yyvsp[0].stmt));}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 135 "code.y" /* yacc.c:1646  */
    {assignment_node *a = new assignment_node((yyvsp[-2].assignment_));
																		(yyval.stmt) = new assignment_stmt(a,(yyvsp[-3].loc_),(yyvsp[-1].exprnode));}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 137 "code.y" /* yacc.c:1646  */
    {(yyval.stmt)=(yyvsp[-1].methodcall);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 138 "code.y" /* yacc.c:1646  */
    {(yyval.stmt) = new if_else_stmt((yyvsp[-2].exprnode),(yyvsp[-1].blocknode),(yyvsp[0].blocknode));}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "code.y" /* yacc.c:1646  */
    { assignment_node *a = new assignment_node((yyvsp[-4].assignment_));
																		(yyval.stmt) = new for_stmt((yyvsp[-5].id_),a,(yyvsp[0].blocknode),(yyvsp[-3].exprnode),(yyvsp[-1].exprnode));}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 141 "code.y" /* yacc.c:1646  */
    {(yyval.stmt) = new return_stmt((yyvsp[-1].exprnode));}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 142 "code.y" /* yacc.c:1646  */
    {(yyval.stmt) = new break_stmt();}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 143 "code.y" /* yacc.c:1646  */
    {(yyval.stmt) = new continue_stmt();}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 144 "code.y" /* yacc.c:1646  */
    {(yyval.stmt) = (yyvsp[0].blocknode);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 147 "code.y" /* yacc.c:1646  */
    {(yyval.blocknode) = new block_node(new list<var_decl_node *>(), new list<statement_node *>());}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 148 "code.y" /* yacc.c:1646  */
    {(yyval.blocknode) = (yyvsp[0].blocknode);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 150 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[-1].exprnode);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 152 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new expr_node();}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 153 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].exprnode);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 155 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].loc_);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 156 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].methodcall);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].litr_);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 158 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].exprnode);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 159 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].exprnode);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 160 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].exprnode);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 161 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[0].exprnode);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 162 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new neg((yyvsp[0].exprnode)); }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 163 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new notof((yyvsp[0].exprnode));}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 164 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = (yyvsp[-1].exprnode);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 166 "code.y" /* yacc.c:1646  */
    {(yyval.loc_) = new location_node((yyvsp[0].id_));}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 167 "code.y" /* yacc.c:1646  */
    {(yyval.loc_) = new location_node((yyvsp[-3].id_),(yyvsp[-1].exprnode));}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "code.y" /* yacc.c:1646  */
    {(yyval.methodcall)= new method_call((yyvsp[-3].type_),(yyvsp[-1].expr_list));}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 170 "code.y" /* yacc.c:1646  */
    {(yyval.methodcall) = new method_call((yyvsp[-2].id_), (yyvsp[-1].expr_list));}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 172 "code.y" /* yacc.c:1646  */
    {(yyval.type_)=(yyvsp[0].id_);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 174 "code.y" /* yacc.c:1646  */
    {(yyval.expr_list) = new list<expr_node*>();}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 175 "code.y" /* yacc.c:1646  */
    {(yyvsp[0].expr_list)->push_front((yyvsp[-1].exprnode));(yyval.expr_list)=(yyvsp[0].expr_list);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 177 "code.y" /* yacc.c:1646  */
    {(yyval.expr_list) = new list<expr_node *>();}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 178 "code.y" /* yacc.c:1646  */
    {(yyvsp[0].expr_list)->push_front((yyvsp[-1].exprnode));(yyval.expr_list)=(yyvsp[0].expr_list);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "code.y" /* yacc.c:1646  */
    {(yyval.litr_) = new int_literal((yyvsp[0].decimal_));}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "code.y" /* yacc.c:1646  */
    {(yyval.litr_) = new char_literal((yyvsp[0].char_literal));}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "code.y" /* yacc.c:1646  */
    {(yyval.litr_) = new bool_literal((yyvsp[0].bool_literal));}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 184 "code.y" /* yacc.c:1646  */
    {(yyval.decimal_) = (yyvsp[0].decimal_);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "code.y" /* yacc.c:1646  */
    {(yyval.decimal_) = (yyvsp[0].hex_);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 187 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"*"); }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 188 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"/"); }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 189 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"%"); }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 190 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"+"); }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 191 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"-"); }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 193 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"<"); }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 194 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),">"); }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 195 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"<="); }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 196 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),">="); }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 198 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"=="); }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 199 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"!="); }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 201 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"&&"); }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 202 "code.y" /* yacc.c:1646  */
    {(yyval.exprnode) = new operator_node((yyvsp[-2].exprnode),(yyvsp[0].exprnode),"||"); }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 204 "code.y" /* yacc.c:1646  */
    {(yyval.expr_list) = new list<expr_node*>();}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 205 "code.y" /* yacc.c:1646  */
    {(yyval.expr_list) = (yyvsp[-2].expr_list); (yyvsp[-2].expr_list) -> push_back((yyvsp[0].exprnode));}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 206 "code.y" /* yacc.c:1646  */
    {(yyval.expr_list) = (yyvsp[-2].expr_list); (yyvsp[-2].expr_list) -> push_back(new expr_node((yyvsp[0].id_)));}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1895 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 208 "code.y" /* yacc.c:1906  */


int main()
{
	yyparse();
	root -> evaluate(0);
}
void yyerror(const char * s)
{
	return;
}

