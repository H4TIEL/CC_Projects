%{
 #include "config.h"
%}

%%
"service:"		return SERVICE;
"name:"			return NAME;
"port:"			return PORT;

([a-zA-Z])+		return STRING;
([0-9]+)+		return INTEGER;
[  ]			return INDENT;
[ \t\n]			;
.			printf("Invalid token\n");
%%

int yywrap(void)
{
	return 1;
}
