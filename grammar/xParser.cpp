
    #include <assert.h>


// Generated from x.g by ANTLR 4.9.3


#include "xListener.h"

#include "xParser.h"


using namespace antlrcpp;
using namespace antlr4;

xParser::xParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

xParser::~xParser() {
  delete _interpreter;
}

std::string xParser::getGrammarFileName() const {
  return "x.g";
}

const std::vector<std::string>& xParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& xParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Defid_exprContext ------------------------------------------------------------------

xParser::Defid_exprContext::Defid_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::Defid_exprContext::DEF() {
  return getToken(xParser::DEF, 0);
}

std::vector<xParser::DefidContext *> xParser::Defid_exprContext::defid() {
  return getRuleContexts<xParser::DefidContext>();
}

xParser::DefidContext* xParser::Defid_exprContext::defid(size_t i) {
  return getRuleContext<xParser::DefidContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Defid_exprContext::DOT() {
  return getTokens(xParser::DOT);
}

tree::TerminalNode* xParser::Defid_exprContext::DOT(size_t i) {
  return getToken(xParser::DOT, i);
}


size_t xParser::Defid_exprContext::getRuleIndex() const {
  return xParser::RuleDefid_expr;
}

void xParser::Defid_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefid_expr(this);
}

void xParser::Defid_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefid_expr(this);
}

xParser::Defid_exprContext* xParser::defid_expr() {
  Defid_exprContext *_localctx = _tracker.createInstance<Defid_exprContext>(_ctx, getState());
  enterRule(_localctx, 0, xParser::RuleDefid_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(xParser::DEF);
    setState(77);
    defid();
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::DOT) {
      setState(78);
      match(xParser::DOT);
      setState(79);
      defid();
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefidContext ------------------------------------------------------------------

xParser::DefidContext::DefidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::DefidContext::ID() {
  return getToken(xParser::ID, 0);
}

tree::TerminalNode* xParser::DefidContext::ASSIGN() {
  return getToken(xParser::ASSIGN, 0);
}

xParser::Condition_exprContext* xParser::DefidContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}


size_t xParser::DefidContext::getRuleIndex() const {
  return xParser::RuleDefid;
}

void xParser::DefidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefid(this);
}

void xParser::DefidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefid(this);
}

