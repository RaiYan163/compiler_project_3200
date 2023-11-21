%{
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
%}

/* bison declarations */

%union
{
	char text[1009];
	int val;
}


%token<val>NUMBER
%type<val>statement
%type<val>expression


%token<text>VAR
%token<text>STRING
%token CASE SWITCH DEFAULT PRINT START END 
%token IF ELSE ELSEIF LOOP WHILE INT CHAR FLOAT ARRAY
%token FACTORIAL ODDEVEN SIN COS TAN LOG LN SQRT
%token PLUS MINUS MUL DIV MOD AND OR NOT MAINFUNC MAINFUNCSTART MAINFUNCEND ENDLINE
%token EQ LEQ GEQ LES GRT INC DEC INIT UNTL STEP NEQ

%nonassoc IFX
%nonassoc ELSEIF
%nonassoc ELSE
%left PLUS MINUS
%left MUL DIV MOD
%left SIN COS TAN LOG LN
%left AND OR NOT
%left LES LEQ GRT GRQ 
%left EQ NEQ
%right INC DEC

/* Grammar rules */

%%

program: MAINFUNC ':' MAINFUNCSTART line MAINFUNCEND {printf("End of main function\n");}
        ;

line: /* NULL */
    | line statement
    ;

statement: ENDLINE
    | declaration ENDLINE

    | expression ENDLINE    {
                            printf("\nValue of the variable: %d\n", $1);
                            $$ = $1;
                            printf("\n\n\n");

                        }

    | VAR '=' expression ENDLINE {
        printf("\nValue of the variable: %d\n", $3);
        setVal($1, $3);
        $$=$3;
        printf("\n\n\n");
    }

    |PRINT '<'  expression  '>' ENDLINE {printf("The Expression is printed as: %d\n",$3);}
	
    |PRINT '<'  STRING  '>' ENDLINE {
        printf("The String is printed as: ");

        char tmp[1010];

        strcpy(tmp, $3);

        int n = (int) strlen(tmp);

        for(int i = 1; i< n - 1; i++)
        {
            printf("%c", tmp[i]);
        }
        printf("\n\n");

        
        }

    | IF '<' expression '>' START statement END %prec IFX{

                                    if($3){
                                        printf("\nInside of IF block\n");
                                    }
                                    else
                                    {
                                        printf("\n The Given condition in IF is Wrong.\n");
                                    }

                                    printf("\n\n\n");
                                }
    
    | IF '<' expression '>' START statement END ELSE START statement END {

                            if($3)
                            {
                                printf("\n Value of expression in IF: %d\n", $6);
                            }
                            else
                            {
                                printf("\n Value of expression inside of Else: %d\n", $10);
                            }

                            printf("\n\n\n");

                            }
    | IF '<' expression '>' START statement END ELSEIF '<' expression '>' START statement END ELSE START statement END {

                                        if($3)
                                        {
                                            printf("Value of expression in first if block: %d\n", $6);
                                        }
                                        else if($10)
                                        {
                                            printf("Value of expression in second elseif block: %d\n", $13);
                                        }
                                        else
                                        {
                                            printf("Value of expression in last else block: %d\n", $17);
                                        }

                                        printf("\n\n\n");
                                        
                                        }
    | WHILE '<' NUMBER LES NUMBER '>' START statement END {
	                                int i;
	                                printf("Executing While Loop.");
	                                for(i=$3 ; i<$5 ; i++) {printf("\nIterating loop: %d   \n", i);}
	                                printf("\n\n\n");
	                                								
				               }


	| LOOP '<' INIT '=' expression ',' UNTL '=' expression ',' STEP '=' expression '>' START statement END {
	                                int i;
	                                printf("Inside loop execution");
	                                for(i=$5 ; i<=$9 ; i=i+$13 ) 
	                                {printf("\nvalue of the  i: %d expression value : %d\n", i,$16);}
	                                printf("\n\n\n\n");

				               }


	| PRINT '<' expression '>' ENDLINE {printf("\nPrinting Expression %d\n",$3);
		printf("\n\n\n");}

	| FACTORIAL '<' expression '>' ENDLINE {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=$3;i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",$3,f);
		printf("\n\n\n\n");

		}

    | ODDEVEN '<' expression '>' ENDLINE {
		printf("Detect Odd or Even \n");

		if($3 %2 ==0){
			printf("Number : %d is -> Even\n",$3);
		}
		else{
			printf("Number is :%d is -> Odd\n",$3);
		}
		printf("\n\n\n");
		}

	| ARRAY TYPE VAR '<' NUMBER '>' ENDLINE {
		printf("ARRAY Declaration\n");
		
		printf("Size of the ARRAY is : %d\n",$5);
	}

	| SWITCH '<' NUMBER '>' START SWITCHCASE END {
		printf("\nInside Switch Case\n");
        printf("\n\n\n");
	}
	   
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

 SWITCHCASE: case
            |case default
 			;

 case:      /*empty*/
 	        | case caseNo
 	        ;

 caseNo: CASE NUMBER ':' expression ENDLINE {printf("Case No : %d & expression value :%d \n",$2,$4);}
 			;
 default: DEFAULT ':' expression ENDLINE {
 				printf("\nDefault case & expression value : %d",$3);
 			}
 		;


