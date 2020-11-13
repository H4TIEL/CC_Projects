# CC Projects

Simple use of flex fast lexical analyzer

# Features

  - Replaces all numbers types with an octothorp followed by the word Numbers (#Numbers)

## Requirements
* Flex

## Installation
### Auto
```sh
$ make
```
### Manual
```sh
$ flex scanner.l
$	gcc lex.yy.c -o scanner -ll
$ ./scanner
```

## Example
```sh
I ❤️ numbers
I ❤️ numbers

I ❤️ 123
I ❤️ #Numbers
```