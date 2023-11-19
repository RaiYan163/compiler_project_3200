%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	
	typedef struct {
    char name[1009];
	} Variable;

	Variable variables[1010];


	int val[1009] = {};
	int idx=1;


	int isDeclared(char *str){
		for(int i=1;i<idx;i++){
			if(strcmp(variables[i].name, str)==0){
				return i; 
			}
		}
		return 0;
	}

	int addNewVal(char *str){
		if(isDeclared(str)!=0)return 0;
		strcpy(variables[idx].name ,str);
		val[idx]=0;
		idx++;
	}
	int getVal(char *str){
		
		int loc;
		loc = isDeclared(str);
		return val[loc];
	}

	int setVal(char *str,int v){
		int id = isDeclared(str);
		if(id == 0)
		{
			printf("Error!! Variable not declared!!");
		}
		val[id] = v;
	}
%}

/* bison declarations */
%union{
	char text[1009];
	int val;
}
%token<val>NUMBER
%type<val>statement
%token<text>VAR
%token IF PLUS MINUS MUL DIV MOD ELSE ELSEIF ARRAY MAINFUNC INT FLOAT CHAR START END LOOP WHILE ODDEVEN SHOW SIN COS FACTORIAL CASE DEFAULT SWITCH
%nonassoc IFX
%nonassoc ELSEIF
%nonassoc ELSE
%left '<' '>'
%left PLUS MINUS
%left MUL DIV

/* Grammar rules and actions follow.  */

%%

program: MAINFUNC ':' START line END {printf("End of main function\n");}
        ;

line: /* NULL */
    | line statement
    ;

statement: ';'
    | declaration ';'
    ;

declaration: TYPE ID1 {printf("\nVariable Declaration\n");
                       printf("\n\n\n\n");
                       }
                       ;

TYPE : INT {printf("Integer Declaration.\n");}
     | FLOAT {printf("Float Declaration.\n");}
     | CHAR  {printf("Char declaration\n");}
     ;

ID1  : ID1 ',' VAR {
       int res = addNewVal($3);
           if(res == 0){
                printf("Error!! Variable already declared.\n");
                exit(-1);
           }

        }
        | VAR {
            int res = addNewVal($1);
            if(res == 0)
            {
                printf("Error!! Variable Already Declared\n");
                exit(-1);
            }
        }
        ;




%%


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

    
	return 0;
}
