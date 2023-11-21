
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "final.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
    #include<string.h>
	
	typedef struct {
    char name[1009];
	} Variable;

	Variable variables[1010];


	int val[1009] = {};
	int idx=1;


	int isDeclared(char *str)
    {

		for(int i=1;i<idx;i++){

			if(strcmp(variables[i].name, str)==0){

				return i; 
			}
		}

		return 0;
	}

	int addNewVal(char *str)
    {

		if(isDeclared(str)!=0)
        {
            return 0;
        }

		strcpy(variables[idx].name ,str);
		val[idx]=0;
		idx++;
	}
	int getVal(char *str)
    {
		
		int loc;
		loc = isDeclared(str);
		return val[loc];
	}

	int setVal(char *str,int v)
    {
		int id = isDeclared(str);
		if(id == 0)
		{
			printf("Error!! Variable not declared!!");
		}

		val[id] = v;
	}


/* Line 189 of yacc.c  */
#line 137 "final.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VAR = 259,
     STRING = 260,
     CASE = 261,
     SWITCH = 262,
     DEFAULT = 263,
     PRINT = 264,
     START = 265,
     END = 266,
     IF = 267,
     ELSE = 268,
     ELSEIF = 269,
     LOOP = 270,
     WHILE = 271,
     INT = 272,
     CHAR = 273,
     FLOAT = 274,
     ARRAY = 275,
     FACTORIAL = 276,
     ODDEVEN = 277,
     SIN = 278,
     COS = 279,
     TAN = 280,
     LOG = 281,
     LN = 282,
     SQRT = 283,
     PLUS = 284,
     MINUS = 285,
     MUL = 286,
     DIV = 287,
     MOD = 288,
     AND = 289,
     OR = 290,
     NOT = 291,
     MAINFUNC = 292,
     MAINFUNCSTART = 293,
     MAINFUNCEND = 294,
     ENDLINE = 295,
     EQ = 296,
     LEQ = 297,
     GEQ = 298,
     LES = 299,
     GRT = 300,
     INC = 301,
     DEC = 302,
     INIT = 303,
     UNTL = 304,
     STEP = 305,
     NEQ = 306,
     IFX = 307,
     GRQ = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 67 "final.y"

	char text[1009];
	int val;



