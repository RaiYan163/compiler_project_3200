%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "final.tab.h"

	//Raiyan Ashraf --- Roll: 1907023 //
%}

variable ([a-zA-Z_][a-zA-Z0-9_]*)
digit [0-9]
header		"ORDER ".*
Comment		[#].*
CommentMulti "##"[^##]*"##"
String "&"[a-zA-Z0-9_ ,.!?;:'"-]*"&"

%%
{digit}+	{yylval.val = atoi(yytext); return NUMBER; }
"CASE" 			{return CASE;}
"CHOOSE" 		{return SWITCH;}
"DEFAULT" 		{return DEFAULT;}
"SERVE" 	{return PRINT; } 

"START" 		   {return START;  }
"END"  		   {return END;	}

"IF" 			   {return IF;   }
"ELSE" 		   {return ELSE; }
"ELSEIF"       {return ELSEIF; }
"DONUT" 		   {return LOOP;}
"FEAST"		   {return WHILE;}

"FACTORIAL"		{return FACTORIAL;}
"ODDEVEN"		{return ODDEVEN;}
"SIN"		   {return SIN;}
"COS"          {return COS;}
"TAN" 		   {return TAN;}
"LOG"		   {return LOG;}
"LN"		   {return LN;}
"SQRT"          {return SQRT;}

"ICE"  		{return INT;}
"CREAM" 		     {return CHAR;}
"FRIES"			 {return FLOAT;}
"PLATTER"			{return ARRAY;}

"PLUS"			{return PLUS;}
"MINUS"         {return MINUS;}
"MUL"           {return MUL;}
"DIV"           {return DIV;}
"MOD"           {return MOD;}

"AND"			{return AND;}
"OR"			{return OR;}
"NOT"			{return NOT;}

"EQ"			{ return EQ;  }
"LEQ"			{ return LEQ; }
"GEQ"			{ return GEQ; }
"LES"			{ return LES; }
"GRT"			{ return GRT; }
"NEQ" 			{ return NEQ; }

"ONE+"			{ return INC; }
"ONE-"			{ return DEC; } 


"init"	        { return INIT;}
"untl"			{ return UNTL;}
"step"			{ return STEP;}



"BANQUET"	   {printf("\nMain function started\n"); return MAINFUNC; }
"SOUP"		   {return MAINFUNCSTART;}
"DESSERT"	   {return MAINFUNCEND;}
"@"       	   {return ENDLINE;}

{Comment}		{printf("\nSingle line comment.");ECHO;printf("\n");}
{CommentMulti}		{printf("\nMulti Line Comment.");ECHO;printf("\n");}
{header}  				{printf("Header file found :\n");ECHO;printf("\n");}
[-+/<>=,():;%^]     {	return yytext[0];	}
{variable}	    {ECHO;printf("\n"); strcpy(yylval.text,yytext); return	VAR; }
{String}        {strcpy(yylval.text, yytext); return STRING;}

[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown syntax : %s\n",yytext);}


%%