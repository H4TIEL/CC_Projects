default:
	clear
	flex -l scanner.l
	bison -dv scanner.y 
	gcc scanner.c lex.yy.c -lfl -o scanner