/* Line 214 of yacc.c  */
#line 233 "final.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 245 "final.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   617

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
      56,    55,    57,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    59,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    18,    21,    26,
      32,    38,    46,    58,    77,    87,   105,   111,   117,   123,
     131,   139,   142,   144,   146,   148,   152,   154,   156,   159,
     160,   163,   169,   174,   176,   178,   182,   186,   190,   194,
     198,   202,   206,   210,   214,   218,   222,   226,   230,   233,
     236,   239,   242,   245,   248,   252,   256,   259,   262
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    37,    54,    38,    62,    39,    -1,    -1,
      62,    63,    -1,    40,    -1,    64,    40,    -1,    71,    40,
      -1,     4,    55,    71,    40,    -1,     9,    56,    71,    57,
      40,    -1,     9,    56,     5,    57,    40,    -1,    12,    56,
      71,    57,    10,    63,    11,    -1,    12,    56,    71,    57,
      10,    63,    11,    13,    10,    63,    11,    -1,    12,    56,
      71,    57,    10,    63,    11,    14,    56,    71,    57,    10,
      63,    11,    13,    10,    63,    11,    -1,    16,    56,     3,
      44,     3,    57,    10,    63,    11,    -1,    15,    56,    48,
      55,    71,    58,    49,    55,    71,    58,    50,    55,    71,
      57,    10,    63,    11,    -1,     9,    56,    71,    57,    40,
      -1,    21,    56,    71,    57,    40,    -1,    22,    56,    71,
      57,    40,    -1,    20,    65,     4,    56,     3,    57,    40,
      -1,     7,    56,     3,    57,    10,    67,    11,    -1,    65,
      66,    -1,    17,    -1,    19,    -1,    18,    -1,    66,    58,
       4,    -1,     4,    -1,    68,    -1,    68,    70,    -1,    -1,
      68,    69,    -1,     6,     3,    54,    71,    40,    -1,     8,
      54,    71,    40,    -1,     3,    -1,     4,    -1,    71,    29,
      71,    -1,    71,    30,    71,    -1,    71,    31,    71,    -1,
      71,    32,    71,    -1,    71,    33,    71,    -1,    71,    44,
      71,    -1,    71,    42,    71,    -1,    71,    45,    71,    -1,
      71,    43,    71,    -1,    71,    41,    71,    -1,    71,    51,
      71,    -1,    71,    34,    71,    -1,    71,    35,    71,    -1,
      36,    71,    -1,    23,    71,    -1,    24,    71,    -1,    25,
      71,    -1,    26,    71,    -1,    27,    71,    -1,    56,    71,
      57,    -1,    71,    59,    71,    -1,    46,    71,    -1,    47,
      71,    -1,    28,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   104,   105,   108,   109,   111,   118,   125,
     127,   145,   158,   172,   190,   199,   209,   212,   225,   237,
     243,   250,   255,   256,   257,   260,   268,   278,   279,   282,
     283,   286,   288,   294,   295,   307,   309,   311,   313,   326,
     341,   343,   345,   347,   349,   351,   353,   355,   357,   359,
     361,   363,   365,   367,   369,   371,   373,   375,   377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VAR", "STRING", "CASE",
  "SWITCH", "DEFAULT", "PRINT", "START", "END", "IF", "ELSE", "ELSEIF",
  "LOOP", "WHILE", "INT", "CHAR", "FLOAT", "ARRAY", "FACTORIAL", "ODDEVEN",
  "SIN", "COS", "TAN", "LOG", "LN", "SQRT", "PLUS", "MINUS", "MUL", "DIV",
  "MOD", "AND", "OR", "NOT", "MAINFUNC", "MAINFUNCSTART", "MAINFUNCEND",
  "ENDLINE", "EQ", "LEQ", "GEQ", "LES", "GRT", "INC", "DEC", "INIT",
  "UNTL", "STEP", "NEQ", "IFX", "GRQ", "':'", "'='", "'<'", "'>'", "','",
  "'^'", "$accept", "program", "line", "statement", "declaration", "TYPE",
  "ID1", "SWITCHCASE", "case", "caseNo", "default", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    58,    61,    60,    62,    44,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    65,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     2,     2,     4,     5,
       5,     7,    11,    18,     9,    17,     5,     5,     5,     7,
       7,     2,     1,     1,     1,     3,     1,     1,     2,     0,
       2,     5,     4,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     3,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    33,    34,     0,
       0,     0,     0,     0,    22,    24,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     5,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    49,    50,    51,    52,
      53,    58,    48,    56,    57,     0,     6,    26,    21,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,    35,    36,    37,    38,
      39,    46,    47,    44,    41,    43,    40,    42,    45,    55,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    29,    10,     9,     0,     0,     0,     0,    17,    18,
       0,    27,     0,     0,     0,     0,    20,     0,     0,    30,
      28,    11,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    32,     0,
       0,     0,    31,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    32,    33,    34,    58,   120,   121,   129,
     130,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -51
