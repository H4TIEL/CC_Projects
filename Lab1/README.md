# CC Projects

Simple lexical analyzer implemented in C

# Features
  - The generated scanner can be used to scan [YAML](https://yaml.org/) config files.
  - For example, if a yaml file is used to configure service and ports such config.yaml

Properties
  - Service
  - Name
  - Port


## Requirements
* Lex
* gcc


### Valid config.yaml file
```sh
service:
  name: Postgres
  port: 5432
```


| Configuration | Test pass             | Test Fail                               |
|---------------|-----------------------|-----------------------------------------|
| service       | service syntax OK     | Syntax error on line {lineno}, {error}  |
| name          | name syntax OK {name} | Syntax error on line {lineno}, {error}  |
| port          | port syntax OK {port} | Syntax error on line {lineno},  {error} |


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

[Flex](https://github.com/H4TIEL/CC_Projects/tree/main/Lab1/Bonus)