expression: NUMBER  { $$ = $1; }
    | VAR  { 
             $$ = getVal($1);
             int x;
             x = getVal($1);
             if(x == 0)
             {
                printf("Error!! Variable Not Declared!!!\n");
                exit(-1);
             } 
             
             }

    | expression PLUS expression { printf("\n Addition: %d + %d = %d \n", $1, $3, $1 + $3); $$ = $1 + $3;}

    | expression MINUS expression { printf("\n Subtraction: %d - %d=%d \n", $1, $3, $1 - $3); $$ = $1 - $3;}

    | expression MUL expression   { printf("\nMultiplication: %d * %d = %d\n", $1, $3, $1*$3); $$ = $1 * $3; }

    | expression DIV expression   { if($3 != 0 ){
                                                    printf("\nDivision :%d / %d = %d \n", $1, $3, $1/$3);
                                                    $$ = $1 / $3;

                                                }
                                            else{
                                                  $$ = 0;
                                                  printf("Error!!! Division by zero. (not valid) \n");
                                                  exit(-1);
                                            }

                                    }
    
    | expression MOD expression   { if($3 != 0 ){

                                                    printf("\nMod :%d MOD %d = %d \n", $1, $3, $1 % $3);
                                                    $$ = $1 % $3;

                                            }
                                            else{
                                                $$ = 0;
                                                printf("\nError!! Mod by zero, undefined!\n");
                                                exit(-1);
                                            }

                                    
                                }
    
    | expression LES expression {  printf("\n Less than: %d < %d: %d \n", $1, $3, $1 < $3); $$ = $1 < $3 ; }

    | expression LEQ expression {  printf("\n Less than or Equal: %d <= %d : %d \n", $1, $3); $$ = $1 <= $3 ; }

    | expression GRT expression {  printf("\n Greater than: %d > %d : %d \n", $1, $3); $$ = $1 > $3 ; }

    | expression GEQ expression {  printf("\n Greater than or equal: %d >= %d : %d \n", $1, $3); $$ = $1 >= $3 ; }

    | expression EQ expression {  printf("\n Equal : %d == %d : %d \n", $1, $3); $$ = $1 == $3 ; }

    | expression NEQ expression {  printf("\n Not Equal : %d > %d : %d \n", $1, $3); $$ = $1 != $3 ; }

    | expression AND expression			{printf("Bitwise And :%d & %d is %d\n ",$1,$3,$1&$3); $$ = $1 & $3; }

	| expression OR expression			{printf("Bitwise Or  :%d | %d is %d\n ",$1,$3,$1|$3); $$ = $1 | $3; }

	| NOT expression					{printf("Bitwise not :!%d is %d\n ",$2,!$2); $$ = !$2; }

	| SIN expression 					{printf("\nValue of Sin(%d) is : %lf\n",$2,sin($2*3.1416/180)); $$=sin($2*3.1416/180);}

	| COS expression 					{printf("\nValue of Cos(%d) is : %lf\n",$2,cos($2*3.1416/180)); $$=cos($2*3.1416/180);}

	| TAN expression 					{printf("\nValue of Tan(%d) is : %lf\n",$2,tan($2*3.1416/180)); $$=tan($2*3.1416/180);}

	| LOG expression 					{printf("Value of Log base 10(%d) is %lf\n",$2,(log($2*1.0)/log(10.0))); $$=(log($2*1.0)/log(10.0));}

	| LN expression 					{printf("Value of Log base e(%d) is %lf\n",$2,(log($2))); $$=(log($2));}

    | '<' expression '>'    {   $$ = $2; }

    | expression '^' expression {  printf("\nPower : %d ^ %d = %d \n", $1, $3, pow($1, $3)); $$ = pow($1, $3); }

    |INC expression					{printf("value is incremented from %d to %d\n",$2,$2+1);$$=$2+1;}

	|DEC expression					{printf("value is decremented from %d to %d\n",$2,$2-1);$$=$2-1;}

	|SQRT expression				{printf("square root of %d is  %lf \n",$2,sqrt($2));$$=sqrt($2);}

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


    //Raiyan Ashraf. Roll: 1907023

    return 0;
}
