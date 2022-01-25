
    #include <assert.h>


// Generated from x.g by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "xParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by xParser.
 */
class  xListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDefid_expr(xParser::Defid_exprContext *ctx) = 0;
  virtual void exitDefid_expr(xParser::Defid_exprContext *ctx) = 0;

  virtual void enterDefid(xParser::DefidContext *ctx) = 0;
  virtual void exitDefid(xParser::DefidContext *ctx) = 0;

  virtual void enterExpr(xParser::ExprContext *ctx) = 0;
  virtual void exitExpr(xParser::ExprContext *ctx) = 0;

  virtual void enterBit_orExpr(xParser::Bit_orExprContext *ctx) = 0;
  virtual void exitBit_orExpr(xParser::Bit_orExprContext *ctx) = 0;

  virtual void enterBit_xorExpr(xParser::Bit_xorExprContext *ctx) = 0;
  virtual void exitBit_xorExpr(xParser::Bit_xorExprContext *ctx) = 0;

  virtual void enterBit_andExpr(xParser::Bit_andExprContext *ctx) = 0;
  virtual void exitBit_andExpr(xParser::Bit_andExprContext *ctx) = 0;

  virtual void enterShiftExpr(xParser::ShiftExprContext *ctx) = 0;
  virtual void exitShiftExpr(xParser::ShiftExprContext *ctx) = 0;

  virtual void enterMultExpr(xParser::MultExprContext *ctx) = 0;
  virtual void exitMultExpr(xParser::MultExprContext *ctx) = 0;

  virtual void enterAtom(xParser::AtomContext *ctx) = 0;
  virtual void exitAtom(xParser::AtomContext *ctx) = 0;

  virtual void enterList_atom(xParser::List_atomContext *ctx) = 0;
  virtual void exitList_atom(xParser::List_atomContext *ctx) = 0;

  virtual void enterListExpr(xParser::ListExprContext *ctx) = 0;
  virtual void exitListExpr(xParser::ListExprContext *ctx) = 0;

  virtual void enterList_call_ind(xParser::List_call_indContext *ctx) = 0;
  virtual void exitList_call_ind(xParser::List_call_indContext *ctx) = 0;

  virtual void enterStmt(xParser::StmtContext *ctx) = 0;
  virtual void exitStmt(xParser::StmtContext *ctx) = 0;

  virtual void enterIf_expr(xParser::If_exprContext *ctx) = 0;
  virtual void exitIf_expr(xParser::If_exprContext *ctx) = 0;

  virtual void enterFor_expr(xParser::For_exprContext *ctx) = 0;
  virtual void exitFor_expr(xParser::For_exprContext *ctx) = 0;

  virtual void enterWhile_expr(xParser::While_exprContext *ctx) = 0;
  virtual void exitWhile_expr(xParser::While_exprContext *ctx) = 0;

  virtual void enterInit_expr(xParser::Init_exprContext *ctx) = 0;
  virtual void exitInit_expr(xParser::Init_exprContext *ctx) = 0;

  virtual void enterFor_do_expr(xParser::For_do_exprContext *ctx) = 0;
  virtual void exitFor_do_expr(xParser::For_do_exprContext *ctx) = 0;

  virtual void enterSwitch_expr(xParser::Switch_exprContext *ctx) = 0;
  virtual void exitSwitch_expr(xParser::Switch_exprContext *ctx) = 0;

  virtual void enterCase_expr(xParser::Case_exprContext *ctx) = 0;
  virtual void exitCase_expr(xParser::Case_exprContext *ctx) = 0;

  virtual void enterDefault_expr(xParser::Default_exprContext *ctx) = 0;
  virtual void exitDefault_expr(xParser::Default_exprContext *ctx) = 0;

  virtual void enterCondition_expr(xParser::Condition_exprContext *ctx) = 0;
  virtual void exitCondition_expr(xParser::Condition_exprContext *ctx) = 0;

  virtual void enterAndExpr(xParser::AndExprContext *ctx) = 0;
  virtual void exitAndExpr(xParser::AndExprContext *ctx) = 0;

  virtual void enterCmp_atom(xParser::Cmp_atomContext *ctx) = 0;
  virtual void exitCmp_atom(xParser::Cmp_atomContext *ctx) = 0;

  virtual void enterCond_atom(xParser::Cond_atomContext *ctx) = 0;
  virtual void exitCond_atom(xParser::Cond_atomContext *ctx) = 0;

  virtual void enterBlock(xParser::BlockContext *ctx) = 0;
  virtual void exitBlock(xParser::BlockContext *ctx) = 0;

  virtual void enterBlock_expr(xParser::Block_exprContext *ctx) = 0;
  virtual void exitBlock_expr(xParser::Block_exprContext *ctx) = 0;

  virtual void enterPrint_atom(xParser::Print_atomContext *ctx) = 0;
  virtual void exitPrint_atom(xParser::Print_atomContext *ctx) = 0;

  virtual void enterExpr_stmt(xParser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(xParser::Expr_stmtContext *ctx) = 0;

  virtual void enterList_def_ind(xParser::List_def_indContext *ctx) = 0;
  virtual void exitList_def_ind(xParser::List_def_indContext *ctx) = 0;

  virtual void enterControl_stmt(xParser::Control_stmtContext *ctx) = 0;
  virtual void exitControl_stmt(xParser::Control_stmtContext *ctx) = 0;

  virtual void enterFunc_stmt(xParser::Func_stmtContext *ctx) = 0;
  virtual void exitFunc_stmt(xParser::Func_stmtContext *ctx) = 0;

  virtual void enterParam(xParser::ParamContext *ctx) = 0;
  virtual void exitParam(xParser::ParamContext *ctx) = 0;

  virtual void enterId_param(xParser::Id_paramContext *ctx) = 0;
  virtual void exitId_param(xParser::Id_paramContext *ctx) = 0;

  virtual void enterFunc_call(xParser::Func_callContext *ctx) = 0;
  virtual void exitFunc_call(xParser::Func_callContext *ctx) = 0;

  virtual void enterParam_expr(xParser::Param_exprContext *ctx) = 0;
  virtual void exitParam_expr(xParser::Param_exprContext *ctx) = 0;

  virtual void enterCond_param(xParser::Cond_paramContext *ctx) = 0;
  virtual void exitCond_param(xParser::Cond_paramContext *ctx) = 0;

  virtual void enterProg(xParser::ProgContext *ctx) = 0;
  virtual void exitProg(xParser::ProgContext *ctx) = 0;


};

