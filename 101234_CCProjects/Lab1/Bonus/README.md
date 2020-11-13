# CC Projects

Simple use of flex fast lexical analyzer

# Features

  - Counts characters, words and lines in any file

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
$ ./scanner < config
```