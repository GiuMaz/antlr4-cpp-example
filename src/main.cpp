#include <iostream>
#include <string>

// antlr4 runtime
#include "antlr4-runtime.h"
#include "tree/IterativeParseTreeWalker.h"

// generated lexer and parser
#include "CalculatorLexer.h"
#include "CalculatorParser.h"

// arithmetic expression interpreter
#include "CalculatorInterpreter.h"

// custom error policy
#include "ExceptionErrorListener.h"

void execute_expression(const std::string &expr) {

    // input stream from line
    antlr4::ANTLRInputStream input(expr);

    // lexer
    CalculatorLexer lexer(&input);
    lexer.removeErrorListeners();
    lexer.addErrorListener(new ExceptionErrorListener());

    // tokenizer
    antlr4::CommonTokenStream tokens(&lexer);

    // parser
    CalculatorParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(new ExceptionErrorListener());

    antlr4::tree::ParseTree *tree = nullptr;

    // the custom made ExceptionErrorListener immediately stop
    // the parsing when an invalid expression is inserted,
    // we don't want to execute an invalid expression!
    try {
        // parse the input
        tree = parser.input();
    }
    catch (antlr4::ParseCancellationException &e) {
        std::cout << e.what() << std::endl;
        exit(0);
    }

    // calculator interpreter
    CalculatorInterpreter interpreter;

    // interpret the operation
    antlr4::tree::IterativeParseTreeWalker walker;
    walker.walk(&interpreter, tree);

    // print results
    std::cout << interpreter.get_result() << std::endl;
}

int main() {
    std::string prefix = "calc > ";

    // parse and interpet the expression readen from the standard input
    std::cout << prefix;
    std::string line;
    while( std::getline(std::cin,line) ) {
        execute_expression(line);
        std::cout << prefix;
    }

    return 0;
}
