#include "calculator_interpreter.h"

int CalculatorInterpreter::get_result() {
    return int_stack.top();
}

void CalculatorInterpreter::exitPlusOp(CalculatorParser::PlusOpContext *ctx) {
    auto r = int_stack.top(); int_stack.pop();
    auto l = int_stack.top(); int_stack.pop();
    int_stack.push(l+r);
}

void CalculatorInterpreter::exitBinaryMinusOp(CalculatorParser::BinaryMinusOpContext *ctx) {
    auto r = int_stack.top(); int_stack.pop();
    auto l = int_stack.top(); int_stack.pop();
    int_stack.push(l-r);
}

void CalculatorInterpreter::exitUnaryMinusOp(CalculatorParser::UnaryMinusOpContext *ctx) {
    int_stack.top() = -int_stack.top();
}

void CalculatorInterpreter::exitMultOp(CalculatorParser::MultOpContext *ctx) {
    auto r = int_stack.top(); int_stack.pop();
    auto l = int_stack.top(); int_stack.pop();
    int_stack.push(l*r);
}

void CalculatorInterpreter::exitDivOp(CalculatorParser::DivOpContext *ctx) {
    auto r = int_stack.top(); int_stack.pop();
    auto l = int_stack.top(); int_stack.pop();
    int_stack.push(l/r);
}

void CalculatorInterpreter::exitInt(CalculatorParser::IntContext *ctx) {
    int_stack.push(std::stoi(ctx->getText()));
}

