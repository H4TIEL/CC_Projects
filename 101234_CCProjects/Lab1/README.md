YAML Lexical Analyser 

service:
  name: {name}
  port: {port}


Build
* lex scanner.l
* gcc scanner.c lex.yy.c -o scanner
* ./scanner < config.yaml

