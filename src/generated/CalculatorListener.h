
// Generated from /home/giulio/Progetti/parser2/parser/grammar/Calculator.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalculatorParser.
 */
class  CalculatorListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInput(CalculatorParser::InputContext *ctx) = 0;
  virtual void exitInput(CalculatorParser::InputContext *ctx) = 0;

  virtual void enterToMultOrDiv(CalculatorParser::ToMultOrDivContext *ctx) = 0;
  virtual void exitToMultOrDiv(CalculatorParser::ToMultOrDivContext *ctx) = 0;

  virtual void enterBinaryMinusOp(CalculatorParser::BinaryMinusOpContext *ctx) = 0;
  virtual void exitBinaryMinusOp(CalculatorParser::BinaryMinusOpContext *ctx) = 0;

  virtual void enterPlusOp(CalculatorParser::PlusOpContext *ctx) = 0;
  virtual void exitPlusOp(CalculatorParser::PlusOpContext *ctx) = 0;

  virtual void enterToAtom(CalculatorParser::ToAtomContext *ctx) = 0;
  virtual void exitToAtom(CalculatorParser::ToAtomContext *ctx) = 0;

  virtual void enterMultOp(CalculatorParser::MultOpContext *ctx) = 0;
  virtual void exitMultOp(CalculatorParser::MultOpContext *ctx) = 0;

  virtual void enterDivOp(CalculatorParser::DivOpContext *ctx) = 0;
  virtual void exitDivOp(CalculatorParser::DivOpContext *ctx) = 0;

  virtual void enterInt(CalculatorParser::IntContext *ctx) = 0;
  virtual void exitInt(CalculatorParser::IntContext *ctx) = 0;

  virtual void enterUnaryMinusOp(CalculatorParser::UnaryMinusOpContext *ctx) = 0;
  virtual void exitUnaryMinusOp(CalculatorParser::UnaryMinusOpContext *ctx) = 0;

  virtual void enterParenthesisOp(CalculatorParser::ParenthesisOpContext *ctx) = 0;
  virtual void exitParenthesisOp(CalculatorParser::ParenthesisOpContext *ctx) = 0;


};

