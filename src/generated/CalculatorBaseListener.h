
// Generated from /home/giulio/Progetti/parser2/parser/grammar/Calculator.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorListener.h"


/**
 * This class provides an empty implementation of CalculatorListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalculatorBaseListener : public CalculatorListener {
public:

  virtual void enterInput(CalculatorParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(CalculatorParser::InputContext * /*ctx*/) override { }

  virtual void enterToMultOrDiv(CalculatorParser::ToMultOrDivContext * /*ctx*/) override { }
  virtual void exitToMultOrDiv(CalculatorParser::ToMultOrDivContext * /*ctx*/) override { }

  virtual void enterBinaryMinusOp(CalculatorParser::BinaryMinusOpContext * /*ctx*/) override { }
  virtual void exitBinaryMinusOp(CalculatorParser::BinaryMinusOpContext * /*ctx*/) override { }

  virtual void enterPlusOp(CalculatorParser::PlusOpContext * /*ctx*/) override { }
  virtual void exitPlusOp(CalculatorParser::PlusOpContext * /*ctx*/) override { }

  virtual void enterToAtom(CalculatorParser::ToAtomContext * /*ctx*/) override { }
  virtual void exitToAtom(CalculatorParser::ToAtomContext * /*ctx*/) override { }

  virtual void enterMultOp(CalculatorParser::MultOpContext * /*ctx*/) override { }
  virtual void exitMultOp(CalculatorParser::MultOpContext * /*ctx*/) override { }

  virtual void enterDivOp(CalculatorParser::DivOpContext * /*ctx*/) override { }
  virtual void exitDivOp(CalculatorParser::DivOpContext * /*ctx*/) override { }

  virtual void enterInt(CalculatorParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(CalculatorParser::IntContext * /*ctx*/) override { }

  virtual void enterUnaryMinusOp(CalculatorParser::UnaryMinusOpContext * /*ctx*/) override { }
  virtual void exitUnaryMinusOp(CalculatorParser::UnaryMinusOpContext * /*ctx*/) override { }

  virtual void enterParenthesisOp(CalculatorParser::ParenthesisOpContext * /*ctx*/) override { }
  virtual void exitParenthesisOp(CalculatorParser::ParenthesisOpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

