
// Generated from /home/giulio/Progetti/parser2/parser/grammar/Calculator.g4 by ANTLR 4.7.1


#include "CalculatorListener.h"

#include "CalculatorParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalculatorParser::CalculatorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalculatorParser::~CalculatorParser() {
  delete _interpreter;
}

std::string CalculatorParser::getGrammarFileName() const {
  return "Calculator.g4";
}

const std::vector<std::string>& CalculatorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalculatorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

CalculatorParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::InputContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::InputContext::EOF() {
  return getToken(CalculatorParser::EOF, 0);
}

tree::TerminalNode* CalculatorParser::InputContext::NL() {
  return getToken(CalculatorParser::NL, 0);
}


size_t CalculatorParser::InputContext::getRuleIndex() const {
  return CalculatorParser::RuleInput;
}

void CalculatorParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void CalculatorParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}

CalculatorParser::InputContext* CalculatorParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, CalculatorParser::RuleInput);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    plusOrMinus(0);
    setState(10);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CalculatorParser::NL) {
      setState(9);
      match(CalculatorParser::NL);
    }
    setState(12);
    match(CalculatorParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusOrMinusContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext::PlusOrMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::PlusOrMinusContext::getRuleIndex() const {
  return CalculatorParser::RulePlusOrMinus;
}

void CalculatorParser::PlusOrMinusContext::copyFrom(PlusOrMinusContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToMultOrDivContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext* CalculatorParser::ToMultOrDivContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

CalculatorParser::ToMultOrDivContext::ToMultOrDivContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }

void CalculatorParser::ToMultOrDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToMultOrDiv(this);
}
void CalculatorParser::ToMultOrDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToMultOrDiv(this);
}
//----------------- BinaryMinusOpContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext* CalculatorParser::BinaryMinusOpContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::BinaryMinusOpContext::MINUS() {
  return getToken(CalculatorParser::MINUS, 0);
}

CalculatorParser::MultOrDivContext* CalculatorParser::BinaryMinusOpContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

CalculatorParser::BinaryMinusOpContext::BinaryMinusOpContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }

void CalculatorParser::BinaryMinusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryMinusOp(this);
}
void CalculatorParser::BinaryMinusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryMinusOp(this);
}
//----------------- PlusOpContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext* CalculatorParser::PlusOpContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::PlusOpContext::PLUS() {
  return getToken(CalculatorParser::PLUS, 0);
}

CalculatorParser::MultOrDivContext* CalculatorParser::PlusOpContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

CalculatorParser::PlusOpContext::PlusOpContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }

void CalculatorParser::PlusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusOp(this);
}
void CalculatorParser::PlusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusOp(this);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::plusOrMinus() {
   return plusOrMinus(0);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::plusOrMinus(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculatorParser::PlusOrMinusContext *_localctx = _tracker.createInstance<PlusOrMinusContext>(_ctx, parentState);
  CalculatorParser::PlusOrMinusContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, CalculatorParser::RulePlusOrMinus, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ToMultOrDivContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(15);
    multOrDiv(0);
    _ctx->stop = _input->LT(-1);
    setState(25);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(23);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PlusOpContext>(_tracker.createInstance<PlusOrMinusContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePlusOrMinus);
          setState(17);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(18);
          match(CalculatorParser::PLUS);
          setState(19);
          multOrDiv(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryMinusOpContext>(_tracker.createInstance<PlusOrMinusContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePlusOrMinus);
          setState(20);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(21);
          match(CalculatorParser::MINUS);
          setState(22);
          multOrDiv(0);
          break;
        }

        } 
      }
      setState(27);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultOrDivContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext::MultOrDivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::MultOrDivContext::getRuleIndex() const {
  return CalculatorParser::RuleMultOrDiv;
}

