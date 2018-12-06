#include <iostream>
#include <memory>
#include <string>
#include "antlr4-runtime.h"
#include "tree/IterativeParseTreeWalker.h"
#include "calculator_interpreter.h"

#include "CalculatorLexer.h"
#include "CalculatorParser.h"

#include <stack>

int main() {
    std::cout << "calc > ";

    std::string line;
    while( std::getline(std::cin,line) ) {
        try {
            // build antlr4 lexer and parser
            antlr4::ANTLRInputStream input(line);
            CalculatorLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            CalculatorParser parser(&tokens);

            // set error to performance diagnosis, not to be used in release
            parser.removeErrorListeners();
            parser.addErrorListener(new antlr4::DiagnosticErrorListener());
            parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->
                setPredictionMode(antlr4::atn::PredictionMode::SLL);

            parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());

            // parse the input
            antlr4::tree::ParseTree *tree = parser.input();

            // calculator interpreter
            CalculatorInterpreter interpreter;

            // interpret the operation
            antlr4::tree::IterativeParseTreeWalker walker;
            walker.walk(&interpreter, tree);

            // print results
            std::cout << interpreter.get_result() << std::endl;
        }
        catch ( antlr4::RuntimeException &e ) {
            std::cout << e.what() << std::endl;
            exit(0);
        }

        std::cout << "calc > ";
    }

    return 0;
}
