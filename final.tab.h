
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 67 "final.y"

	char text[1009];
	int val;



/* Line 1676 of yacc.c  */
#line 112 "final.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