void CalculatorParser::MultOrDivContext::copyFrom(MultOrDivContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToAtomContext ------------------------------------------------------------------

CalculatorParser::AtomContext* CalculatorParser::ToAtomContext::atom() {
  return getRuleContext<CalculatorParser::AtomContext>(0);
}

CalculatorParser::ToAtomContext::ToAtomContext(MultOrDivContext *ctx) { copyFrom(ctx); }

void CalculatorParser::ToAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAtom(this);
}
void CalculatorParser::ToAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAtom(this);
}
//----------------- MultOpContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext* CalculatorParser::MultOpContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

tree::TerminalNode* CalculatorParser::MultOpContext::MULT() {
  return getToken(CalculatorParser::MULT, 0);
}

CalculatorParser::AtomContext* CalculatorParser::MultOpContext::atom() {
  return getRuleContext<CalculatorParser::AtomContext>(0);
}

CalculatorParser::MultOpContext::MultOpContext(MultOrDivContext *ctx) { copyFrom(ctx); }

void CalculatorParser::MultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultOp(this);
}
void CalculatorParser::MultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultOp(this);
}
//----------------- DivOpContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext* CalculatorParser::DivOpContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

tree::TerminalNode* CalculatorParser::DivOpContext::DIV() {
  return getToken(CalculatorParser::DIV, 0);
}

CalculatorParser::AtomContext* CalculatorParser::DivOpContext::atom() {
  return getRuleContext<CalculatorParser::AtomContext>(0);
}

CalculatorParser::DivOpContext::DivOpContext(MultOrDivContext *ctx) { copyFrom(ctx); }

void CalculatorParser::DivOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivOp(this);
}
void CalculatorParser::DivOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivOp(this);
}

CalculatorParser::MultOrDivContext* CalculatorParser::multOrDiv() {
   return multOrDiv(0);
}

CalculatorParser::MultOrDivContext* CalculatorParser::multOrDiv(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculatorParser::MultOrDivContext *_localctx = _tracker.createInstance<MultOrDivContext>(_ctx, parentState);
  CalculatorParser::MultOrDivContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalculatorParser::RuleMultOrDiv, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ToAtomContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(29);
    atom();
    _ctx->stop = _input->LT(-1);
    setState(39);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(37);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultOpContext>(_tracker.createInstance<MultOrDivContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMultOrDiv);
          setState(31);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(32);
          match(CalculatorParser::MULT);
          setState(33);
          atom();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivOpContext>(_tracker.createInstance<MultOrDivContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMultOrDiv);
          setState(34);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(35);
          match(CalculatorParser::DIV);
          setState(36);
          atom();
          break;
        }

        } 
      }
      setState(41);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

CalculatorParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::AtomContext::getRuleIndex() const {
  return CalculatorParser::RuleAtom;
}

void CalculatorParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenthesisOpContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::ParenthesisOpContext::POPEN() {
  return getToken(CalculatorParser::POPEN, 0);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::ParenthesisOpContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::ParenthesisOpContext::PCLOSE() {
  return getToken(CalculatorParser::PCLOSE, 0);
}

CalculatorParser::ParenthesisOpContext::ParenthesisOpContext(AtomContext *ctx) { copyFrom(ctx); }

void CalculatorParser::ParenthesisOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisOp(this);
}
void CalculatorParser::ParenthesisOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisOp(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::IntContext::INT() {
  return getToken(CalculatorParser::INT, 0);
}

CalculatorParser::IntContext::IntContext(AtomContext *ctx) { copyFrom(ctx); }

void CalculatorParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void CalculatorParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}
//----------------- UnaryMinusOpContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::UnaryMinusOpContext::MINUS() {
  return getToken(CalculatorParser::MINUS, 0);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::UnaryMinusOpContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

CalculatorParser::UnaryMinusOpContext::UnaryMinusOpContext(AtomContext *ctx) { copyFrom(ctx); }

