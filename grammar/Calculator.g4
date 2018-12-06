grammar Calculator;
INT : [0-9]+;
WS  : [ \t\r]+ -> skip;
NL  : '\n';

PLUS   : '+';
MINUS  : '-';
MULT   : '*';
DIV    : '/';
POPEN  : '(';
PCLOSE : ')';

input
    : plusOrMinus NL? EOF
    ;

plusOrMinus
    : plusOrMinus PLUS  multOrDiv # PlusOp
    | plusOrMinus MINUS multOrDiv # BinaryMinusOp
    | multOrDiv                   # ToMultOrDiv
    ;

multOrDiv
    : multOrDiv MULT atom # MultOp
    | multOrDiv DIV  atom # DivOp
    | atom                # toAtom
    ;

atom
    : INT                      # Int
    | MINUS plusOrMinus        # UnaryMinusOp
    | POPEN plusOrMinus PCLOSE # ParenthesisOp
;
