#include <iostream>
#include <string>
#include "antlr4-runtime.h"
#include "tree/IterativeParseTreeWalker.h"
#include "calculator_interpreter.h"

#include "CalculatorLexer.h"
#include "CalculatorParser.h"

#include <stack>

int main() {

    // parse operation from cin
    std::string line;
    std::cout << "calc > ";
    while( std::getline(std::cin,line) ) {

        // parse
        antlr4::ANTLRInputStream input(line);
        CalculatorLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        CalculatorParser parser(&tokens);
        antlr4::tree::ParseTree *tree = parser.input();

        // calculator interpreter
        CalculatorInterpreter interpreter;

        // interpret the operation
        antlr4::tree::IterativeParseTreeWalker walker;
        walker.walk(&interpreter, tree);

        // print results
        std::cout << interpreter.get_result() << std::endl << "> ";
    }

    return 0;
}