void CalculatorParser::UnaryMinusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusOp(this);
}
void CalculatorParser::UnaryMinusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusOp(this);
}
CalculatorParser::AtomContext* CalculatorParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 6, CalculatorParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::INT: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::IntContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(42);
        match(CalculatorParser::INT);
        break;
      }

      case CalculatorParser::MINUS: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::UnaryMinusOpContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(43);
        match(CalculatorParser::MINUS);
        setState(44);
        plusOrMinus(0);
        break;
      }

      case CalculatorParser::POPEN: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::ParenthesisOpContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(45);
        match(CalculatorParser::POPEN);
        setState(46);
        plusOrMinus(0);
        setState(47);
        match(CalculatorParser::PCLOSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalculatorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return plusOrMinusSempred(dynamic_cast<PlusOrMinusContext *>(context), predicateIndex);
    case 2: return multOrDivSempred(dynamic_cast<MultOrDivContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalculatorParser::plusOrMinusSempred(PlusOrMinusContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CalculatorParser::multOrDivSempred(MultOrDivContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalculatorParser::_decisionToDFA;
atn::PredictionContextCache CalculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalculatorParser::_atn;
std::vector<uint16_t> CalculatorParser::_serializedATN;

std::vector<std::string> CalculatorParser::_ruleNames = {
  "input", "plusOrMinus", "multOrDiv", "atom"
};

std::vector<std::string> CalculatorParser::_literalNames = {
  "", "", "", "'\n'", "'+'", "'-'", "'*'", "'/'", "'('", "')'"
};

std::vector<std::string> CalculatorParser::_symbolicNames = {
  "", "INT", "WS", "NL", "PLUS", "MINUS", "MULT", "DIV", "POPEN", "PCLOSE"
};

dfa::Vocabulary CalculatorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalculatorParser::_tokenNames;

CalculatorParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xb, 0x36, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xd, 0xa, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1a, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x1d, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x28, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x2b, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x34, 0xa, 0x5, 0x3, 
    0x5, 0x2, 0x4, 0x4, 0x6, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 0x38, 
    0x2, 0xa, 0x3, 0x2, 0x2, 0x2, 0x4, 0x10, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x33, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 
    0x3, 0x2, 0xb, 0xd, 0x7, 0x5, 0x2, 0x2, 0xc, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 
    0x7, 0x2, 0x2, 0x3, 0xf, 0x3, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x8, 0x3, 
    0x1, 0x2, 0x11, 0x12, 0x5, 0x6, 0x4, 0x2, 0x12, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x13, 0x14, 0xc, 0x5, 0x2, 0x2, 0x14, 0x15, 0x7, 0x6, 0x2, 0x2, 
    0x15, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x16, 0x17, 0xc, 0x4, 0x2, 0x2, 0x17, 
    0x18, 0x7, 0x7, 0x2, 0x2, 0x18, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x19, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x19, 0x16, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x1f, 0x8, 0x4, 0x1, 0x2, 0x1f, 0x20, 0x5, 0x8, 0x5, 0x2, 
    0x20, 0x29, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0xc, 0x5, 0x2, 0x2, 0x22, 
    0x23, 0x7, 0x8, 0x2, 0x2, 0x23, 0x28, 0x5, 0x8, 0x5, 0x2, 0x24, 0x25, 
    0xc, 0x4, 0x2, 0x2, 0x25, 0x26, 0x7, 0x9, 0x2, 0x2, 0x26, 0x28, 0x5, 
    0x8, 0x5, 0x2, 0x27, 0x21, 0x3, 0x2, 0x2, 0x2, 0x27, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x34, 0x7, 0x3, 0x2, 0x2, 0x2d, 
    0x2e, 0x7, 0x7, 0x2, 0x2, 0x2e, 0x34, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x30, 
    0x7, 0xa, 0x2, 0x2, 0x30, 0x31, 0x5, 0x4, 0x3, 0x2, 0x31, 0x32, 0x7, 
    0xb, 0x2, 0x2, 0x32, 0x34, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x9, 0x3, 0x2, 0x2, 0x2, 0x8, 0xc, 0x19, 0x1b, 0x27, 0x29, 
    0x33, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalculatorParser::Initializer CalculatorParser::_init;
