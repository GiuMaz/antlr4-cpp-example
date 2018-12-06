
// Generated from /home/giulio/Progetti/antlr4-cpp-example/grammar/Calculator.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CalculatorParser : public antlr4::Parser {
public:
  enum {
    INT = 1, WS = 2, NL = 3, PLUS = 4, MINUS = 5, MULT = 6, DIV = 7, POPEN = 8, 
    PCLOSE = 9
  };

  enum {
    RuleInput = 0, RulePlusOrMinus = 1, RuleMultOrDiv = 2, RuleAtom = 3
  };

  CalculatorParser(antlr4::TokenStream *input);
  ~CalculatorParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InputContext;
  class PlusOrMinusContext;
  class MultOrDivContext;
  class AtomContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputContext* input();

  class  PlusOrMinusContext : public antlr4::ParserRuleContext {
  public:
    PlusOrMinusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PlusOrMinusContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PlusOrMinusContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToMultOrDivContext : public PlusOrMinusContext {
  public:
    ToMultOrDivContext(PlusOrMinusContext *ctx);

    MultOrDivContext *multOrDiv();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryMinusOpContext : public PlusOrMinusContext {
  public:
    BinaryMinusOpContext(PlusOrMinusContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *MINUS();
    MultOrDivContext *multOrDiv();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PlusOpContext : public PlusOrMinusContext {
  public:
    PlusOpContext(PlusOrMinusContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *PLUS();
    MultOrDivContext *multOrDiv();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PlusOrMinusContext* plusOrMinus();
  PlusOrMinusContext* plusOrMinus(int precedence);
  class  MultOrDivContext : public antlr4::ParserRuleContext {
  public:
    MultOrDivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MultOrDivContext() : antlr4::ParserRuleContext() { }
    void copyFrom(MultOrDivContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToAtomContext : public MultOrDivContext {
  public:
    ToAtomContext(MultOrDivContext *ctx);

    AtomContext *atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultOpContext : public MultOrDivContext {
  public:
    MultOpContext(MultOrDivContext *ctx);

    MultOrDivContext *multOrDiv();
    antlr4::tree::TerminalNode *MULT();
    AtomContext *atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DivOpContext : public MultOrDivContext {
  public:
    DivOpContext(MultOrDivContext *ctx);

    MultOrDivContext *multOrDiv();
    antlr4::tree::TerminalNode *DIV();
    AtomContext *atom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  MultOrDivContext* multOrDiv();
  MultOrDivContext* multOrDiv(int precedence);
  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AtomContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParenthesisOpContext : public AtomContext {
  public:
    ParenthesisOpContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *POPEN();
    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *PCLOSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IntContext : public AtomContext {
  public:
    IntContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryMinusOpContext : public AtomContext {
  public:
    UnaryMinusOpContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    PlusOrMinusContext *plusOrMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AtomContext* atom();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool plusOrMinusSempred(PlusOrMinusContext *_localctx, size_t predicateIndex);
  bool multOrDivSempred(MultOrDivContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

