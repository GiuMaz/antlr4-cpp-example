// define a grammar called Hello
grammar Hello;
prova   : 'hello' ID;
ID  : [A-Za-z]+ ;
WS : [ \t\r\n]+ -> skip ;
