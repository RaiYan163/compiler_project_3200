%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "main.tab.h"
%}
variable [a-zA-Z]*
digit [0-9]
header		"ORDER ".*
Comment		[#].*
CommentMulti "##"[^##]*"##"

%%
{digit}+	{yylval.val = atoi(yytext); return NUMBER; }
"CASE" 			{return CASE;}
"CHOOSE" 		{return SWITCH;}
"DEFAULT" 		{return DEFAULT;}
"SERVE" 	{return SHOW; } 
"IF" 			   {return IF;   }
"ELSE" 		   {return ELSE; }
"ELSEIF"       {return ELSEIF; }
"START" 		   {return START;  }
"END"  		   {return END;	}
"DONUT" 		   {return LOOP;}
"FEAST"		   {return WHILE;}
"FACTORIAL"		{return FACTORIAL;}
"ODDEVEN"		{return ODDEVEN;}
"SIN"		   {return SIN;}
"COS"          {return COS;}
"ICE"  		{return INT;}
"CREAM" 		     {return CHAR;}
"FRIES"			 {return FLOAT;}
"PLATTER"			{return ARRAY;}
"PLUS"			{return PLUS;}
"MINUS"         {return MINUS;}
"MUL"           {return MUL;}
"DIV"           {return DIV;}
"MOD"           {return MOD;}
"BANQUET"	   {printf("\nMain function started\n"); return MAINFUNC; }
{Comment}		{printf("\nSingle line comment.");ECHO;printf("\n");}
{CommentMulti}		{printf("\nMulti Line Comment.");ECHO;printf("\n");}
{header}  				{printf("Header file found :\n");ECHO;printf("\n");}
[-+/*<>=,():;%^]     {	return yytext[0];	}
{variable}	    {ECHO;printf("\n"); strcpy(yylval.text,yytext); return	VAR; }

[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown syntax : %s\n",yytext);}


%%