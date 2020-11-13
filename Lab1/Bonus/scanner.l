%{
int numChars = 0, numWords = 0, numLines = 0;
%}

%%
\n			{numLines++; numChars++;}
[^ \t\n]+	{numWords++; numChars += yyleng;}
.			{numChars++;}
%%

int main() 
{
	yylex();
	printf("Characters: %d\nWords: %d\nLines: %d\n", numChars, numWords, numLines);
}