xParser::DefidContext* xParser::defid() {
  DefidContext *_localctx = _tracker.createInstance<DefidContext>(_ctx, getState());
  enterRule(_localctx, 2, xParser::RuleDefid);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(xParser::ID);
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == xParser::ASSIGN) {
      setState(86);
      match(xParser::ASSIGN);
      setState(87);
      condition_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

xParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::Bit_orExprContext *> xParser::ExprContext::bit_orExpr() {
  return getRuleContexts<xParser::Bit_orExprContext>();
}

xParser::Bit_orExprContext* xParser::ExprContext::bit_orExpr(size_t i) {
  return getRuleContext<xParser::Bit_orExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::ExprContext::BIT_OR() {
  return getTokens(xParser::BIT_OR);
}

tree::TerminalNode* xParser::ExprContext::BIT_OR(size_t i) {
  return getToken(xParser::BIT_OR, i);
}


size_t xParser::ExprContext::getRuleIndex() const {
  return xParser::RuleExpr;
}

void xParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void xParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

xParser::ExprContext* xParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, xParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    bit_orExpr();
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::BIT_OR) {
      setState(91);
      match(xParser::BIT_OR);
      setState(92);
      bit_orExpr();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bit_orExprContext ------------------------------------------------------------------

xParser::Bit_orExprContext::Bit_orExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::Bit_xorExprContext *> xParser::Bit_orExprContext::bit_xorExpr() {
  return getRuleContexts<xParser::Bit_xorExprContext>();
}

xParser::Bit_xorExprContext* xParser::Bit_orExprContext::bit_xorExpr(size_t i) {
  return getRuleContext<xParser::Bit_xorExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Bit_orExprContext::BIT_XOR() {
  return getTokens(xParser::BIT_XOR);
}

tree::TerminalNode* xParser::Bit_orExprContext::BIT_XOR(size_t i) {
  return getToken(xParser::BIT_XOR, i);
}


size_t xParser::Bit_orExprContext::getRuleIndex() const {
  return xParser::RuleBit_orExpr;
}

void xParser::Bit_orExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBit_orExpr(this);
}

void xParser::Bit_orExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBit_orExpr(this);
}

xParser::Bit_orExprContext* xParser::bit_orExpr() {
  Bit_orExprContext *_localctx = _tracker.createInstance<Bit_orExprContext>(_ctx, getState());
  enterRule(_localctx, 6, xParser::RuleBit_orExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    bit_xorExpr();
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::BIT_XOR) {
      setState(99);
      match(xParser::BIT_XOR);
      setState(100);
      bit_xorExpr();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bit_xorExprContext ------------------------------------------------------------------

xParser::Bit_xorExprContext::Bit_xorExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::Bit_andExprContext *> xParser::Bit_xorExprContext::bit_andExpr() {
  return getRuleContexts<xParser::Bit_andExprContext>();
}

xParser::Bit_andExprContext* xParser::Bit_xorExprContext::bit_andExpr(size_t i) {
  return getRuleContext<xParser::Bit_andExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Bit_xorExprContext::BIT_AND() {
  return getTokens(xParser::BIT_AND);
}

tree::TerminalNode* xParser::Bit_xorExprContext::BIT_AND(size_t i) {
  return getToken(xParser::BIT_AND, i);
}


size_t xParser::Bit_xorExprContext::getRuleIndex() const {
  return xParser::RuleBit_xorExpr;
}

void xParser::Bit_xorExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBit_xorExpr(this);
}

void xParser::Bit_xorExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBit_xorExpr(this);
}

xParser::Bit_xorExprContext* xParser::bit_xorExpr() {
  Bit_xorExprContext *_localctx = _tracker.createInstance<Bit_xorExprContext>(_ctx, getState());
  enterRule(_localctx, 8, xParser::RuleBit_xorExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    bit_andExpr();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::BIT_AND) {
      setState(107);
      match(xParser::BIT_AND);
      setState(108);
      bit_andExpr();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bit_andExprContext ------------------------------------------------------------------

xParser::Bit_andExprContext::Bit_andExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::ShiftExprContext *> xParser::Bit_andExprContext::shiftExpr() {
  return getRuleContexts<xParser::ShiftExprContext>();
}

xParser::ShiftExprContext* xParser::Bit_andExprContext::shiftExpr(size_t i) {
  return getRuleContext<xParser::ShiftExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Bit_andExprContext::L_SHIFT() {
  return getTokens(xParser::L_SHIFT);
}

tree::TerminalNode* xParser::Bit_andExprContext::L_SHIFT(size_t i) {
  return getToken(xParser::L_SHIFT, i);
}

std::vector<tree::TerminalNode *> xParser::Bit_andExprContext::R_SHIFT() {
  return getTokens(xParser::R_SHIFT);
}

tree::TerminalNode* xParser::Bit_andExprContext::R_SHIFT(size_t i) {
  return getToken(xParser::R_SHIFT, i);
}


size_t xParser::Bit_andExprContext::getRuleIndex() const {
  return xParser::RuleBit_andExpr;
}

void xParser::Bit_andExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBit_andExpr(this);
}

void xParser::Bit_andExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBit_andExpr(this);
}

xParser::Bit_andExprContext* xParser::bit_andExpr() {
  Bit_andExprContext *_localctx = _tracker.createInstance<Bit_andExprContext>(_ctx, getState());
  enterRule(_localctx, 10, xParser::RuleBit_andExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    shiftExpr();
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::L_SHIFT

    || _la == xParser::R_SHIFT) {
      setState(115);
      _la = _input->LA(1);
      if (!(_la == xParser::L_SHIFT

      || _la == xParser::R_SHIFT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(116);
      shiftExpr();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExprContext ------------------------------------------------------------------

xParser::ShiftExprContext::ShiftExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::MultExprContext *> xParser::ShiftExprContext::multExpr() {
  return getRuleContexts<xParser::MultExprContext>();
}

xParser::MultExprContext* xParser::ShiftExprContext::multExpr(size_t i) {
  return getRuleContext<xParser::MultExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::ShiftExprContext::PLUS() {
  return getTokens(xParser::PLUS);
}

tree::TerminalNode* xParser::ShiftExprContext::PLUS(size_t i) {
  return getToken(xParser::PLUS, i);
}

std::vector<tree::TerminalNode *> xParser::ShiftExprContext::MINUS() {
  return getTokens(xParser::MINUS);
}

tree::TerminalNode* xParser::ShiftExprContext::MINUS(size_t i) {
  return getToken(xParser::MINUS, i);
}


size_t xParser::ShiftExprContext::getRuleIndex() const {
  return xParser::RuleShiftExpr;
}

void xParser::ShiftExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpr(this);
}

void xParser::ShiftExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpr(this);
}

xParser::ShiftExprContext* xParser::shiftExpr() {
  ShiftExprContext *_localctx = _tracker.createInstance<ShiftExprContext>(_ctx, getState());
  enterRule(_localctx, 12, xParser::RuleShiftExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    multExpr();
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::PLUS

    || _la == xParser::MINUS) {
      setState(123);
      _la = _input->LA(1);
      if (!(_la == xParser::PLUS

      || _la == xParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(124);
      multExpr();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultExprContext ------------------------------------------------------------------

xParser::MultExprContext::MultExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::AtomContext *> xParser::MultExprContext::atom() {
  return getRuleContexts<xParser::AtomContext>();
}

xParser::AtomContext* xParser::MultExprContext::atom(size_t i) {
  return getRuleContext<xParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> xParser::MultExprContext::TIMES() {
  return getTokens(xParser::TIMES);
}

tree::TerminalNode* xParser::MultExprContext::TIMES(size_t i) {
  return getToken(xParser::TIMES, i);
}

std::vector<tree::TerminalNode *> xParser::MultExprContext::DIV() {
  return getTokens(xParser::DIV);
}

tree::TerminalNode* xParser::MultExprContext::DIV(size_t i) {
  return getToken(xParser::DIV, i);
}

std::vector<tree::TerminalNode *> xParser::MultExprContext::MOD() {
  return getTokens(xParser::MOD);
}

tree::TerminalNode* xParser::MultExprContext::MOD(size_t i) {
  return getToken(xParser::MOD, i);
}


size_t xParser::MultExprContext::getRuleIndex() const {
  return xParser::RuleMultExpr;
}

void xParser::MultExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultExpr(this);
}

void xParser::MultExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultExpr(this);
}

xParser::MultExprContext* xParser::multExpr() {
  MultExprContext *_localctx = _tracker.createInstance<MultExprContext>(_ctx, getState());
  enterRule(_localctx, 14, xParser::RuleMultExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    atom();
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::TIMES)
      | (1ULL << xParser::DIV)
      | (1ULL << xParser::MOD))) != 0)) {
      setState(131);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << xParser::TIMES)
        | (1ULL << xParser::DIV)
        | (1ULL << xParser::MOD))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(132);
      atom();
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

xParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::AtomContext::INT() {
  return getToken(xParser::INT, 0);
}

tree::TerminalNode* xParser::AtomContext::BIT_NOR() {
  return getToken(xParser::BIT_NOR, 0);
}

tree::TerminalNode* xParser::AtomContext::ID() {
  return getToken(xParser::ID, 0);
}

tree::TerminalNode* xParser::AtomContext::DOUBLE_PLUS() {
  return getToken(xParser::DOUBLE_PLUS, 0);
}

tree::TerminalNode* xParser::AtomContext::DOUBLE_MINUS() {
  return getToken(xParser::DOUBLE_MINUS, 0);
}

tree::TerminalNode* xParser::AtomContext::STRING() {
  return getToken(xParser::STRING, 0);
}

tree::TerminalNode* xParser::AtomContext::FLOAT() {
  return getToken(xParser::FLOAT, 0);
}

xParser::Func_callContext* xParser::AtomContext::func_call() {
  return getRuleContext<xParser::Func_callContext>(0);
}

xParser::List_atomContext* xParser::AtomContext::list_atom() {
  return getRuleContext<xParser::List_atomContext>(0);
}

xParser::List_call_indContext* xParser::AtomContext::list_call_ind() {
  return getRuleContext<xParser::List_call_indContext>(0);
}

xParser::ExprContext* xParser::AtomContext::expr() {
  return getRuleContext<xParser::ExprContext>(0);
}


size_t xParser::AtomContext::getRuleIndex() const {
  return xParser::RuleAtom;
}

void xParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void xParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

xParser::AtomContext* xParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 16, xParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      match(xParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      match(xParser::BIT_NOR);
      setState(140);
      match(xParser::INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(141);
      match(xParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(142);
      match(xParser::BIT_NOR);
      setState(143);
      match(xParser::ID);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(144);
      match(xParser::DOUBLE_PLUS);
      setState(145);
      match(xParser::ID);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(146);
      match(xParser::ID);
      setState(147);
      match(xParser::DOUBLE_PLUS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(148);
      match(xParser::DOUBLE_MINUS);
      setState(149);
      match(xParser::ID);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(150);
      match(xParser::ID);
      setState(151);
      match(xParser::DOUBLE_MINUS);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(152);
      match(xParser::STRING);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(153);
      match(xParser::FLOAT);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(154);
      func_call();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(155);
      list_atom();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(156);
      match(xParser::ID);
      setState(157);
      list_call_ind();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(158);
      match(xParser::T__0);
      setState(159);
      expr();
      setState(160);
      match(xParser::T__1);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(162);
      match(xParser::BIT_NOR);
      setState(163);
      match(xParser::T__0);
      setState(164);
      expr();
      setState(165);
      match(xParser::T__1);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_atomContext ------------------------------------------------------------------

xParser::List_atomContext::List_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::ListExprContext* xParser::List_atomContext::listExpr() {
  return getRuleContext<xParser::ListExprContext>(0);
}


size_t xParser::List_atomContext::getRuleIndex() const {
  return xParser::RuleList_atom;
}

void xParser::List_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_atom(this);
}

void xParser::List_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_atom(this);
}

xParser::List_atomContext* xParser::list_atom() {
  List_atomContext *_localctx = _tracker.createInstance<List_atomContext>(_ctx, getState());
  enterRule(_localctx, 18, xParser::RuleList_atom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(xParser::T__2);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::T__0)
      | (1ULL << xParser::T__2)
      | (1ULL << xParser::BIT_NOR)
      | (1ULL << xParser::DOUBLE_PLUS)
      | (1ULL << xParser::DOUBLE_MINUS)
      | (1ULL << xParser::INT)
      | (1ULL << xParser::ID)
      | (1ULL << xParser::FLOAT)
      | (1ULL << xParser::STRING))) != 0)) {
      setState(170);
      listExpr();
    }
    setState(173);
    match(xParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListExprContext ------------------------------------------------------------------

xParser::ListExprContext::ListExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::ExprContext *> xParser::ListExprContext::expr() {
  return getRuleContexts<xParser::ExprContext>();
}

xParser::ExprContext* xParser::ListExprContext::expr(size_t i) {
  return getRuleContext<xParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::ListExprContext::DOT() {
  return getTokens(xParser::DOT);
}

tree::TerminalNode* xParser::ListExprContext::DOT(size_t i) {
  return getToken(xParser::DOT, i);
}


size_t xParser::ListExprContext::getRuleIndex() const {
  return xParser::RuleListExpr;
}

void xParser::ListExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListExpr(this);
}

void xParser::ListExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListExpr(this);
}

xParser::ListExprContext* xParser::listExpr() {
  ListExprContext *_localctx = _tracker.createInstance<ListExprContext>(_ctx, getState());
  enterRule(_localctx, 20, xParser::RuleListExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    expr();
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::DOT) {
      setState(176);
      match(xParser::DOT);
      setState(177);
      expr();
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_call_indContext ------------------------------------------------------------------

xParser::List_call_indContext::List_call_indContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::ExprContext *> xParser::List_call_indContext::expr() {
  return getRuleContexts<xParser::ExprContext>();
}

xParser::ExprContext* xParser::List_call_indContext::expr(size_t i) {
  return getRuleContext<xParser::ExprContext>(i);
}


size_t xParser::List_call_indContext::getRuleIndex() const {
  return xParser::RuleList_call_ind;
}

void xParser::List_call_indContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_call_ind(this);
}

void xParser::List_call_indContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_call_ind(this);
}

xParser::List_call_indContext* xParser::list_call_ind() {
  List_call_indContext *_localctx = _tracker.createInstance<List_call_indContext>(_ctx, getState());
  enterRule(_localctx, 22, xParser::RuleList_call_ind);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(183);
      match(xParser::T__2);
      setState(184);
      expr();
      setState(185);
      match(xParser::T__3);
      setState(189); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == xParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

xParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::Expr_stmtContext* xParser::StmtContext::expr_stmt() {
  return getRuleContext<xParser::Expr_stmtContext>(0);
}

xParser::Control_stmtContext* xParser::StmtContext::control_stmt() {
  return getRuleContext<xParser::Control_stmtContext>(0);
}

xParser::Func_stmtContext* xParser::StmtContext::func_stmt() {
  return getRuleContext<xParser::Func_stmtContext>(0);
}


size_t xParser::StmtContext::getRuleIndex() const {
  return xParser::RuleStmt;
}

void xParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void xParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

xParser::StmtContext* xParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 24, xParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case xParser::T__0:
      case xParser::T__2:
      case xParser::PRINT:
      case xParser::BIT_NOR:
      case xParser::DOUBLE_PLUS:
      case xParser::DOUBLE_MINUS:
      case xParser::INT:
      case xParser::ID:
      case xParser::FLOAT:
      case xParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(191);
        expr_stmt();
        break;
      }

      case xParser::T__5:
      case xParser::DEF:
      case xParser::IF:
      case xParser::BREAK:
      case xParser::CONTINUE:
      case xParser::FOR:
      case xParser::WHILE:
      case xParser::DO:
      case xParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(192);
        control_stmt();
        break;
      }

      case xParser::FUNC: {
        enterOuterAlt(_localctx, 3);
        setState(193);
        func_stmt();
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

//----------------- If_exprContext ------------------------------------------------------------------

xParser::If_exprContext::If_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::If_exprContext::IF() {
  return getToken(xParser::IF, 0);
}

xParser::Condition_exprContext* xParser::If_exprContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}

std::vector<xParser::StmtContext *> xParser::If_exprContext::stmt() {
  return getRuleContexts<xParser::StmtContext>();
}

xParser::StmtContext* xParser::If_exprContext::stmt(size_t i) {
  return getRuleContext<xParser::StmtContext>(i);
}

tree::TerminalNode* xParser::If_exprContext::ELSE() {
  return getToken(xParser::ELSE, 0);
}


size_t xParser::If_exprContext::getRuleIndex() const {
  return xParser::RuleIf_expr;
}

void xParser::If_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_expr(this);
}

void xParser::If_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_expr(this);
}

xParser::If_exprContext* xParser::if_expr() {
  If_exprContext *_localctx = _tracker.createInstance<If_exprContext>(_ctx, getState());
  enterRule(_localctx, 26, xParser::RuleIf_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(xParser::IF);
    setState(197);
    match(xParser::T__0);
    setState(198);
    condition_expr();
    setState(199);
    match(xParser::T__1);
    setState(200);
    stmt();
    setState(203);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(201);
      match(xParser::ELSE);
      setState(202);
      stmt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_exprContext ------------------------------------------------------------------

xParser::For_exprContext::For_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::For_exprContext::FOR() {
  return getToken(xParser::FOR, 0);
}

xParser::Init_exprContext* xParser::For_exprContext::init_expr() {
  return getRuleContext<xParser::Init_exprContext>(0);
}

xParser::Condition_exprContext* xParser::For_exprContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}

xParser::For_do_exprContext* xParser::For_exprContext::for_do_expr() {
  return getRuleContext<xParser::For_do_exprContext>(0);
}

xParser::StmtContext* xParser::For_exprContext::stmt() {
  return getRuleContext<xParser::StmtContext>(0);
}


size_t xParser::For_exprContext::getRuleIndex() const {
  return xParser::RuleFor_expr;
}

void xParser::For_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_expr(this);
}

void xParser::For_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_expr(this);
}