static const yytype_int16 yypact[] =
{
     -11,   -27,    34,    18,   -51,   -51,    51,   -51,     2,     3,
       5,     6,     9,    24,   -51,   -51,   -51,    -5,    25,    26,
     163,   163,   163,   163,   163,   163,   163,   -51,   -51,   163,
     163,   163,   -51,    44,    82,   182,   163,    85,   149,   163,
      41,    89,    90,   163,   163,   -51,   -13,   -13,   -13,   -13,
     -13,   553,    58,   -23,   -23,   205,   -51,   -51,    37,   163,
     163,   163,   163,   163,   163,   163,   -51,   163,   163,   163,
     163,   163,   163,   163,   236,    39,    47,   259,   290,    50,
      64,    54,   321,   352,   -51,   107,   558,   558,   -13,   -13,
     -13,    58,    58,   -23,   -26,   553,   -26,   -26,   -23,   553,
     -51,   102,    75,    78,   110,   163,   119,   120,    88,    91,
     -51,   -51,   -51,   -51,   123,   383,    68,    72,   -51,   -51,
     122,    29,   125,   106,   124,   116,   -51,   154,   104,   -51,
     -51,    -6,   105,   123,   -51,   108,   163,   151,   109,   163,
     153,   163,   414,   123,   163,   437,   -51,   468,   -51,   157,
     491,   121,   -51,   -51,   168,   126,   123,   163,   169,   522,
     170,   172,   174,   123,   123,   181,   183,   -51,   -51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   -51,   -51,   -50,   -51,   176,   -51,   -51,   -51,   -51,
     -51,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,    47,    48,    49,    50,    51,    52,   137,   138,    53,
      54,    55,    14,    15,    16,    67,    74,    69,    77,    78,
      69,    64,    65,    82,    83,    72,     1,     3,    67,    68,
      69,    70,    71,    73,     4,   127,    73,   128,    72,    86,
      87,    88,    89,    90,    91,    92,    73,    93,    94,    95,
      96,    97,    98,    99,     7,     8,     5,    36,     9,    37,
      10,    38,    39,    11,   122,    40,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      41,    43,    44,   140,    56,   115,    57,    26,    75,    79,
      27,    28,    80,   149,    81,    85,   101,    29,    30,    67,
      68,    69,    70,    71,   102,   105,   158,    31,   106,    72,
     107,   110,   111,   165,   166,   112,   142,    73,   113,   145,
     114,   147,   116,   117,   150,   124,     7,     8,   118,   125,
       9,   119,    10,   126,   133,    11,   131,   159,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     7,    45,    76,   132,   134,   135,   136,    26,
     139,   143,   141,    28,   146,   144,     7,    45,   153,    29,
      30,   155,    20,    21,    22,    23,    24,    25,   156,    31,
     160,   157,   163,   162,   164,    26,    20,    21,    22,    23,
      24,    25,   167,    42,   168,    29,    30,     0,     0,    26,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    29,
      30,    59,    60,    61,    62,    63,    64,    65,     0,    31,
       0,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,    72,    59,    60,    61,    62,    63,    64,
      65,    73,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,     0,    84,     0,    73,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,   100,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,    72,    59,    60,
      61,    62,    63,    64,    65,    73,     0,     0,     0,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,   103,     0,    73,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,   104,     0,    73,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,    72,     0,     0,     0,     0,     0,   108,     0,
      73,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,   109,
       0,    73,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,   123,    73,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   148,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,    72,    59,    60,    61,    62,
      63,    64,    65,    73,     0,     0,     0,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,   151,    73,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,   152,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,    72,
      59,    60,    61,    62,    63,    64,    65,    73,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,    72,     0,     0,     0,     0,     0,   154,     0,
      73,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,   161,
       0,    73,    59,    60,    61,    62,    63,    64,    65,    61,
      62,    63,    64,    65,    67,    68,    69,    70,    71,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,    72,
       0,     0,    73,     0,     0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      20,    21,    22,    23,    24,    25,    26,    13,    14,    29,
      30,    31,    17,    18,    19,    41,    36,    43,    38,    39,
      43,    34,    35,    43,    44,    51,    37,    54,    41,    42,
      43,    44,    45,    59,     0,     6,    59,     8,    51,    59,
      60,    61,    62,    63,    64,    65,    59,    67,    68,    69,
      70,    71,    72,    73,     3,     4,    38,    55,     7,    56,
       9,    56,    56,    12,   114,    56,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      56,    56,    56,   133,    40,   105,     4,    36,     3,    48,
      39,    40,     3,   143,     4,    58,    57,    46,    47,    41,
      42,    43,    44,    45,    57,    55,   156,    56,    44,    51,
      56,     4,    10,   163,   164,    40,   136,    59,    40,   139,
      10,   141,     3,     3,   144,    57,     3,     4,    40,    57,
       7,    40,     9,    11,    10,    12,    11,   157,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     3,     4,     5,    49,    40,     3,    54,    36,
      55,    10,    54,    40,    11,    56,     3,     4,    11,    46,
      47,    50,    23,    24,    25,    26,    27,    28,    10,    56,
      11,    55,    10,    13,    10,    36,    23,    24,    25,    26,
      27,    28,    11,    17,    11,    46,    47,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    46,
      47,    29,    30,    31,    32,    33,    34,    35,    -1,    56,
      -1,    -1,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    29,    30,    31,    32,    33,    34,
      35,    59,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    59,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    29,    30,
      31,    32,    33,    34,    35,    59,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    51,    29,    30,    31,    32,
      33,    34,    35,    59,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      29,    30,    31,    32,    33,    34,    35,    59,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    29,    30,    31,    32,    33,    34,    35,    31,
      32,    33,    34,    35,    41,    42,    43,    44,    45,    41,
      42,    43,    44,    45,    51,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    61,    54,     0,    38,    62,     3,     4,     7,
       9,    12,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    36,    39,    40,    46,
      47,    56,    63,    64,    65,    71,    55,    56,    56,    56,
      56,    56,    65,    56,    56,     4,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    40,     4,    66,    29,
      30,    31,    32,    33,    34,    35,    40,    41,    42,    43,
      44,    45,    51,    59,    71,     3,     5,    71,    71,    48,
       3,     4,    71,    71,    57,    58,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      40,    57,    57,    57,    57,    55,    44,    56,    57,    57,
       4,    10,    40,    40,    10,    71,     3,     3,    40,    40,
      67,    68,    63,    58,    57,    57,    11,     6,     8,    69,
      70,    11,    49,    10,    40,     3,    54,    13,    14,    55,
      63,    54,    71,    10,    56,    71,    11,    71,    40,    63,
      71,    58,    40,    11,    57,    50,    10,    55,    63,    71,
      11,    57,    13,    10,    10,    63,    63,    11,    11
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 101 "final.y"
    {printf("End of main function\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 111 "final.y"
    {
                            printf("\nValue of the variable: %d\n", (yyvsp[(1) - (2)].val));
                            (yyval.val) = (yyvsp[(1) - (2)].val);
                            printf("\n\n\n");

                        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 118 "final.y"
    {
        printf("\nValue of the variable: %d\n", (yyvsp[(3) - (4)].val));
        setVal((yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].val));
        (yyval.val)=(yyvsp[(3) - (4)].val);
        printf("\n\n\n");
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 125 "final.y"
    {printf("The Expression is printed as: %d\n",(yyvsp[(3) - (5)].val));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 127 "final.y"
    {
        printf("The String is printed as: ");

        char tmp[1010];

        strcpy(tmp, (yyvsp[(3) - (5)].text));

        int n = (int) strlen(tmp);

        for(int i = 1; i< n - 1; i++)
        {
            printf("%c", tmp[i]);
        }
        printf("\n\n");

        
        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 145 "final.y"
    {

                                    if((yyvsp[(3) - (7)].val)){
                                        printf("\nInside of IF block\n");
                                    }
                                    else
                                    {
                                        printf("\n The Given condition in IF is Wrong.\n");
                                    }

                                    printf("\n\n\n");
                                ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 158 "final.y"
    {

                            if((yyvsp[(3) - (11)].val))
                            {
                                printf("\n Value of expression in IF: %d\n", (yyvsp[(6) - (11)].val));
                            }
                            else
                            {
                                printf("\n Value of expression inside of Else: %d\n", (yyvsp[(10) - (11)].val));
                            }

                            printf("\n\n\n");

                            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 172 "final.y"
    {

                                        if((yyvsp[(3) - (18)].val))
                                        {
                                            printf("Value of expression in first if block: %d\n", (yyvsp[(6) - (18)].val));
                                        }
                                        else if((yyvsp[(10) - (18)].val))
                                        {
                                            printf("Value of expression in second elseif block: %d\n", (yyvsp[(13) - (18)].val));
                                        }
                                        else
                                        {
                                            printf("Value of expression in last else block: %d\n", (yyvsp[(17) - (18)].val));
                                        }

                                        printf("\n\n\n");
                                        
                                        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 190 "final.y"
    {
	                                int i;
	                                printf("Executing While Loop.");
	                                for(i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\nIterating loop: %d   \n", i);}
	                                printf("\n\n\n");
	                                								
				               ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 199 "final.y"
    {
	                                int i;
	                                printf("Inside loop execution");
	                                for(i=(yyvsp[(5) - (17)].val) ; i<=(yyvsp[(9) - (17)].val) ; i=i+(yyvsp[(13) - (17)].val) ) 
	                                {printf("\nvalue of the  i: %d expression value : %d\n", i,(yyvsp[(16) - (17)].val));}
	                                printf("\n\n\n\n");

				               ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 209 "final.y"
    {printf("\nPrinting Expression %d\n",(yyvsp[(3) - (5)].val));
		printf("\n\n\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 212 "final.y"
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=(yyvsp[(3) - (5)].val);i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",(yyvsp[(3) - (5)].val),f);
		printf("\n\n\n\n");

		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 225 "final.y"
    {
		printf("Detect Odd or Even \n");

		if((yyvsp[(3) - (5)].val) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[(3) - (5)].val));
		}
		else{
			printf("Number is :%d is -> Odd\n",(yyvsp[(3) - (5)].val));
		}
		printf("\n\n\n");
		;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 237 "final.y"
    {
		printf("ARRAY Declaration\n");
		
		printf("Size of the ARRAY is : %d\n",(yyvsp[(5) - (7)].val));
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 243 "final.y"
    {
		printf("\nInside Switch Case\n");
        printf("\n\n\n");
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 250 "final.y"
    {printf("\nVariable Declaration\n");
                       printf("\n\n\n\n");
                       ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 255 "final.y"
    {printf("Integer Declaration.\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 256 "final.y"
    {printf("Float Declaration.\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 257 "final.y"
    {printf("Char declaration\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 260 "final.y"
    {
       int res = addNewVal((yyvsp[(3) - (3)].text));
           if(res == 0){
                printf("Error!! Variable already declared.\n");
                exit(-1);
           }

        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 268 "final.y"
    {
            int res = addNewVal((yyvsp[(1) - (1)].text));
            if(res == 0)
            {
                printf("Error!! Variable Already Declared\n");
                exit(-1);
            }
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 286 "final.y"
    {printf("Case No : %d & expression value :%d \n",(yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].val));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 288 "final.y"
    {
 				printf("\nDefault case & expression value : %d",(yyvsp[(3) - (4)].val));
 			;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 294 "final.y"
    { (yyval.val) = (yyvsp[(1) - (1)].val); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 295 "final.y"
    { 
             (yyval.val) = getVal((yyvsp[(1) - (1)].text));
             int x;
             x = getVal((yyvsp[(1) - (1)].text));
             if(x == 0)
             {
                printf("Error!! Variable Not Declared!!!\n");
                exit(-1);
             } 
             
             ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 307 "final.y"
    { printf("\n Addition: %d + %d = %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 309 "final.y"
    { printf("\n Subtraction: %d - %d=%d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 311 "final.y"
    { printf("\nMultiplication: %d * %d = %d\n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 313 "final.y"
    { if((yyvsp[(3) - (3)].val) != 0 ){
                                                    printf("\nDivision :%d / %d = %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val));
                                                    (yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);

                                                }
                                            else{
                                                  (yyval.val) = 0;
                                                  printf("Error!!! Division by zero. (not valid) \n");
                                                  exit(-1);
                                            }

                                    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 326 "final.y"
    { if((yyvsp[(3) - (3)].val) != 0 ){

                                                    printf("\nMod :%d MOD %d = %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val));
                                                    (yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);

                                            }
                                            else{
                                                (yyval.val) = 0;
                                                printf("\nError!! Mod by zero, undefined!\n");
                                                exit(-1);
                                            }

                                    
                                ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 341 "final.y"
    {  printf("\n Less than: %d < %d: %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 343 "final.y"
    {  printf("\n Less than or Equal: %d <= %d : %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 345 "final.y"
    {  printf("\n Greater than: %d > %d : %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 347 "final.y"
    {  printf("\n Greater than or equal: %d >= %d : %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 349 "final.y"
    {  printf("\n Equal : %d == %d : %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 351 "final.y"
    {  printf("\n Not Equal : %d > %d : %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) != (yyvsp[(3) - (3)].val) ; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 353 "final.y"
    {printf("Bitwise And :%d & %d is %d\n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)&(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) & (yyvsp[(3) - (3)].val); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 355 "final.y"
    {printf("Bitwise Or  :%d | %d is %d\n ",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)|(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val) | (yyvsp[(3) - (3)].val); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 357 "final.y"
    {printf("Bitwise not :!%d is %d\n ",(yyvsp[(2) - (2)].val),!(yyvsp[(2) - (2)].val)); (yyval.val) = !(yyvsp[(2) - (2)].val); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 359 "final.y"
    {printf("\nValue of Sin(%d) is : %lf\n",(yyvsp[(2) - (2)].val),sin((yyvsp[(2) - (2)].val)*3.1416/180)); (yyval.val)=sin((yyvsp[(2) - (2)].val)*3.1416/180);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 361 "final.y"
    {printf("\nValue of Cos(%d) is : %lf\n",(yyvsp[(2) - (2)].val),cos((yyvsp[(2) - (2)].val)*3.1416/180)); (yyval.val)=cos((yyvsp[(2) - (2)].val)*3.1416/180);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 363 "final.y"
    {printf("\nValue of Tan(%d) is : %lf\n",(yyvsp[(2) - (2)].val),tan((yyvsp[(2) - (2)].val)*3.1416/180)); (yyval.val)=tan((yyvsp[(2) - (2)].val)*3.1416/180);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 365 "final.y"
    {printf("Value of Log base 10(%d) is %lf\n",(yyvsp[(2) - (2)].val),(log((yyvsp[(2) - (2)].val)*1.0)/log(10.0))); (yyval.val)=(log((yyvsp[(2) - (2)].val)*1.0)/log(10.0));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 367 "final.y"
    {printf("Value of Log base e(%d) is %lf\n",(yyvsp[(2) - (2)].val),(log((yyvsp[(2) - (2)].val)))); (yyval.val)=(log((yyvsp[(2) - (2)].val)));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 369 "final.y"
    {   (yyval.val) = (yyvsp[(2) - (3)].val); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 371 "final.y"
    {  printf("\nPower : %d ^ %d = %d \n", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), pow((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val))); (yyval.val) = pow((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 373 "final.y"
    {printf("value is incremented from %d to %d\n",(yyvsp[(2) - (2)].val),(yyvsp[(2) - (2)].val)+1);(yyval.val)=(yyvsp[(2) - (2)].val)+1;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 375 "final.y"
    {printf("value is decremented from %d to %d\n",(yyvsp[(2) - (2)].val),(yyvsp[(2) - (2)].val)-1);(yyval.val)=(yyvsp[(2) - (2)].val)-1;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 377 "final.y"
    {printf("square root of %d is  %lf \n",(yyvsp[(2) - (2)].val),sqrt((yyvsp[(2) - (2)].val)));(yyval.val)=sqrt((yyvsp[(2) - (2)].val));;}
    break;



/* Line 1455 of yacc.c  */
#line 2161 "final.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 381 "final.y"



int  yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}

int main()
{
	
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();


    //Raiyan Ashraf. Roll: 1907023

    return 0;
}

