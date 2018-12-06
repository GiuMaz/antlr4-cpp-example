#pragma once

#include "CalculatorBaseListener.h"
#include <stack> 

/*
 * interpet an aritmetic expression on integer
 * supported operation: +,-,*,/
 */
class CalculatorInterpreter: public CalculatorBaseListener {

    // results stack
    std::stack<int> int_stack;

public:
    int get_result();

    void exitPlusOp(CalculatorParser::PlusOpContext * ctx) override;
    void exitBinaryMinusOp(CalculatorParser::BinaryMinusOpContext * ctx) override;
    void exitUnaryMinusOp(CalculatorParser::UnaryMinusOpContext * ctx) override;
    void exitMultOp(CalculatorParser::MultOpContext * ctx) override;
    void exitDivOp(CalculatorParser::DivOpContext * ctx) override;
    void exitInt(CalculatorParser::IntContext * ctx) override;
};