xParser::For_exprContext* xParser::for_expr() {
  For_exprContext *_localctx = _tracker.createInstance<For_exprContext>(_ctx, getState());
  enterRule(_localctx, 28, xParser::RuleFor_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(xParser::FOR);
    setState(206);
    match(xParser::T__0);
    setState(207);
    init_expr();
    setState(208);
    match(xParser::T__4);
    setState(209);
    condition_expr();
    setState(210);
    match(xParser::T__4);
    setState(211);
    for_do_expr();
    setState(212);
    match(xParser::T__1);
    setState(213);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_exprContext ------------------------------------------------------------------

xParser::While_exprContext::While_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::While_exprContext::WHILE() {
  return getToken(xParser::WHILE, 0);
}

xParser::Condition_exprContext* xParser::While_exprContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}

xParser::StmtContext* xParser::While_exprContext::stmt() {
  return getRuleContext<xParser::StmtContext>(0);
}

tree::TerminalNode* xParser::While_exprContext::DO() {
  return getToken(xParser::DO, 0);
}

xParser::BlockContext* xParser::While_exprContext::block() {
  return getRuleContext<xParser::BlockContext>(0);
}


size_t xParser::While_exprContext::getRuleIndex() const {
  return xParser::RuleWhile_expr;
}

void xParser::While_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_expr(this);
}

void xParser::While_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_expr(this);
}

xParser::While_exprContext* xParser::while_expr() {
  While_exprContext *_localctx = _tracker.createInstance<While_exprContext>(_ctx, getState());
  enterRule(_localctx, 30, xParser::RuleWhile_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case xParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(215);
        match(xParser::WHILE);
        setState(216);
        match(xParser::T__0);
        setState(217);
        condition_expr();
        setState(218);
        match(xParser::T__1);
        setState(219);
        stmt();
        break;
      }

      case xParser::DO: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        match(xParser::DO);
        setState(222);
        block();
        setState(223);
        match(xParser::WHILE);
        setState(224);
        match(xParser::T__0);
        setState(225);
        condition_expr();
        setState(226);
        match(xParser::T__1);
        setState(227);
        match(xParser::T__4);
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

//----------------- Init_exprContext ------------------------------------------------------------------

xParser::Init_exprContext::Init_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::Defid_exprContext* xParser::Init_exprContext::defid_expr() {
  return getRuleContext<xParser::Defid_exprContext>(0);
}

tree::TerminalNode* xParser::Init_exprContext::ID() {
  return getToken(xParser::ID, 0);
}

tree::TerminalNode* xParser::Init_exprContext::ASSIGN() {
  return getToken(xParser::ASSIGN, 0);
}

xParser::ExprContext* xParser::Init_exprContext::expr() {
  return getRuleContext<xParser::ExprContext>(0);
}


size_t xParser::Init_exprContext::getRuleIndex() const {
  return xParser::RuleInit_expr;
}

void xParser::Init_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit_expr(this);
}

void xParser::Init_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit_expr(this);
}

