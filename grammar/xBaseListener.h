
    #include <assert.h>


// Generated from x.g by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "xListener.h"


/**
 * This class provides an empty implementation of xListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  xBaseListener : public xListener {
public:

  virtual void enterDefid_expr(xParser::Defid_exprContext * /*ctx*/) override { }
  virtual void exitDefid_expr(xParser::Defid_exprContext * /*ctx*/) override { }

  virtual void enterDefid(xParser::DefidContext * /*ctx*/) override { }
  virtual void exitDefid(xParser::DefidContext * /*ctx*/) override { }

  virtual void enterExpr(xParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(xParser::ExprContext * /*ctx*/) override { }

  virtual void enterBit_orExpr(xParser::Bit_orExprContext * /*ctx*/) override { }
  virtual void exitBit_orExpr(xParser::Bit_orExprContext * /*ctx*/) override { }

  virtual void enterBit_xorExpr(xParser::Bit_xorExprContext * /*ctx*/) override { }
  virtual void exitBit_xorExpr(xParser::Bit_xorExprContext * /*ctx*/) override { }

  virtual void enterBit_andExpr(xParser::Bit_andExprContext * /*ctx*/) override { }
  virtual void exitBit_andExpr(xParser::Bit_andExprContext * /*ctx*/) override { }

  virtual void enterShiftExpr(xParser::ShiftExprContext * /*ctx*/) override { }
  virtual void exitShiftExpr(xParser::ShiftExprContext * /*ctx*/) override { }

  virtual void enterMultExpr(xParser::MultExprContext * /*ctx*/) override { }
  virtual void exitMultExpr(xParser::MultExprContext * /*ctx*/) override { }

  virtual void enterAtom(xParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(xParser::AtomContext * /*ctx*/) override { }

  virtual void enterList_atom(xParser::List_atomContext * /*ctx*/) override { }
  virtual void exitList_atom(xParser::List_atomContext * /*ctx*/) override { }

  virtual void enterListExpr(xParser::ListExprContext * /*ctx*/) override { }
  virtual void exitListExpr(xParser::ListExprContext * /*ctx*/) override { }

  virtual void enterList_call_ind(xParser::List_call_indContext * /*ctx*/) override { }
  virtual void exitList_call_ind(xParser::List_call_indContext * /*ctx*/) override { }

  virtual void enterStmt(xParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(xParser::StmtContext * /*ctx*/) override { }

  virtual void enterIf_expr(xParser::If_exprContext * /*ctx*/) override { }
  virtual void exitIf_expr(xParser::If_exprContext * /*ctx*/) override { }

  virtual void enterFor_expr(xParser::For_exprContext * /*ctx*/) override { }
  virtual void exitFor_expr(xParser::For_exprContext * /*ctx*/) override { }

  virtual void enterWhile_expr(xParser::While_exprContext * /*ctx*/) override { }
  virtual void exitWhile_expr(xParser::While_exprContext * /*ctx*/) override { }

  virtual void enterInit_expr(xParser::Init_exprContext * /*ctx*/) override { }
  virtual void exitInit_expr(xParser::Init_exprContext * /*ctx*/) override { }

  virtual void enterFor_do_expr(xParser::For_do_exprContext * /*ctx*/) override { }
  virtual void exitFor_do_expr(xParser::For_do_exprContext * /*ctx*/) override { }

  virtual void enterSwitch_expr(xParser::Switch_exprContext * /*ctx*/) override { }
  virtual void exitSwitch_expr(xParser::Switch_exprContext * /*ctx*/) override { }

  virtual void enterCase_expr(xParser::Case_exprContext * /*ctx*/) override { }
  virtual void exitCase_expr(xParser::Case_exprContext * /*ctx*/) override { }

  virtual void enterDefault_expr(xParser::Default_exprContext * /*ctx*/) override { }
  virtual void exitDefault_expr(xParser::Default_exprContext * /*ctx*/) override { }

  virtual void enterCondition_expr(xParser::Condition_exprContext * /*ctx*/) override { }
  virtual void exitCondition_expr(xParser::Condition_exprContext * /*ctx*/) override { }

  virtual void enterAndExpr(xParser::AndExprContext * /*ctx*/) override { }
  virtual void exitAndExpr(xParser::AndExprContext * /*ctx*/) override { }

  virtual void enterCmp_atom(xParser::Cmp_atomContext * /*ctx*/) override { }
  virtual void exitCmp_atom(xParser::Cmp_atomContext * /*ctx*/) override { }

  virtual void enterCond_atom(xParser::Cond_atomContext * /*ctx*/) override { }
  virtual void exitCond_atom(xParser::Cond_atomContext * /*ctx*/) override { }

  virtual void enterBlock(xParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(xParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlock_expr(xParser::Block_exprContext * /*ctx*/) override { }
  virtual void exitBlock_expr(xParser::Block_exprContext * /*ctx*/) override { }

  virtual void enterPrint_atom(xParser::Print_atomContext * /*ctx*/) override { }
  virtual void exitPrint_atom(xParser::Print_atomContext * /*ctx*/) override { }

  virtual void enterExpr_stmt(xParser::Expr_stmtContext * /*ctx*/) override { }
  virtual void exitExpr_stmt(xParser::Expr_stmtContext * /*ctx*/) override { }

  virtual void enterList_def_ind(xParser::List_def_indContext * /*ctx*/) override { }
  virtual void exitList_def_ind(xParser::List_def_indContext * /*ctx*/) override { }

  virtual void enterControl_stmt(xParser::Control_stmtContext * /*ctx*/) override { }
  virtual void exitControl_stmt(xParser::Control_stmtContext * /*ctx*/) override { }

  virtual void enterFunc_stmt(xParser::Func_stmtContext * /*ctx*/) override { }
  virtual void exitFunc_stmt(xParser::Func_stmtContext * /*ctx*/) override { }

  virtual void enterParam(xParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(xParser::ParamContext * /*ctx*/) override { }

  virtual void enterId_param(xParser::Id_paramContext * /*ctx*/) override { }
  virtual void exitId_param(xParser::Id_paramContext * /*ctx*/) override { }

  virtual void enterFunc_call(xParser::Func_callContext * /*ctx*/) override { }
  virtual void exitFunc_call(xParser::Func_callContext * /*ctx*/) override { }

  virtual void enterParam_expr(xParser::Param_exprContext * /*ctx*/) override { }
  virtual void exitParam_expr(xParser::Param_exprContext * /*ctx*/) override { }

  virtual void enterCond_param(xParser::Cond_paramContext * /*ctx*/) override { }
  virtual void exitCond_param(xParser::Cond_paramContext * /*ctx*/) override { }

  virtual void enterProg(xParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(xParser::ProgContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

