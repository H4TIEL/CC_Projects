#include <stdio.h>
#include "config.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char* names[] = { NULL, "service", "name", "port" };

int main(void)
{
	int ntoken, vtoken;

	ntoken = yylex();
	while(ntoken)
	{
		switch(ntoken)
		{
			case SERVICE:
				if(yylex() != INDENT)
				{
					printf("Syntax error on line %d, Expected ':' %s\n", yylineno, yytext);
					return 1;
				}
			printf("%s syntax OK\n", names[ntoken]);
			break;

			case NAME:
				vtoken = yylex();
				if(vtoken == INDENT)
				{
					vtoken = yylex();
					if(vtoken != STRING)
					{
						printf("Syntax error on line %d, Expeceted string '{name}' found %s\n", yylineno, yytext);
						return 1;
					}
				}
				else
				{
						printf("Syntax error on line %d, Expeceted indent '{  }' found %s\n", yylineno, yytext);
						return 1;
				}
			printf("%s syntax OK %s \n", names[ntoken], yytext);
			break;

			case PORT:
				vtoken = yylex();
				if(vtoken == INDENT)
				{
					vtoken = yylex();
					if(vtoken != INTEGER)
					{
						printf("[Port] Syntax error on line %d, Expeceted integer':' found %s\n", yylineno, yytext);
						return 1;
					}
				}
				else
				{
				
						printf("Syntax error on line %d, Expeceted indent '{  }' found %s\n", yylineno, yytext);
						return 1;
				}
			printf("%s syntax OK %s \n", names[ntoken], yytext);
			break;
		}
		ntoken = yylex();	
	}

	return 0;
}
