%{
%}


%%
[0-9]+		printf("#Numbers");
.			;
%%

int main()
{
	yylex();
}
