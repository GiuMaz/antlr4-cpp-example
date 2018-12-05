#include <iostream>
#include "antlr4-runtime.h"
#include "HelloLexer.h"
#include "HelloParser.h"

using namespace std;
using namespace antlr4;

int main() {
    ANTLRInputStream input("hello Giulio");
    HelloLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    HelloParser parser(&tokens);
    tree::ParseTree* tree = parser.prova();

    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
