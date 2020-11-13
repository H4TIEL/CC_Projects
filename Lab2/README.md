# Lexical Analysis

The lexical analysis is the first step in the compilation process. A scanner produces a stream of tokens from the input source file.

![compiler](https://github.com/H4TIEL/CC_Projects/blob/main/Lab2/assets/compiler.png)

>To illustrate the scanner process the source in [Lab1](https://github.com/H4TIEL/CC_Projects/tree/main/Lab1) will be used to explain the process.

The input file to the scanner is source file with a set of regular expressions. It takes a specification and generates a combined non-deterministic finite automata (NFA) to recognize all defined patterns, converts it to an equivalent deterministic finite automata (DFA), minimizes the automaton as much as possible, and generates C code that will implement it.

The scanner reads characters from the file, it will gather them until it forms the 
longest possible match for any of the available patterns. If two or more patterns match 
an equally long sequence, the pattern first in the file is used.

For example in the Lab1 we define the set of regular expressions, that is patterns to be matched in [scanner.l](https://github.com/H4TIEL/CC_Projects/blob/main/Lab1/scanner.l) file.
In addition, we use a header file `config.h` to define constants for our matched patterns.
A input file consist of three parts 

![scanner.l](https://github.com/H4TIEL/CC_Projects/blob/main/Lab2/assets/scanner.png)
FIRST PART
%%
SECOND PART
pattern action
%%
THIRD PART

The Declaration and subroutines i.e the first part and third part are optional.

The middle section consists of rules that lex translates into the lexical analyzer. Each rule consists of regular expression and code to run when regular expression is matched. 
Unmatched text is copied to standard outThe regular expressions are defined in the middle part in the following format.

| pattern   | action            |
|-----------|-------------------|
| [0-9]+    | printf("Number"); |
| [a-zA-Z]+ | printf("Letter"); |

For example the pattern to match is numbers `[0-9]+` which is one or more matches of numbers and the action is to print the string 'Numb#define SERVICE 1
```c
%{
     #include "config.h"
%}
```
The header file consists of constants for matched patterns, for example when matching the string service in the middle section the constant integer 1 is returned.
```c
#define SERVICE 1
```
In the third part subroutines may be defined. In the defined scanner file, `yywrap()` is called which is called by the scanner when EOF file is reached.  The default return for yywrap() is 1;
```c
int yywrap(void)
{
	return 1;
}
```
```bash
$lex scanner.l
```
Running this command generates a table-drive scanner `lex.yy.c`  a source file containing tonnes of C 
code that implements a finite automata encoding all defined patterns and including the code for the actions specified. 

This is the output of the scanner which in turn can be fed into the parse to perform intended actions.