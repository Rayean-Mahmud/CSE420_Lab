/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     DO = 262,
     BREAK = 263,
     CONTINUE = 264,
     RETURN = 265,
     NOT = 266,
     SWITCH = 267,
     CASE = 268,
     DEFAULT = 269,
     INT = 270,
     FLOAT = 271,
     VOID = 272,
     PRINT = 273,
     PRINTLN = 274,
     ID = 275,
     LCURL = 276,
     RCURL = 277,
     LPAREN = 278,
     RPAREN = 279,
     SEMICOLON = 280,
     COMMA = 281,
     LTHIRD = 282,
     RTHIRD = 283,
     ADDOP = 284,
     MULOP = 285,
     RELOP = 286,
     ASSIGNOP = 287,
     INCOP = 288,
     DECOP = 289,
     LOGICOP = 290,
     CONST_INT = 291,
     CONST_FLOAT = 292,
     CHAR = 293,
     DOUBLE = 294
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define CONTINUE 264
#define RETURN 265
#define NOT 266
#define SWITCH 267
#define CASE 268
#define DEFAULT 269
#define INT 270
#define FLOAT 271
#define VOID 272
#define PRINT 273
#define PRINTLN 274
#define ID 275
#define LCURL 276
#define RCURL 277
#define LPAREN 278
#define RPAREN 279
#define SEMICOLON 280
#define COMMA 281
#define LTHIRD 282
#define RTHIRD 283
#define ADDOP 284
#define MULOP 285
#define RELOP 286
#define ASSIGNOP 287
#define INCOP 288
#define DECOP 289
#define LOGICOP 290
#define CONST_INT 291
#define CONST_FLOAT 292
#define CHAR 293
#define DOUBLE 294



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
