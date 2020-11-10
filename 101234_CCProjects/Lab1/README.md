# CC Projects

Simple lexical analyzer implemented in C

# Features

  - Scan YAML config files ; default is config.yaml

Properties
  - Service
  - Name
  - Port


> service:
>    name: Postgres
>   port: 5432

## Requirements
* [Lex] 
* [Flex] 
* [gcc] 

## Installation
### Auto
```sh
$ make
```
### Manual
```sh
$ cd  101234_CCProjects/Lab1
$ lex scanner.l
$ gcc scanner.c lex.yy.c -o scanner
$ ./scanner < config.yaml
```

# Bonus

Use Flex

## Installation
### Auto
```sh
$ make
```
### Manual
```sh
$ flex -l scanner.l
$ bison -dv scanner.y 
$ gcc scanner.c lex.yy.c -lfl -o scanner
```