xParser::Init_exprContext* xParser::init_expr() {
  Init_exprContext *_localctx = _tracker.createInstance<Init_exprContext>(_ctx, getState());
  enterRule(_localctx, 32, xParser::RuleInit_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case xParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(231);
        defid_expr();
        break;
      }

      case xParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(232);
        match(xParser::ID);
        setState(233);
        match(xParser::ASSIGN);
        setState(234);
        expr();
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

//----------------- For_do_exprContext ------------------------------------------------------------------

xParser::For_do_exprContext::For_do_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::For_do_exprContext::ID() {
  return getToken(xParser::ID, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::ASSIGN() {
  return getToken(xParser::ASSIGN, 0);
}

xParser::ExprContext* xParser::For_do_exprContext::expr() {
  return getRuleContext<xParser::ExprContext>(0);
}

tree::TerminalNode* xParser::For_do_exprContext::PLUS() {
  return getToken(xParser::PLUS, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::MINUS() {
  return getToken(xParser::MINUS, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::TIMES() {
  return getToken(xParser::TIMES, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::DIV() {
  return getToken(xParser::DIV, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::MOD() {
  return getToken(xParser::MOD, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::BIT_AND() {
  return getToken(xParser::BIT_AND, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::BIT_OR() {
  return getToken(xParser::BIT_OR, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::BIT_XOR() {
  return getToken(xParser::BIT_XOR, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::L_SHIFT() {
  return getToken(xParser::L_SHIFT, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::R_SHIFT() {
  return getToken(xParser::R_SHIFT, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::DOUBLE_PLUS() {
  return getToken(xParser::DOUBLE_PLUS, 0);
}

tree::TerminalNode* xParser::For_do_exprContext::DOUBLE_MINUS() {
  return getToken(xParser::DOUBLE_MINUS, 0);
}


size_t xParser::For_do_exprContext::getRuleIndex() const {
  return xParser::RuleFor_do_expr;
}

void xParser::For_do_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_do_expr(this);
}

void xParser::For_do_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_do_expr(this);
}

xParser::For_do_exprContext* xParser::for_do_expr() {
  For_do_exprContext *_localctx = _tracker.createInstance<For_do_exprContext>(_ctx, getState());
  enterRule(_localctx, 34, xParser::RuleFor_do_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(237);
      match(xParser::ID);
      setState(238);
      match(xParser::ASSIGN);
      setState(239);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(240);
      match(xParser::ID);
      setState(241);
      match(xParser::PLUS);
      setState(242);
      match(xParser::ASSIGN);
      setState(243);
      expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(244);
      match(xParser::ID);
      setState(245);
      match(xParser::MINUS);
      setState(246);
      match(xParser::ASSIGN);
      setState(247);
      expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(248);
      match(xParser::ID);
      setState(249);
      match(xParser::TIMES);
      setState(250);
      match(xParser::ASSIGN);
      setState(251);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(252);
      match(xParser::ID);
      setState(253);
      match(xParser::DIV);
      setState(254);
      match(xParser::ASSIGN);
      setState(255);
      expr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(256);
      match(xParser::ID);
      setState(257);
      match(xParser::MOD);
      setState(258);
      match(xParser::ASSIGN);
      setState(259);
      expr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(260);
      match(xParser::ID);
      setState(261);
      match(xParser::BIT_AND);
      setState(262);
      match(xParser::ASSIGN);
      setState(263);
      expr();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(264);
      match(xParser::ID);
      setState(265);
      match(xParser::BIT_OR);
      setState(266);
      match(xParser::ASSIGN);
      setState(267);
      expr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(268);
      match(xParser::ID);
      setState(269);
      match(xParser::BIT_XOR);
      setState(270);
      match(xParser::ASSIGN);
      setState(271);
      expr();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(272);
      match(xParser::ID);
      setState(273);
      match(xParser::L_SHIFT);
      setState(274);
      match(xParser::ASSIGN);
      setState(275);
      expr();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(276);
      match(xParser::ID);
      setState(277);
      match(xParser::R_SHIFT);
      setState(278);
      match(xParser::ASSIGN);
      setState(279);
      expr();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(280);
      match(xParser::DOUBLE_PLUS);
      setState(281);
      match(xParser::ID);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(282);
      match(xParser::ID);
      setState(283);
      match(xParser::DOUBLE_PLUS);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(284);
      match(xParser::DOUBLE_MINUS);
      setState(285);
      match(xParser::ID);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(286);
      match(xParser::ID);
      setState(287);
      match(xParser::DOUBLE_MINUS);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_exprContext ------------------------------------------------------------------

xParser::Switch_exprContext::Switch_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::Switch_exprContext::SWITCH() {
  return getToken(xParser::SWITCH, 0);
}

xParser::Condition_exprContext* xParser::Switch_exprContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}

std::vector<xParser::Case_exprContext *> xParser::Switch_exprContext::case_expr() {
  return getRuleContexts<xParser::Case_exprContext>();
}

xParser::Case_exprContext* xParser::Switch_exprContext::case_expr(size_t i) {
  return getRuleContext<xParser::Case_exprContext>(i);
}

xParser::Default_exprContext* xParser::Switch_exprContext::default_expr() {
  return getRuleContext<xParser::Default_exprContext>(0);
}


size_t xParser::Switch_exprContext::getRuleIndex() const {
  return xParser::RuleSwitch_expr;
}

void xParser::Switch_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_expr(this);
}

void xParser::Switch_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_expr(this);
}

xParser::Switch_exprContext* xParser::switch_expr() {
  Switch_exprContext *_localctx = _tracker.createInstance<Switch_exprContext>(_ctx, getState());
  enterRule(_localctx, 36, xParser::RuleSwitch_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(xParser::SWITCH);
    setState(291);
    match(xParser::T__0);
    setState(292);
    condition_expr();
    setState(293);
    match(xParser::T__1);
    setState(294);
    match(xParser::T__5);
    setState(296); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(295);
      case_expr();
      setState(298); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == xParser::CASE);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == xParser::DEFAULT) {
      setState(300);
      default_expr();
    }
    setState(303);
    match(xParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_exprContext ------------------------------------------------------------------

xParser::Case_exprContext::Case_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::Case_exprContext::CASE() {
  return getToken(xParser::CASE, 0);
}

xParser::ExprContext* xParser::Case_exprContext::expr() {
  return getRuleContext<xParser::ExprContext>(0);
}

std::vector<xParser::StmtContext *> xParser::Case_exprContext::stmt() {
  return getRuleContexts<xParser::StmtContext>();
}

xParser::StmtContext* xParser::Case_exprContext::stmt(size_t i) {
  return getRuleContext<xParser::StmtContext>(i);
}


size_t xParser::Case_exprContext::getRuleIndex() const {
  return xParser::RuleCase_expr;
}

void xParser::Case_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_expr(this);
}

void xParser::Case_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_expr(this);
}

xParser::Case_exprContext* xParser::case_expr() {
  Case_exprContext *_localctx = _tracker.createInstance<Case_exprContext>(_ctx, getState());
  enterRule(_localctx, 38, xParser::RuleCase_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(xParser::CASE);
    setState(306);
    expr();
    setState(307);
    match(xParser::T__7);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::T__0)
      | (1ULL << xParser::T__2)
      | (1ULL << xParser::T__5)
      | (1ULL << xParser::DEF)
      | (1ULL << xParser::PRINT)
      | (1ULL << xParser::BIT_NOR)
      | (1ULL << xParser::DOUBLE_PLUS)
      | (1ULL << xParser::DOUBLE_MINUS)
      | (1ULL << xParser::IF)
      | (1ULL << xParser::BREAK)
      | (1ULL << xParser::CONTINUE)
      | (1ULL << xParser::FOR)
      | (1ULL << xParser::WHILE)
      | (1ULL << xParser::DO)
      | (1ULL << xParser::FUNC)
      | (1ULL << xParser::RETURN)
      | (1ULL << xParser::INT)
      | (1ULL << xParser::ID)
      | (1ULL << xParser::FLOAT)
      | (1ULL << xParser::STRING))) != 0)) {
      setState(308);
      stmt();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_exprContext ------------------------------------------------------------------

xParser::Default_exprContext::Default_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::Default_exprContext::DEFAULT() {
  return getToken(xParser::DEFAULT, 0);
}

std::vector<xParser::StmtContext *> xParser::Default_exprContext::stmt() {
  return getRuleContexts<xParser::StmtContext>();
}

xParser::StmtContext* xParser::Default_exprContext::stmt(size_t i) {
  return getRuleContext<xParser::StmtContext>(i);
}


size_t xParser::Default_exprContext::getRuleIndex() const {
  return xParser::RuleDefault_expr;
}

void xParser::Default_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_expr(this);
}

void xParser::Default_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_expr(this);
}

xParser::Default_exprContext* xParser::default_expr() {
  Default_exprContext *_localctx = _tracker.createInstance<Default_exprContext>(_ctx, getState());
  enterRule(_localctx, 40, xParser::RuleDefault_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(xParser::DEFAULT);
    setState(315);
    match(xParser::T__7);
    setState(319);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::T__0)
      | (1ULL << xParser::T__2)
      | (1ULL << xParser::T__5)
      | (1ULL << xParser::DEF)
      | (1ULL << xParser::PRINT)
      | (1ULL << xParser::BIT_NOR)
      | (1ULL << xParser::DOUBLE_PLUS)
      | (1ULL << xParser::DOUBLE_MINUS)
      | (1ULL << xParser::IF)
      | (1ULL << xParser::BREAK)
      | (1ULL << xParser::CONTINUE)
      | (1ULL << xParser::FOR)
      | (1ULL << xParser::WHILE)
      | (1ULL << xParser::DO)
      | (1ULL << xParser::FUNC)
      | (1ULL << xParser::RETURN)
      | (1ULL << xParser::INT)
      | (1ULL << xParser::ID)
      | (1ULL << xParser::FLOAT)
      | (1ULL << xParser::STRING))) != 0)) {
      setState(316);
      stmt();
      setState(321);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_exprContext ------------------------------------------------------------------

xParser::Condition_exprContext::Condition_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::AndExprContext *> xParser::Condition_exprContext::andExpr() {
  return getRuleContexts<xParser::AndExprContext>();
}

xParser::AndExprContext* xParser::Condition_exprContext::andExpr(size_t i) {
  return getRuleContext<xParser::AndExprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Condition_exprContext::OR() {
  return getTokens(xParser::OR);
}

tree::TerminalNode* xParser::Condition_exprContext::OR(size_t i) {
  return getToken(xParser::OR, i);
}


size_t xParser::Condition_exprContext::getRuleIndex() const {
  return xParser::RuleCondition_expr;
}

void xParser::Condition_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition_expr(this);
}

void xParser::Condition_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition_expr(this);
}

xParser::Condition_exprContext* xParser::condition_expr() {
  Condition_exprContext *_localctx = _tracker.createInstance<Condition_exprContext>(_ctx, getState());
  enterRule(_localctx, 42, xParser::RuleCondition_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    andExpr();
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::OR) {
      setState(323);
      match(xParser::OR);
      setState(324);
      andExpr();
      setState(329);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExprContext ------------------------------------------------------------------

xParser::AndExprContext::AndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::Cmp_atomContext *> xParser::AndExprContext::cmp_atom() {
  return getRuleContexts<xParser::Cmp_atomContext>();
}

xParser::Cmp_atomContext* xParser::AndExprContext::cmp_atom(size_t i) {
  return getRuleContext<xParser::Cmp_atomContext>(i);
}

std::vector<tree::TerminalNode *> xParser::AndExprContext::AND() {
  return getTokens(xParser::AND);
}

tree::TerminalNode* xParser::AndExprContext::AND(size_t i) {
  return getToken(xParser::AND, i);
}


size_t xParser::AndExprContext::getRuleIndex() const {
  return xParser::RuleAndExpr;
}

void xParser::AndExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpr(this);
}

void xParser::AndExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpr(this);
}

xParser::AndExprContext* xParser::andExpr() {
  AndExprContext *_localctx = _tracker.createInstance<AndExprContext>(_ctx, getState());
  enterRule(_localctx, 44, xParser::RuleAndExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    cmp_atom();
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::AND) {
      setState(331);
      match(xParser::AND);
      setState(332);
      cmp_atom();
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cmp_atomContext ------------------------------------------------------------------

xParser::Cmp_atomContext::Cmp_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::Cond_atomContext *> xParser::Cmp_atomContext::cond_atom() {
  return getRuleContexts<xParser::Cond_atomContext>();
}

xParser::Cond_atomContext* xParser::Cmp_atomContext::cond_atom(size_t i) {
  return getRuleContext<xParser::Cond_atomContext>(i);
}

tree::TerminalNode* xParser::Cmp_atomContext::GT() {
  return getToken(xParser::GT, 0);
}

tree::TerminalNode* xParser::Cmp_atomContext::LITTLE() {
  return getToken(xParser::LITTLE, 0);
}

tree::TerminalNode* xParser::Cmp_atomContext::EQ() {
  return getToken(xParser::EQ, 0);
}

tree::TerminalNode* xParser::Cmp_atomContext::GE() {
  return getToken(xParser::GE, 0);
}

tree::TerminalNode* xParser::Cmp_atomContext::LE() {
  return getToken(xParser::LE, 0);
}

tree::TerminalNode* xParser::Cmp_atomContext::NE() {
  return getToken(xParser::NE, 0);
}


size_t xParser::Cmp_atomContext::getRuleIndex() const {
  return xParser::RuleCmp_atom;
}

void xParser::Cmp_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmp_atom(this);
}

void xParser::Cmp_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmp_atom(this);
}

xParser::Cmp_atomContext* xParser::cmp_atom() {
  Cmp_atomContext *_localctx = _tracker.createInstance<Cmp_atomContext>(_ctx, getState());
  enterRule(_localctx, 46, xParser::RuleCmp_atom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    cond_atom();
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::GE)
      | (1ULL << xParser::NE)
      | (1ULL << xParser::LITTLE)
      | (1ULL << xParser::LE)
      | (1ULL << xParser::GT)
      | (1ULL << xParser::EQ))) != 0)) {
      setState(339);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << xParser::GE)
        | (1ULL << xParser::NE)
        | (1ULL << xParser::LITTLE)
        | (1ULL << xParser::LE)
        | (1ULL << xParser::GT)
        | (1ULL << xParser::EQ))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(340);
      cond_atom();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cond_atomContext ------------------------------------------------------------------

xParser::Cond_atomContext::Cond_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::ExprContext* xParser::Cond_atomContext::expr() {
  return getRuleContext<xParser::ExprContext>(0);
}


size_t xParser::Cond_atomContext::getRuleIndex() const {
  return xParser::RuleCond_atom;
}

void xParser::Cond_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond_atom(this);
}

void xParser::Cond_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond_atom(this);
}

xParser::Cond_atomContext* xParser::cond_atom() {
  Cond_atomContext *_localctx = _tracker.createInstance<Cond_atomContext>(_ctx, getState());
  enterRule(_localctx, 48, xParser::RuleCond_atom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

xParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::Block_exprContext* xParser::BlockContext::block_expr() {
  return getRuleContext<xParser::Block_exprContext>(0);
}


size_t xParser::BlockContext::getRuleIndex() const {
  return xParser::RuleBlock;
}

void xParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void xParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

xParser::BlockContext* xParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 50, xParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    block_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Block_exprContext ------------------------------------------------------------------

xParser::Block_exprContext::Block_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::StmtContext *> xParser::Block_exprContext::stmt() {
  return getRuleContexts<xParser::StmtContext>();
}

xParser::StmtContext* xParser::Block_exprContext::stmt(size_t i) {
  return getRuleContext<xParser::StmtContext>(i);
}


size_t xParser::Block_exprContext::getRuleIndex() const {
  return xParser::RuleBlock_expr;
}

void xParser::Block_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock_expr(this);
}

void xParser::Block_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock_expr(this);
}

xParser::Block_exprContext* xParser::block_expr() {
  Block_exprContext *_localctx = _tracker.createInstance<Block_exprContext>(_ctx, getState());
  enterRule(_localctx, 52, xParser::RuleBlock_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(xParser::T__5);
    setState(351);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::T__0)
      | (1ULL << xParser::T__2)
      | (1ULL << xParser::T__5)
      | (1ULL << xParser::DEF)
      | (1ULL << xParser::PRINT)
      | (1ULL << xParser::BIT_NOR)
      | (1ULL << xParser::DOUBLE_PLUS)
      | (1ULL << xParser::DOUBLE_MINUS)
      | (1ULL << xParser::IF)
      | (1ULL << xParser::BREAK)
      | (1ULL << xParser::CONTINUE)
      | (1ULL << xParser::FOR)
      | (1ULL << xParser::WHILE)
      | (1ULL << xParser::DO)
      | (1ULL << xParser::FUNC)
      | (1ULL << xParser::RETURN)
      | (1ULL << xParser::INT)
      | (1ULL << xParser::ID)
      | (1ULL << xParser::FLOAT)
      | (1ULL << xParser::STRING))) != 0)) {
      setState(348);
      stmt();
      setState(353);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(354);
    match(xParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_atomContext ------------------------------------------------------------------

xParser::Print_atomContext::Print_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::Condition_exprContext* xParser::Print_atomContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}


size_t xParser::Print_atomContext::getRuleIndex() const {
  return xParser::RulePrint_atom;
}

void xParser::Print_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_atom(this);
}

void xParser::Print_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_atom(this);
}

xParser::Print_atomContext* xParser::print_atom() {
  Print_atomContext *_localctx = _tracker.createInstance<Print_atomContext>(_ctx, getState());
  enterRule(_localctx, 54, xParser::RulePrint_atom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    condition_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_stmtContext ------------------------------------------------------------------

xParser::Expr_stmtContext::Expr_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::ExprContext* xParser::Expr_stmtContext::expr() {
  return getRuleContext<xParser::ExprContext>(0);
}

tree::TerminalNode* xParser::Expr_stmtContext::ID() {
  return getToken(xParser::ID, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::ASSIGN() {
  return getToken(xParser::ASSIGN, 0);
}

xParser::List_def_indContext* xParser::Expr_stmtContext::list_def_ind() {
  return getRuleContext<xParser::List_def_indContext>(0);
}

tree::TerminalNode* xParser::Expr_stmtContext::PLUS() {
  return getToken(xParser::PLUS, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::MINUS() {
  return getToken(xParser::MINUS, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::TIMES() {
  return getToken(xParser::TIMES, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::DIV() {
  return getToken(xParser::DIV, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::MOD() {
  return getToken(xParser::MOD, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::BIT_AND() {
  return getToken(xParser::BIT_AND, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::BIT_OR() {
  return getToken(xParser::BIT_OR, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::BIT_XOR() {
  return getToken(xParser::BIT_XOR, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::L_SHIFT() {
  return getToken(xParser::L_SHIFT, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::R_SHIFT() {
  return getToken(xParser::R_SHIFT, 0);
}

tree::TerminalNode* xParser::Expr_stmtContext::PRINT() {
  return getToken(xParser::PRINT, 0);
}

std::vector<xParser::Print_atomContext *> xParser::Expr_stmtContext::print_atom() {
  return getRuleContexts<xParser::Print_atomContext>();
}

xParser::Print_atomContext* xParser::Expr_stmtContext::print_atom(size_t i) {
  return getRuleContext<xParser::Print_atomContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Expr_stmtContext::DOT() {
  return getTokens(xParser::DOT);
}

tree::TerminalNode* xParser::Expr_stmtContext::DOT(size_t i) {
  return getToken(xParser::DOT, i);
}


size_t xParser::Expr_stmtContext::getRuleIndex() const {
  return xParser::RuleExpr_stmt;
}

void xParser::Expr_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt(this);
}

void xParser::Expr_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt(this);
}

xParser::Expr_stmtContext* xParser::expr_stmt() {
  Expr_stmtContext *_localctx = _tracker.createInstance<Expr_stmtContext>(_ctx, getState());
  enterRule(_localctx, 56, xParser::RuleExpr_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(358);
      expr();
      setState(359);
      match(xParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(361);
      match(xParser::ID);
      setState(362);
      match(xParser::ASSIGN);
      setState(363);
      expr();
      setState(364);
      match(xParser::T__4);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(366);
      match(xParser::ID);
      setState(367);
      match(xParser::T__2);
      setState(368);
      list_def_ind();
      setState(369);
      match(xParser::T__3);
      setState(370);
      match(xParser::ASSIGN);
      setState(371);
      expr();
      setState(372);
      match(xParser::T__4);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(374);
      match(xParser::ID);
      setState(375);
      match(xParser::PLUS);
      setState(376);
      match(xParser::ASSIGN);
      setState(377);
      expr();
      setState(378);
      match(xParser::T__4);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(380);
      match(xParser::ID);
      setState(381);
      match(xParser::MINUS);
      setState(382);
      match(xParser::ASSIGN);
      setState(383);
      expr();
      setState(384);
      match(xParser::T__4);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(386);
      match(xParser::ID);
      setState(387);
      match(xParser::TIMES);
      setState(388);
      match(xParser::ASSIGN);
      setState(389);
      expr();
      setState(390);
      match(xParser::T__4);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(392);
      match(xParser::ID);
      setState(393);
      match(xParser::DIV);
      setState(394);
      match(xParser::ASSIGN);
      setState(395);
      expr();
      setState(396);
      match(xParser::T__4);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(398);
      match(xParser::ID);
      setState(399);
      match(xParser::MOD);
      setState(400);
      match(xParser::ASSIGN);
      setState(401);
      expr();
      setState(402);
      match(xParser::T__4);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(404);
      match(xParser::ID);
      setState(405);
      match(xParser::BIT_AND);
      setState(406);
      match(xParser::ASSIGN);
      setState(407);
      expr();
      setState(408);
      match(xParser::T__4);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(410);
      match(xParser::ID);
      setState(411);
      match(xParser::BIT_OR);
      setState(412);
      match(xParser::ASSIGN);
      setState(413);
      expr();
      setState(414);
      match(xParser::T__4);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(416);
      match(xParser::ID);
      setState(417);
      match(xParser::BIT_XOR);
      setState(418);
      match(xParser::ASSIGN);
      setState(419);
      expr();
      setState(420);
      match(xParser::T__4);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(422);
      match(xParser::ID);
      setState(423);
      match(xParser::L_SHIFT);
      setState(424);
      match(xParser::ASSIGN);
      setState(425);
      expr();
      setState(426);
      match(xParser::T__4);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(428);
      match(xParser::ID);
      setState(429);
      match(xParser::R_SHIFT);
      setState(430);
      match(xParser::ASSIGN);
      setState(431);
      expr();
      setState(432);
      match(xParser::T__4);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(434);
      match(xParser::PRINT);
      setState(435);
      print_atom();
      setState(440);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == xParser::DOT) {
        setState(436);
        match(xParser::DOT);
        setState(437);
        print_atom();
        setState(442);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(443);
      match(xParser::T__4);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_def_indContext ------------------------------------------------------------------

xParser::List_def_indContext::List_def_indContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::List_def_indContext::INT() {
  return getToken(xParser::INT, 0);
}

tree::TerminalNode* xParser::List_def_indContext::ID() {
  return getToken(xParser::ID, 0);
}


size_t xParser::List_def_indContext::getRuleIndex() const {
  return xParser::RuleList_def_ind;
}

void xParser::List_def_indContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_def_ind(this);
}

void xParser::List_def_indContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_def_ind(this);
}

xParser::List_def_indContext* xParser::list_def_ind() {
  List_def_indContext *_localctx = _tracker.createInstance<List_def_indContext>(_ctx, getState());
  enterRule(_localctx, 58, xParser::RuleList_def_ind);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    _la = _input->LA(1);
    if (!(_la == xParser::INT

    || _la == xParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Control_stmtContext ------------------------------------------------------------------

xParser::Control_stmtContext::Control_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::For_exprContext* xParser::Control_stmtContext::for_expr() {
  return getRuleContext<xParser::For_exprContext>(0);
}

xParser::If_exprContext* xParser::Control_stmtContext::if_expr() {
  return getRuleContext<xParser::If_exprContext>(0);
}

xParser::While_exprContext* xParser::Control_stmtContext::while_expr() {
  return getRuleContext<xParser::While_exprContext>(0);
}

xParser::Defid_exprContext* xParser::Control_stmtContext::defid_expr() {
  return getRuleContext<xParser::Defid_exprContext>(0);
}

xParser::BlockContext* xParser::Control_stmtContext::block() {
  return getRuleContext<xParser::BlockContext>(0);
}

tree::TerminalNode* xParser::Control_stmtContext::BREAK() {
  return getToken(xParser::BREAK, 0);
}

tree::TerminalNode* xParser::Control_stmtContext::CONTINUE() {
  return getToken(xParser::CONTINUE, 0);
}

tree::TerminalNode* xParser::Control_stmtContext::RETURN() {
  return getToken(xParser::RETURN, 0);
}

xParser::Condition_exprContext* xParser::Control_stmtContext::condition_expr() {
  return getRuleContext<xParser::Condition_exprContext>(0);
}


size_t xParser::Control_stmtContext::getRuleIndex() const {
  return xParser::RuleControl_stmt;
}

void xParser::Control_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControl_stmt(this);
}

void xParser::Control_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControl_stmt(this);
}

xParser::Control_stmtContext* xParser::control_stmt() {
  Control_stmtContext *_localctx = _tracker.createInstance<Control_stmtContext>(_ctx, getState());
  enterRule(_localctx, 60, xParser::RuleControl_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(464);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case xParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(449);
        for_expr();
        break;
      }

      case xParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(450);
        if_expr();
        break;
      }

      case xParser::WHILE:
      case xParser::DO: {
        enterOuterAlt(_localctx, 3);
        setState(451);
        while_expr();
        break;
      }

      case xParser::DEF: {
        enterOuterAlt(_localctx, 4);
        setState(452);
        defid_expr();
        setState(453);
        match(xParser::T__4);
        break;
      }

      case xParser::T__5: {
        enterOuterAlt(_localctx, 5);
        setState(455);
        block();
        break;
      }

      case xParser::BREAK: {
        enterOuterAlt(_localctx, 6);
        setState(456);
        match(xParser::BREAK);
        setState(457);
        match(xParser::T__4);
        break;
      }

      case xParser::CONTINUE: {
        enterOuterAlt(_localctx, 7);
        setState(458);
        match(xParser::CONTINUE);
        setState(459);
        match(xParser::T__4);
        break;
      }

      case xParser::RETURN: {
        enterOuterAlt(_localctx, 8);
        setState(460);
        match(xParser::RETURN);
        setState(461);
        condition_expr();
        setState(462);
        match(xParser::T__4);
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

//----------------- Func_stmtContext ------------------------------------------------------------------

xParser::Func_stmtContext::Func_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::Func_stmtContext::FUNC() {
  return getToken(xParser::FUNC, 0);
}

tree::TerminalNode* xParser::Func_stmtContext::ID() {
  return getToken(xParser::ID, 0);
}

xParser::ParamContext* xParser::Func_stmtContext::param() {
  return getRuleContext<xParser::ParamContext>(0);
}

xParser::BlockContext* xParser::Func_stmtContext::block() {
  return getRuleContext<xParser::BlockContext>(0);
}


size_t xParser::Func_stmtContext::getRuleIndex() const {
  return xParser::RuleFunc_stmt;
}

void xParser::Func_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_stmt(this);
}

void xParser::Func_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_stmt(this);
}

xParser::Func_stmtContext* xParser::func_stmt() {
  Func_stmtContext *_localctx = _tracker.createInstance<Func_stmtContext>(_ctx, getState());
  enterRule(_localctx, 62, xParser::RuleFunc_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    match(xParser::FUNC);
    setState(467);
    match(xParser::ID);
    setState(468);
    param();
    setState(469);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

xParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::Id_paramContext* xParser::ParamContext::id_param() {
  return getRuleContext<xParser::Id_paramContext>(0);
}


size_t xParser::ParamContext::getRuleIndex() const {
  return xParser::RuleParam;
}

void xParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void xParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

xParser::ParamContext* xParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 64, xParser::RuleParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(xParser::T__0);
    setState(473);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == xParser::ID) {
      setState(472);
      id_param();
    }
    setState(475);
    match(xParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_paramContext ------------------------------------------------------------------

xParser::Id_paramContext::Id_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> xParser::Id_paramContext::ID() {
  return getTokens(xParser::ID);
}

tree::TerminalNode* xParser::Id_paramContext::ID(size_t i) {
  return getToken(xParser::ID, i);
}

std::vector<tree::TerminalNode *> xParser::Id_paramContext::DOT() {
  return getTokens(xParser::DOT);
}

tree::TerminalNode* xParser::Id_paramContext::DOT(size_t i) {
  return getToken(xParser::DOT, i);
}


size_t xParser::Id_paramContext::getRuleIndex() const {
  return xParser::RuleId_param;
}

void xParser::Id_paramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_param(this);
}

void xParser::Id_paramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_param(this);
}

xParser::Id_paramContext* xParser::id_param() {
  Id_paramContext *_localctx = _tracker.createInstance<Id_paramContext>(_ctx, getState());
  enterRule(_localctx, 66, xParser::RuleId_param);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(xParser::ID);
    setState(482);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::DOT) {
      setState(478);
      match(xParser::DOT);
      setState(479);
      match(xParser::ID);
      setState(484);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

xParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* xParser::Func_callContext::ID() {
  return getToken(xParser::ID, 0);
}

xParser::Param_exprContext* xParser::Func_callContext::param_expr() {
  return getRuleContext<xParser::Param_exprContext>(0);
}


size_t xParser::Func_callContext::getRuleIndex() const {
  return xParser::RuleFunc_call;
}

void xParser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call(this);
}

void xParser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call(this);
}

xParser::Func_callContext* xParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 68, xParser::RuleFunc_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(xParser::ID);
    setState(486);
    param_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_exprContext ------------------------------------------------------------------

xParser::Param_exprContext::Param_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

xParser::Cond_paramContext* xParser::Param_exprContext::cond_param() {
  return getRuleContext<xParser::Cond_paramContext>(0);
}


size_t xParser::Param_exprContext::getRuleIndex() const {
  return xParser::RuleParam_expr;
}

void xParser::Param_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_expr(this);
}

void xParser::Param_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_expr(this);
}

xParser::Param_exprContext* xParser::param_expr() {
  Param_exprContext *_localctx = _tracker.createInstance<Param_exprContext>(_ctx, getState());
  enterRule(_localctx, 70, xParser::RuleParam_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    match(xParser::T__0);
    setState(489);
    cond_param();
    setState(490);
    match(xParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cond_paramContext ------------------------------------------------------------------

xParser::Cond_paramContext::Cond_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::Condition_exprContext *> xParser::Cond_paramContext::condition_expr() {
  return getRuleContexts<xParser::Condition_exprContext>();
}

xParser::Condition_exprContext* xParser::Cond_paramContext::condition_expr(size_t i) {
  return getRuleContext<xParser::Condition_exprContext>(i);
}

std::vector<tree::TerminalNode *> xParser::Cond_paramContext::DOT() {
  return getTokens(xParser::DOT);
}

tree::TerminalNode* xParser::Cond_paramContext::DOT(size_t i) {
  return getToken(xParser::DOT, i);
}


size_t xParser::Cond_paramContext::getRuleIndex() const {
  return xParser::RuleCond_param;
}

void xParser::Cond_paramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond_param(this);
}

void xParser::Cond_paramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond_param(this);
}

xParser::Cond_paramContext* xParser::cond_param() {
  Cond_paramContext *_localctx = _tracker.createInstance<Cond_paramContext>(_ctx, getState());
  enterRule(_localctx, 72, xParser::RuleCond_param);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    condition_expr();
    setState(497);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == xParser::DOT) {
      setState(493);
      match(xParser::DOT);
      setState(494);
      condition_expr();
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

xParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<xParser::StmtContext *> xParser::ProgContext::stmt() {
  return getRuleContexts<xParser::StmtContext>();
}

xParser::StmtContext* xParser::ProgContext::stmt(size_t i) {
  return getRuleContext<xParser::StmtContext>(i);
}


size_t xParser::ProgContext::getRuleIndex() const {
  return xParser::RuleProg;
}

void xParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void xParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<xListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

xParser::ProgContext* xParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 74, xParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(500);
      stmt();

                  pANTLR3_STRING s = stmt(tree)->toStringTree(stmt(tree));
                  assert(s->chars);
                  printf("tree \%s\n", s->chars);
              
      setState(505); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << xParser::T__0)
      | (1ULL << xParser::T__2)
      | (1ULL << xParser::T__5)
      | (1ULL << xParser::DEF)
      | (1ULL << xParser::PRINT)
      | (1ULL << xParser::BIT_NOR)
      | (1ULL << xParser::DOUBLE_PLUS)
      | (1ULL << xParser::DOUBLE_MINUS)
      | (1ULL << xParser::IF)
      | (1ULL << xParser::BREAK)
      | (1ULL << xParser::CONTINUE)
      | (1ULL << xParser::FOR)
      | (1ULL << xParser::WHILE)
      | (1ULL << xParser::DO)
      | (1ULL << xParser::FUNC)
      | (1ULL << xParser::RETURN)
      | (1ULL << xParser::INT)
      | (1ULL << xParser::ID)
      | (1ULL << xParser::FLOAT)
      | (1ULL << xParser::STRING))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> xParser::_decisionToDFA;
atn::PredictionContextCache xParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN xParser::_atn;
std::vector<uint16_t> xParser::_serializedATN;

std::vector<std::string> xParser::_ruleNames = {
  "defid_expr", "defid", "expr", "bit_orExpr", "bit_xorExpr", "bit_andExpr", 
  "shiftExpr", "multExpr", "atom", "list_atom", "listExpr", "list_call_ind", 
  "stmt", "if_expr", "for_expr", "while_expr", "init_expr", "for_do_expr", 
  "switch_expr", "case_expr", "default_expr", "condition_expr", "andExpr", 
  "cmp_atom", "cond_atom", "block", "block_expr", "print_atom", "expr_stmt", 
  "list_def_ind", "control_stmt", "func_stmt", "param", "id_param", "func_call", 
  "param_expr", "cond_param", "prog"
};

std::vector<std::string> xParser::_literalNames = {
  "", "'('", "')'", "'['", "']'", "';'", "'{'", "'}'", "':'", "'def'", "'print'", 
  "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", "'~'", 
  "'<<'", "'>>'", "'++'", "'++L'", "'R++'", "'--'", "'--L'", "'R--'", "'&&'", 
  "'||'", "", "'!='", "'<'", "", "'>'", "'=='", "','", "'{}'", "'if'", "'else'", 
  "'break'", "'continue'", "'switch'", "'case'", "'default'", "'for'", "'while'", 
  "'do'", "'dowhile'", "'list'", "'list_call'", "'list_def'", "'func'", 
  "'func_call'", "'return'", "'param'"
};

std::vector<std::string> xParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "DEF", "PRINT", "ASSIGN", "PLUS", 
  "MINUS", "TIMES", "DIV", "MOD", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOR", 
  "L_SHIFT", "R_SHIFT", "DOUBLE_PLUS", "L_DOUBLE_PLUS", "R_DOUBLE_PLUS", 
  "DOUBLE_MINUS", "L_DOUBLE_MINUS", "R_DOUBLE_MINUS", "AND", "OR", "GE", 
  "NE", "LITTLE", "LE", "GT", "EQ", "DOT", "BLOCK", "IF", "ELSE", "BREAK", 
  "CONTINUE", "SWITCH", "CASE", "DEFAULT", "FOR", "WHILE", "DO", "DOWHILE", 
  "LIST", "LIST_CALL", "LIST_DEF", "FUNC", "FUNC_CALL", "RETURN", "PARAM", 
  "INT", "ID", "FLOAT", "COMMENT", "WS", "STRING"
};

dfa::Vocabulary xParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> xParser::_tokenNames;

xParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x40, 0x1fe, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x7, 0x2, 0x53, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x56, 0xb, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x5b, 0xa, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x60, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
       0x63, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x68, 0xa, 
       0x5, 0xc, 0x5, 0xe, 0x5, 0x6b, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x7, 0x6, 0x70, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x73, 0xb, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x78, 0xa, 0x7, 0xc, 0x7, 
       0xe, 0x7, 0x7b, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
       0x80, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x83, 0xb, 0x8, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x7, 0x9, 0x88, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x8b, 
       0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xaa, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xae, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xb5, 0xa, 0xc, 0xc, 0xc, 
       0xe, 0xc, 0xb8, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x6, 0xd, 0xbe, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xbf, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x5, 0xe, 0xc5, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xce, 0xa, 
       0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x5, 0x11, 0xe8, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x5, 0x12, 0xee, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x5, 0x13, 0x123, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x12b, 0xa, 0x14, 0xd, 
       0x14, 0xe, 0x14, 0x12c, 0x3, 0x14, 0x5, 0x14, 0x130, 0xa, 0x14, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 
       0x15, 0x138, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x13b, 0xb, 0x15, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x140, 0xa, 0x16, 0xc, 0x16, 
       0xe, 0x16, 0x143, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 
       0x17, 0x148, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x14b, 0xb, 0x17, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x150, 0xa, 0x18, 0xc, 0x18, 
       0xe, 0x18, 0x153, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 
       0x19, 0x158, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x160, 0xa, 0x1c, 0xc, 0x1c, 0xe, 
       0x1c, 0x163, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x1b9, 0xa, 0x1e, 0xc, 0x1e, 0xe, 
       0x1e, 0x1bc, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x1c0, 0xa, 
       0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 
       0x20, 0x1d3, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1dc, 0xa, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x1e3, 
       0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1e6, 0xb, 0x23, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x1f2, 0xa, 0x26, 0xc, 0x26, 
       0xe, 0x26, 0x1f5, 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x6, 
       0x27, 0x1fa, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x1fb, 0x3, 0x27, 0x2, 
       0x2, 0x28, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
       0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
       0x44, 0x46, 0x48, 0x4a, 0x4c, 0x2, 0x7, 0x3, 0x2, 0x17, 0x18, 0x3, 
       0x2, 0xe, 0xf, 0x3, 0x2, 0x10, 0x12, 0x3, 0x2, 0x21, 0x26, 0x3, 0x2, 
       0x3b, 0x3c, 0x2, 0x224, 0x2, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x64, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x6c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x74, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x84, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x14, 0xab, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0xc4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x20, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x22, 0xed, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x122, 0x3, 0x2, 0x2, 0x2, 0x26, 0x124, 0x3, 
       0x2, 0x2, 0x2, 0x28, 0x133, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x13c, 0x3, 
       0x2, 0x2, 0x2, 0x2c, 0x144, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x14c, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x154, 0x3, 0x2, 0x2, 0x2, 0x32, 0x159, 0x3, 
       0x2, 0x2, 0x2, 0x34, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x15d, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x166, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1bf, 0x3, 
       0x2, 0x2, 0x2, 0x3c, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1d2, 0x3, 
       0x2, 0x2, 0x2, 0x40, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1d9, 0x3, 
       0x2, 0x2, 0x2, 0x44, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1e7, 0x3, 
       0x2, 0x2, 0x2, 0x48, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1ee, 0x3, 
       0x2, 0x2, 0x2, 0x4c, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 
       0xb, 0x2, 0x2, 0x4f, 0x54, 0x5, 0x4, 0x3, 0x2, 0x50, 0x51, 0x7, 0x27, 
       0x2, 0x2, 0x51, 0x53, 0x5, 0x4, 0x3, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 
       0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 
       0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x3, 0x3, 0x2, 0x2, 0x2, 0x56, 
       0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x7, 0x3c, 0x2, 0x2, 0x58, 
       0x59, 0x7, 0xd, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x2c, 0x17, 0x2, 0x5a, 
       0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x5c, 0x61, 0x5, 0x8, 0x5, 0x2, 0x5d, 0x5e, 0x7, 
       0x14, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x8, 0x5, 0x2, 0x5f, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 
       0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x69, 0x5, 0xa, 0x6, 0x2, 
       0x65, 0x66, 0x7, 0x15, 0x2, 0x2, 0x66, 0x68, 0x5, 0xa, 0x6, 0x2, 
       0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x71, 0x5, 
       0xc, 0x7, 0x2, 0x6d, 0x6e, 0x7, 0x13, 0x2, 0x2, 0x6e, 0x70, 0x5, 
       0xc, 0x7, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 
       0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 
       0x2, 0x72, 0xb, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 
       0x74, 0x79, 0x5, 0xe, 0x8, 0x2, 0x75, 0x76, 0x9, 0x2, 0x2, 0x2, 0x76, 
       0x78, 0x5, 0xe, 0x8, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 
       0x2, 0x2, 0x2, 0x7a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x7c, 0x81, 0x5, 0x10, 0x9, 0x2, 0x7d, 0x7e, 0x9, 0x3, 
       0x2, 0x2, 0x7e, 0x80, 0x5, 0x10, 0x9, 0x2, 0x7f, 0x7d, 0x3, 0x2, 
       0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 
       0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0xf, 0x3, 0x2, 0x2, 0x2, 
       0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x89, 0x5, 0x12, 0xa, 0x2, 
       0x85, 0x86, 0x9, 0x4, 0x2, 0x2, 0x86, 0x88, 0x5, 0x12, 0xa, 0x2, 
       0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x89, 
       0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 0xaa, 0x7, 
       0x3b, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x16, 0x2, 0x2, 0x8e, 0xaa, 0x7, 
       0x3b, 0x2, 0x2, 0x8f, 0xaa, 0x7, 0x3c, 0x2, 0x2, 0x90, 0x91, 0x7, 
       0x16, 0x2, 0x2, 0x91, 0xaa, 0x7, 0x3c, 0x2, 0x2, 0x92, 0x93, 0x7, 
       0x19, 0x2, 0x2, 0x93, 0xaa, 0x7, 0x3c, 0x2, 0x2, 0x94, 0x95, 0x7, 
       0x3c, 0x2, 0x2, 0x95, 0xaa, 0x7, 0x19, 0x2, 0x2, 0x96, 0x97, 0x7, 
       0x1c, 0x2, 0x2, 0x97, 0xaa, 0x7, 0x3c, 0x2, 0x2, 0x98, 0x99, 0x7, 
       0x3c, 0x2, 0x2, 0x99, 0xaa, 0x7, 0x1c, 0x2, 0x2, 0x9a, 0xaa, 0x7, 
       0x40, 0x2, 0x2, 0x9b, 0xaa, 0x7, 0x3d, 0x2, 0x2, 0x9c, 0xaa, 0x5, 
       0x46, 0x24, 0x2, 0x9d, 0xaa, 0x5, 0x14, 0xb, 0x2, 0x9e, 0x9f, 0x7, 
       0x3c, 0x2, 0x2, 0x9f, 0xaa, 0x5, 0x18, 0xd, 0x2, 0xa0, 0xa1, 0x7, 
       0x3, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x6, 0x4, 0x2, 0xa2, 0xa3, 0x7, 0x4, 
       0x2, 0x2, 0xa3, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x16, 
       0x2, 0x2, 0xa5, 0xa6, 0x7, 0x3, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x6, 0x4, 
       0x2, 0xa7, 0xa8, 0x7, 0x4, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 
       0xa9, 0x8c, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xa9, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x90, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x92, 
       0x3, 0x2, 0x2, 0x2, 0xa9, 0x94, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x96, 0x3, 
       0x2, 0x2, 0x2, 0xa9, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9a, 0x3, 0x2, 
       0x2, 0x2, 0xa9, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9c, 0x3, 0x2, 0x2, 
       0x2, 0xa9, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9e, 0x3, 0x2, 0x2, 0x2, 
       0xa9, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xaa, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 0x7, 0x5, 0x2, 0x2, 0xac, 0xae, 
       0x5, 0x16, 0xc, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
       0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 
       0x6, 0x2, 0x2, 0xb0, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb6, 0x5, 0x6, 
       0x4, 0x2, 0xb2, 0xb3, 0x7, 0x27, 0x2, 0x2, 0xb3, 0xb5, 0x5, 0x6, 
       0x4, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 
       0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 
       0xb7, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 
       0xba, 0x7, 0x5, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x6, 0x4, 0x2, 0xbb, 0xbc, 
       0x7, 0x6, 0x2, 0x2, 0xbc, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb9, 0x3, 
       0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 
       0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0xc1, 0xc5, 0x5, 0x3a, 0x1e, 0x2, 0xc2, 0xc5, 0x5, 0x3e, 0x20, 
       0x2, 0xc3, 0xc5, 0x5, 0x40, 0x21, 0x2, 0xc4, 0xc1, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 
       0xc5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x29, 0x2, 0x2, 
       0xc7, 0xc8, 0x7, 0x3, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x2c, 0x17, 0x2, 
       0xc9, 0xca, 0x7, 0x4, 0x2, 0x2, 0xca, 0xcd, 0x5, 0x1a, 0xe, 0x2, 
       0xcb, 0xcc, 0x7, 0x2a, 0x2, 0x2, 0xcc, 0xce, 0x5, 0x1a, 0xe, 0x2, 
       0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x30, 0x2, 0x2, 0xd0, 
       0xd1, 0x7, 0x3, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x22, 0x12, 0x2, 0xd2, 
       0xd3, 0x7, 0x7, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x2c, 0x17, 0x2, 0xd4, 
       0xd5, 0x7, 0x7, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x24, 0x13, 0x2, 0xd6, 
       0xd7, 0x7, 0x4, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x1a, 0xe, 0x2, 0xd8, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x31, 0x2, 0x2, 0xda, 
       0xdb, 0x7, 0x3, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x2c, 0x17, 0x2, 0xdc, 
       0xdd, 0x7, 0x4, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x1a, 0xe, 0x2, 0xde, 
       0xe8, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x32, 0x2, 0x2, 0xe0, 
       0xe1, 0x5, 0x34, 0x1b, 0x2, 0xe1, 0xe2, 0x7, 0x31, 0x2, 0x2, 0xe2, 
       0xe3, 0x7, 0x3, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x2c, 0x17, 0x2, 0xe4, 
       0xe5, 0x7, 0x4, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x7, 0x2, 0x2, 0xe6, 0xe8, 
       0x3, 0x2, 0x2, 0x2, 0xe7, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdf, 0x3, 
       0x2, 0x2, 0x2, 0xe8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xee, 0x5, 0x2, 
       0x2, 0x2, 0xea, 0xeb, 0x7, 0x3c, 0x2, 0x2, 0xeb, 0xec, 0x7, 0xd, 
       0x2, 0x2, 0xec, 0xee, 0x5, 0x6, 0x4, 0x2, 0xed, 0xe9, 0x3, 0x2, 0x2, 
       0x2, 0xed, 0xea, 0x3, 0x2, 0x2, 0x2, 0xee, 0x23, 0x3, 0x2, 0x2, 0x2, 
       0xef, 0xf0, 0x7, 0x3c, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0xd, 0x2, 0x2, 
       0xf1, 0x123, 0x5, 0x6, 0x4, 0x2, 0xf2, 0xf3, 0x7, 0x3c, 0x2, 0x2, 
       0xf3, 0xf4, 0x7, 0xe, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0xd, 0x2, 0x2, 0xf5, 
       0x123, 0x5, 0x6, 0x4, 0x2, 0xf6, 0xf7, 0x7, 0x3c, 0x2, 0x2, 0xf7, 
       0xf8, 0x7, 0xf, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0xd, 0x2, 0x2, 0xf9, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0xfa, 0xfb, 0x7, 0x3c, 0x2, 0x2, 0xfb, 0xfc, 
       0x7, 0x10, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0xd, 0x2, 0x2, 0xfd, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0xfe, 0xff, 0x7, 0x3c, 0x2, 0x2, 0xff, 0x100, 
       0x7, 0x11, 0x2, 0x2, 0x100, 0x101, 0x7, 0xd, 0x2, 0x2, 0x101, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x102, 0x103, 0x7, 0x3c, 0x2, 0x2, 0x103, 0x104, 
       0x7, 0x12, 0x2, 0x2, 0x104, 0x105, 0x7, 0xd, 0x2, 0x2, 0x105, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x106, 0x107, 0x7, 0x3c, 0x2, 0x2, 0x107, 0x108, 
       0x7, 0x13, 0x2, 0x2, 0x108, 0x109, 0x7, 0xd, 0x2, 0x2, 0x109, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x10a, 0x10b, 0x7, 0x3c, 0x2, 0x2, 0x10b, 0x10c, 
       0x7, 0x14, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0xd, 0x2, 0x2, 0x10d, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x10e, 0x10f, 0x7, 0x3c, 0x2, 0x2, 0x10f, 0x110, 
       0x7, 0x15, 0x2, 0x2, 0x110, 0x111, 0x7, 0xd, 0x2, 0x2, 0x111, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x112, 0x113, 0x7, 0x3c, 0x2, 0x2, 0x113, 0x114, 
       0x7, 0x17, 0x2, 0x2, 0x114, 0x115, 0x7, 0xd, 0x2, 0x2, 0x115, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x116, 0x117, 0x7, 0x3c, 0x2, 0x2, 0x117, 0x118, 
       0x7, 0x18, 0x2, 0x2, 0x118, 0x119, 0x7, 0xd, 0x2, 0x2, 0x119, 0x123, 
       0x5, 0x6, 0x4, 0x2, 0x11a, 0x11b, 0x7, 0x19, 0x2, 0x2, 0x11b, 0x123, 
       0x7, 0x3c, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x3c, 0x2, 0x2, 0x11d, 0x123, 
       0x7, 0x19, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x1c, 0x2, 0x2, 0x11f, 0x123, 
       0x7, 0x3c, 0x2, 0x2, 0x120, 0x121, 0x7, 0x3c, 0x2, 0x2, 0x121, 0x123, 
       0x7, 0x1c, 0x2, 0x2, 0x122, 0xef, 0x3, 0x2, 0x2, 0x2, 0x122, 0xf2, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x122, 0xfa, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x122, 0x102, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x106, 0x3, 0x2, 0x2, 0x2, 0x122, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x122, 0x112, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x116, 0x3, 0x2, 0x2, 0x2, 0x122, 0x11a, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x122, 0x11e, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x123, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x2d, 0x2, 0x2, 0x125, 0x126, 
       0x7, 0x3, 0x2, 0x2, 0x126, 0x127, 0x5, 0x2c, 0x17, 0x2, 0x127, 0x128, 
       0x7, 0x4, 0x2, 0x2, 0x128, 0x12a, 0x7, 0x8, 0x2, 0x2, 0x129, 0x12b, 
       0x5, 0x28, 0x15, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
       0x3, 0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 
       0x5, 0x2a, 0x16, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 
       0x7, 0x9, 0x2, 0x2, 0x132, 0x27, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 
       0x7, 0x2e, 0x2, 0x2, 0x134, 0x135, 0x5, 0x6, 0x4, 0x2, 0x135, 0x139, 
       0x7, 0xa, 0x2, 0x2, 0x136, 0x138, 0x5, 0x1a, 0xe, 0x2, 0x137, 0x136, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 
       0x7, 0x2f, 0x2, 0x2, 0x13d, 0x141, 0x7, 0xa, 0x2, 0x2, 0x13e, 0x140, 
       0x5, 0x1a, 0xe, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x144, 0x149, 0x5, 0x2e, 0x18, 0x2, 0x145, 0x146, 
       0x7, 0x20, 0x2, 0x2, 0x146, 0x148, 0x5, 0x2e, 0x18, 0x2, 0x147, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x151, 
       0x5, 0x30, 0x19, 0x2, 0x14d, 0x14e, 0x7, 0x1f, 0x2, 0x2, 0x14e, 0x150, 
       0x5, 0x30, 0x19, 0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x157, 0x5, 0x32, 0x1a, 0x2, 0x155, 0x156, 
       0x9, 0x5, 0x2, 0x2, 0x156, 0x158, 0x5, 0x32, 0x1a, 0x2, 0x157, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x5, 0x6, 0x4, 0x2, 0x15a, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x36, 0x1c, 0x2, 0x15c, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x161, 0x7, 0x8, 0x2, 0x2, 0x15e, 0x160, 
       0x5, 0x1a, 0xe, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 
       0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x7, 0x9, 0x2, 0x2, 0x165, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x5, 0x2c, 0x17, 0x2, 0x167, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x5, 0x6, 0x4, 0x2, 0x169, 0x16a, 
       0x7, 0x7, 0x2, 0x2, 0x16a, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 
       0x7, 0x3c, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0xd, 0x2, 0x2, 0x16d, 0x16e, 
       0x5, 0x6, 0x4, 0x2, 0x16e, 0x16f, 0x7, 0x7, 0x2, 0x2, 0x16f, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x7, 0x3c, 0x2, 0x2, 0x171, 0x172, 
       0x7, 0x5, 0x2, 0x2, 0x172, 0x173, 0x5, 0x3c, 0x1f, 0x2, 0x173, 0x174, 
       0x7, 0x6, 0x2, 0x2, 0x174, 0x175, 0x7, 0xd, 0x2, 0x2, 0x175, 0x176, 
       0x5, 0x6, 0x4, 0x2, 0x176, 0x177, 0x7, 0x7, 0x2, 0x2, 0x177, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 0x3c, 0x2, 0x2, 0x179, 0x17a, 
       0x7, 0xe, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0xd, 0x2, 0x2, 0x17b, 0x17c, 
       0x5, 0x6, 0x4, 0x2, 0x17c, 0x17d, 0x7, 0x7, 0x2, 0x2, 0x17d, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x3c, 0x2, 0x2, 0x17f, 0x180, 
       0x7, 0xf, 0x2, 0x2, 0x180, 0x181, 0x7, 0xd, 0x2, 0x2, 0x181, 0x182, 
       0x5, 0x6, 0x4, 0x2, 0x182, 0x183, 0x7, 0x7, 0x2, 0x2, 0x183, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 0x3c, 0x2, 0x2, 0x185, 0x186, 
       0x7, 0x10, 0x2, 0x2, 0x186, 0x187, 0x7, 0xd, 0x2, 0x2, 0x187, 0x188, 
       0x5, 0x6, 0x4, 0x2, 0x188, 0x189, 0x7, 0x7, 0x2, 0x2, 0x189, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x3c, 0x2, 0x2, 0x18b, 0x18c, 
       0x7, 0x11, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0xd, 0x2, 0x2, 0x18d, 0x18e, 
       0x5, 0x6, 0x4, 0x2, 0x18e, 0x18f, 0x7, 0x7, 0x2, 0x2, 0x18f, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x7, 0x3c, 0x2, 0x2, 0x191, 0x192, 
       0x7, 0x12, 0x2, 0x2, 0x192, 0x193, 0x7, 0xd, 0x2, 0x2, 0x193, 0x194, 
       0x5, 0x6, 0x4, 0x2, 0x194, 0x195, 0x7, 0x7, 0x2, 0x2, 0x195, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x3c, 0x2, 0x2, 0x197, 0x198, 
       0x7, 0x13, 0x2, 0x2, 0x198, 0x199, 0x7, 0xd, 0x2, 0x2, 0x199, 0x19a, 
       0x5, 0x6, 0x4, 0x2, 0x19a, 0x19b, 0x7, 0x7, 0x2, 0x2, 0x19b, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x3c, 0x2, 0x2, 0x19d, 0x19e, 
       0x7, 0x14, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0xd, 0x2, 0x2, 0x19f, 0x1a0, 
       0x5, 0x6, 0x4, 0x2, 0x1a0, 0x1a1, 0x7, 0x7, 0x2, 0x2, 0x1a1, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x7, 0x3c, 0x2, 0x2, 0x1a3, 0x1a4, 
       0x7, 0x15, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0xd, 0x2, 0x2, 0x1a5, 0x1a6, 
       0x5, 0x6, 0x4, 0x2, 0x1a6, 0x1a7, 0x7, 0x7, 0x2, 0x2, 0x1a7, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x3c, 0x2, 0x2, 0x1a9, 0x1aa, 
       0x7, 0x17, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0xd, 0x2, 0x2, 0x1ab, 0x1ac, 
       0x5, 0x6, 0x4, 0x2, 0x1ac, 0x1ad, 0x7, 0x7, 0x2, 0x2, 0x1ad, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x3c, 0x2, 0x2, 0x1af, 0x1b0, 
       0x7, 0x18, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0xd, 0x2, 0x2, 0x1b1, 0x1b2, 
       0x5, 0x6, 0x4, 0x2, 0x1b2, 0x1b3, 0x7, 0x7, 0x2, 0x2, 0x1b3, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0xc, 0x2, 0x2, 0x1b5, 0x1ba, 
       0x5, 0x38, 0x1d, 0x2, 0x1b6, 0x1b7, 0x7, 0x27, 0x2, 0x2, 0x1b7, 0x1b9, 
       0x5, 0x38, 0x1d, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bc, 
       0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 
       0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x7, 0x2, 0x2, 0x1be, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x168, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x16b, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x170, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x178, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x190, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x196, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x19c, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a8, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b4, 
       0x3, 0x2, 0x2, 0x2, 0x1c0, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 
       0x9, 0x6, 0x2, 0x2, 0x1c2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1d3, 
       0x5, 0x1e, 0x10, 0x2, 0x1c4, 0x1d3, 0x5, 0x1c, 0xf, 0x2, 0x1c5, 0x1d3, 
       0x5, 0x20, 0x11, 0x2, 0x1c6, 0x1c7, 0x5, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 
       0x7, 0x7, 0x2, 0x2, 0x1c8, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1d3, 
       0x5, 0x34, 0x1b, 0x2, 0x1ca, 0x1cb, 0x7, 0x2b, 0x2, 0x2, 0x1cb, 0x1d3, 
       0x7, 0x7, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x2c, 0x2, 0x2, 0x1cd, 0x1d3, 
       0x7, 0x7, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x39, 0x2, 0x2, 0x1cf, 0x1d0, 
       0x5, 0x2c, 0x17, 0x2, 0x1d0, 0x1d1, 0x7, 0x7, 0x2, 0x2, 0x1d1, 0x1d3, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1c4, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1c6, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1ca, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1ce, 
       0x3, 0x2, 0x2, 0x2, 0x1d3, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 
       0x7, 0x37, 0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0x3c, 0x2, 0x2, 0x1d6, 0x1d7, 
       0x5, 0x42, 0x22, 0x2, 0x1d7, 0x1d8, 0x5, 0x34, 0x1b, 0x2, 0x1d8, 
       0x41, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1db, 0x7, 0x3, 0x2, 0x2, 0x1da, 
       0x1dc, 0x5, 0x44, 0x23, 0x2, 0x1db, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1db, 
       0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
       0x1de, 0x7, 0x4, 0x2, 0x2, 0x1de, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1df, 
       0x1e4, 0x7, 0x3c, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x27, 0x2, 0x2, 0x1e1, 
       0x1e3, 0x7, 0x3c, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
       0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
       0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
       0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x3c, 0x2, 0x2, 0x1e8, 
       0x1e9, 0x5, 0x48, 0x25, 0x2, 0x1e9, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
       0x1eb, 0x7, 0x3, 0x2, 0x2, 0x1eb, 0x1ec, 0x5, 0x4a, 0x26, 0x2, 0x1ec, 
       0x1ed, 0x7, 0x4, 0x2, 0x2, 0x1ed, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1ee, 
       0x1f3, 0x5, 0x2c, 0x17, 0x2, 0x1ef, 0x1f0, 0x7, 0x27, 0x2, 0x2, 0x1f0, 
       0x1f2, 0x5, 0x2c, 0x17, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
       0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
       0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x5, 0x1a, 0xe, 0x2, 0x1f7, 
       0x1f8, 0x8, 0x27, 0x1, 0x2, 0x1f8, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
       0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
       0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x54, 0x5a, 0x61, 0x69, 0x71, 0x79, 
       0x81, 0x89, 0xa9, 0xad, 0xb6, 0xbf, 0xc4, 0xcd, 0xe7, 0xed, 0x122, 
       0x12c, 0x12f, 0x139, 0x141, 0x149, 0x151, 0x157, 0x161, 0x1ba, 0x1bf, 
       0x1d2, 0x1db, 0x1e4, 0x1f3, 0x1fb, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

xParser::Initializer xParser::_init;
