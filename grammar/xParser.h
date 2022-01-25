
    #include <assert.h>


// Generated from x.g by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  xParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, DEF = 9, PRINT = 10, ASSIGN = 11, PLUS = 12, MINUS = 13, TIMES = 14, 
    DIV = 15, MOD = 16, BIT_AND = 17, BIT_OR = 18, BIT_XOR = 19, BIT_NOR = 20, 
    L_SHIFT = 21, R_SHIFT = 22, DOUBLE_PLUS = 23, L_DOUBLE_PLUS = 24, R_DOUBLE_PLUS = 25, 
    DOUBLE_MINUS = 26, L_DOUBLE_MINUS = 27, R_DOUBLE_MINUS = 28, AND = 29, 
    OR = 30, GE = 31, NE = 32, LITTLE = 33, LE = 34, GT = 35, EQ = 36, DOT = 37, 
    BLOCK = 38, IF = 39, ELSE = 40, BREAK = 41, CONTINUE = 42, SWITCH = 43, 
    CASE = 44, DEFAULT = 45, FOR = 46, WHILE = 47, DO = 48, DOWHILE = 49, 
    LIST = 50, LIST_CALL = 51, LIST_DEF = 52, FUNC = 53, FUNC_CALL = 54, 
    RETURN = 55, PARAM = 56, INT = 57, ID = 58, FLOAT = 59, COMMENT = 60, 
    WS = 61, STRING = 62
  };

  enum {
    RuleDefid_expr = 0, RuleDefid = 1, RuleExpr = 2, RuleBit_orExpr = 3, 
    RuleBit_xorExpr = 4, RuleBit_andExpr = 5, RuleShiftExpr = 6, RuleMultExpr = 7, 
    RuleAtom = 8, RuleList_atom = 9, RuleListExpr = 10, RuleList_call_ind = 11, 
    RuleStmt = 12, RuleIf_expr = 13, RuleFor_expr = 14, RuleWhile_expr = 15, 
    RuleInit_expr = 16, RuleFor_do_expr = 17, RuleSwitch_expr = 18, RuleCase_expr = 19, 
    RuleDefault_expr = 20, RuleCondition_expr = 21, RuleAndExpr = 22, RuleCmp_atom = 23, 
    RuleCond_atom = 24, RuleBlock = 25, RuleBlock_expr = 26, RulePrint_atom = 27, 
    RuleExpr_stmt = 28, RuleList_def_ind = 29, RuleControl_stmt = 30, RuleFunc_stmt = 31, 
    RuleParam = 32, RuleId_param = 33, RuleFunc_call = 34, RuleParam_expr = 35, 
    RuleCond_param = 36, RuleProg = 37
  };

  explicit xParser(antlr4::TokenStream *input);
  ~xParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Defid_exprContext;
  class DefidContext;
  class ExprContext;
  class Bit_orExprContext;
  class Bit_xorExprContext;
  class Bit_andExprContext;
  class ShiftExprContext;
  class MultExprContext;
  class AtomContext;
  class List_atomContext;
  class ListExprContext;
  class List_call_indContext;
  class StmtContext;
  class If_exprContext;
  class For_exprContext;
  class While_exprContext;
  class Init_exprContext;
  class For_do_exprContext;
  class Switch_exprContext;
  class Case_exprContext;
  class Default_exprContext;
  class Condition_exprContext;
  class AndExprContext;
  class Cmp_atomContext;
  class Cond_atomContext;
  class BlockContext;
  class Block_exprContext;
  class Print_atomContext;
  class Expr_stmtContext;
  class List_def_indContext;
  class Control_stmtContext;
  class Func_stmtContext;
  class ParamContext;
  class Id_paramContext;
  class Func_callContext;
  class Param_exprContext;
  class Cond_paramContext;
  class ProgContext; 

  class  Defid_exprContext : public antlr4::ParserRuleContext {
  public:
    Defid_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    std::vector<DefidContext *> defid();
    DefidContext* defid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Defid_exprContext* defid_expr();

  class  DefidContext : public antlr4::ParserRuleContext {
  public:
    DefidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    Condition_exprContext *condition_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefidContext* defid();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_orExprContext *> bit_orExpr();
    Bit_orExprContext* bit_orExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BIT_OR();
    antlr4::tree::TerminalNode* BIT_OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  Bit_orExprContext : public antlr4::ParserRuleContext {
  public:
    Bit_orExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_xorExprContext *> bit_xorExpr();
    Bit_xorExprContext* bit_xorExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BIT_XOR();
    antlr4::tree::TerminalNode* BIT_XOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_orExprContext* bit_orExpr();

  class  Bit_xorExprContext : public antlr4::ParserRuleContext {
  public:
    Bit_xorExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_andExprContext *> bit_andExpr();
    Bit_andExprContext* bit_andExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BIT_AND();
    antlr4::tree::TerminalNode* BIT_AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_xorExprContext* bit_xorExpr();

  class  Bit_andExprContext : public antlr4::ParserRuleContext {
  public:
    Bit_andExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExprContext *> shiftExpr();
    ShiftExprContext* shiftExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> L_SHIFT();
    antlr4::tree::TerminalNode* L_SHIFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> R_SHIFT();
    antlr4::tree::TerminalNode* R_SHIFT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bit_andExprContext* bit_andExpr();

  class  ShiftExprContext : public antlr4::ParserRuleContext {
  public:
    ShiftExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultExprContext *> multExpr();
    MultExprContext* multExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftExprContext* shiftExpr();

  class  MultExprContext : public antlr4::ParserRuleContext {
  public:
    MultExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AtomContext *> atom();
    AtomContext* atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TIMES();
    antlr4::tree::TerminalNode* TIMES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultExprContext* multExpr();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BIT_NOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DOUBLE_PLUS();
    antlr4::tree::TerminalNode *DOUBLE_MINUS();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *FLOAT();
    Func_callContext *func_call();
    List_atomContext *list_atom();
    List_call_indContext *list_call_ind();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomContext* atom();

  class  List_atomContext : public antlr4::ParserRuleContext {
  public:
    List_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ListExprContext *listExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_atomContext* list_atom();

  class  ListExprContext : public antlr4::ParserRuleContext {
  public:
    ListExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListExprContext* listExpr();

  class  List_call_indContext : public antlr4::ParserRuleContext {
  public:
    List_call_indContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_call_indContext* list_call_ind();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_stmtContext *expr_stmt();
    Control_stmtContext *control_stmt();
    Func_stmtContext *func_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtContext* stmt();

  class  If_exprContext : public antlr4::ParserRuleContext {
  public:
    If_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    Condition_exprContext *condition_expr();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_exprContext* if_expr();

  class  For_exprContext : public antlr4::ParserRuleContext {
  public:
    For_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Init_exprContext *init_expr();
    Condition_exprContext *condition_expr();
    For_do_exprContext *for_do_expr();
    StmtContext *stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_exprContext* for_expr();

  class  While_exprContext : public antlr4::ParserRuleContext {
  public:
    While_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Condition_exprContext *condition_expr();
    StmtContext *stmt();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  While_exprContext* while_expr();

  class  Init_exprContext : public antlr4::ParserRuleContext {
  public:
    Init_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defid_exprContext *defid_expr();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Init_exprContext* init_expr();

  class  For_do_exprContext : public antlr4::ParserRuleContext {
  public:
    For_do_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *TIMES();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *L_SHIFT();
    antlr4::tree::TerminalNode *R_SHIFT();
    antlr4::tree::TerminalNode *DOUBLE_PLUS();
    antlr4::tree::TerminalNode *DOUBLE_MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_do_exprContext* for_do_expr();

  class  Switch_exprContext : public antlr4::ParserRuleContext {
  public:
    Switch_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    Condition_exprContext *condition_expr();
    std::vector<Case_exprContext *> case_expr();
    Case_exprContext* case_expr(size_t i);
    Default_exprContext *default_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Switch_exprContext* switch_expr();

  class  Case_exprContext : public antlr4::ParserRuleContext {
  public:
    Case_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExprContext *expr();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Case_exprContext* case_expr();

  class  Default_exprContext : public antlr4::ParserRuleContext {
  public:
    Default_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Default_exprContext* default_expr();

  class  Condition_exprContext : public antlr4::ParserRuleContext {
  public:
    Condition_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExprContext *> andExpr();
    AndExprContext* andExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Condition_exprContext* condition_expr();

  class  AndExprContext : public antlr4::ParserRuleContext {
  public:
    AndExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cmp_atomContext *> cmp_atom();
    Cmp_atomContext* cmp_atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndExprContext* andExpr();

  class  Cmp_atomContext : public antlr4::ParserRuleContext {
  public:
    Cmp_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cond_atomContext *> cond_atom();
    Cond_atomContext* cond_atom(size_t i);
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LITTLE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *NE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cmp_atomContext* cmp_atom();

  class  Cond_atomContext : public antlr4::ParserRuleContext {
  public:
    Cond_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_atomContext* cond_atom();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_exprContext *block_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  Block_exprContext : public antlr4::ParserRuleContext {
  public:
    Block_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Block_exprContext* block_expr();

  class  Print_atomContext : public antlr4::ParserRuleContext {
  public:
    Print_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Condition_exprContext *condition_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Print_atomContext* print_atom();

  class  Expr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    List_def_indContext *list_def_ind();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *TIMES();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *L_SHIFT();
    antlr4::tree::TerminalNode *R_SHIFT();
    antlr4::tree::TerminalNode *PRINT();
    std::vector<Print_atomContext *> print_atom();
    Print_atomContext* print_atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expr_stmtContext* expr_stmt();

  class  List_def_indContext : public antlr4::ParserRuleContext {
  public:
    List_def_indContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  List_def_indContext* list_def_ind();

  class  Control_stmtContext : public antlr4::ParserRuleContext {
  public:
    Control_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_exprContext *for_expr();
    If_exprContext *if_expr();
    While_exprContext *while_expr();
    Defid_exprContext *defid_expr();
    BlockContext *block();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *RETURN();
    Condition_exprContext *condition_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Control_stmtContext* control_stmt();

  class  Func_stmtContext : public antlr4::ParserRuleContext {
  public:
    Func_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *ID();
    ParamContext *param();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_stmtContext* func_stmt();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_paramContext *id_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamContext* param();

  class  Id_paramContext : public antlr4::ParserRuleContext {
  public:
    Id_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Id_paramContext* id_param();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Param_exprContext *param_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Func_callContext* func_call();

  class  Param_exprContext : public antlr4::ParserRuleContext {
  public:
    Param_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cond_paramContext *cond_param();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_exprContext* param_expr();

  class  Cond_paramContext : public antlr4::ParserRuleContext {
  public:
    Cond_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Condition_exprContext *> condition_expr();
    Condition_exprContext* condition_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_paramContext* cond_param();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();


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

