/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : ./grammar/x.g
 *     -                            On : 2020-10-14 18:46:55
 *     -                for the parser : xParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
xParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pxParser, which is returned from a call to xParserNew().
 *
 * The methods in pxParser are  as follows:
 *
 *  - 
 xParser_defid_expr_return
      pxParser->defid_expr(pxParser)
 *  - 
 xParser_defid_return
      pxParser->defid(pxParser)
 *  - 
 xParser_expr_return
      pxParser->expr(pxParser)
 *  - 
 xParser_bit_orExpr_return
      pxParser->bit_orExpr(pxParser)
 *  - 
 xParser_bit_xorExpr_return
      pxParser->bit_xorExpr(pxParser)
 *  - 
 xParser_bit_andExpr_return
      pxParser->bit_andExpr(pxParser)
 *  - 
 xParser_shiftExpr_return
      pxParser->shiftExpr(pxParser)
 *  - 
 xParser_multExpr_return
      pxParser->multExpr(pxParser)
 *  - 
 xParser_atom_return
      pxParser->atom(pxParser)
 *  - 
 xParser_list_atom_return
      pxParser->list_atom(pxParser)
 *  - 
 xParser_listExpr_return
      pxParser->listExpr(pxParser)
 *  - 
 xParser_list_call_ind_return
      pxParser->list_call_ind(pxParser)
 *  - 
 xParser_if_expr_return
      pxParser->if_expr(pxParser)
 *  - 
 xParser_for_expr_return
      pxParser->for_expr(pxParser)
 *  - 
 xParser_while_expr_return
      pxParser->while_expr(pxParser)
 *  - 
 xParser_init_expr_return
      pxParser->init_expr(pxParser)
 *  - 
 xParser_for_do_expr_return
      pxParser->for_do_expr(pxParser)
 *  - 
 xParser_switch_expr_return
      pxParser->switch_expr(pxParser)
 *  - 
 xParser_case_expr_return
      pxParser->case_expr(pxParser)
 *  - 
 xParser_default_expr_return
      pxParser->default_expr(pxParser)
 *  - 
 xParser_condition_expr_return
      pxParser->condition_expr(pxParser)
 *  - 
 xParser_andExpr_return
      pxParser->andExpr(pxParser)
 *  - 
 xParser_cmp_atom_return
      pxParser->cmp_atom(pxParser)
 *  - 
 xParser_cond_atom_return
      pxParser->cond_atom(pxParser)
 *  - 
 xParser_block_return
      pxParser->block(pxParser)
 *  - 
 xParser_block_expr_return
      pxParser->block_expr(pxParser)
 *  - 
 xParser_print_atom_return
      pxParser->print_atom(pxParser)
 *  - 
 xParser_expr_stmt_return
      pxParser->expr_stmt(pxParser)
 *  - 
 xParser_list_def_ind_return
      pxParser->list_def_ind(pxParser)
 *  - 
 xParser_control_stmt_return
      pxParser->control_stmt(pxParser)
 *  - 
 xParser_func_stmt_return
      pxParser->func_stmt(pxParser)
 *  - 
 xParser_param_return
      pxParser->param(pxParser)
 *  - 
 xParser_id_param_return
      pxParser->id_param(pxParser)
 *  - 
 xParser_func_call_return
      pxParser->func_call(pxParser)
 *  - 
 xParser_param_expr_return
      pxParser->param_expr(pxParser)
 *  - 
 xParser_cond_param_return
      pxParser->cond_param(pxParser)
 *  - 
 xParser_stmt_return
      pxParser->stmt(pxParser)
 *  - 
 xParser_prog_return
      pxParser->prog(pxParser)
 * 
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_xParser_H
#define _xParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct xParser_Ctx_struct xParser, * pxParser;



    #include <assert.h>


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */

typedef struct xParser_defid_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_defid_expr_return;



typedef struct xParser_defid_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_defid_return;



typedef struct xParser_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_expr_return;



typedef struct xParser_bit_orExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_bit_orExpr_return;



typedef struct xParser_bit_xorExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_bit_xorExpr_return;



typedef struct xParser_bit_andExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_bit_andExpr_return;



typedef struct xParser_shiftExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_shiftExpr_return;



typedef struct xParser_multExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_multExpr_return;



typedef struct xParser_atom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_atom_return;



typedef struct xParser_list_atom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_list_atom_return;



typedef struct xParser_listExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_listExpr_return;



typedef struct xParser_list_call_ind_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_list_call_ind_return;



typedef struct xParser_if_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_if_expr_return;



typedef struct xParser_for_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_for_expr_return;



typedef struct xParser_while_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_while_expr_return;



typedef struct xParser_init_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_init_expr_return;



typedef struct xParser_for_do_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_for_do_expr_return;



typedef struct xParser_switch_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_switch_expr_return;



typedef struct xParser_case_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_case_expr_return;



typedef struct xParser_default_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_default_expr_return;



typedef struct xParser_condition_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_condition_expr_return;



typedef struct xParser_andExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_andExpr_return;



typedef struct xParser_cmp_atom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_cmp_atom_return;



typedef struct xParser_cond_atom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_cond_atom_return;



typedef struct xParser_block_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_block_return;



typedef struct xParser_block_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_block_expr_return;



typedef struct xParser_print_atom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_print_atom_return;



typedef struct xParser_expr_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_expr_stmt_return;



typedef struct xParser_list_def_ind_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_list_def_ind_return;



typedef struct xParser_control_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_control_stmt_return;



typedef struct xParser_func_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_func_stmt_return;



typedef struct xParser_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_param_return;



typedef struct xParser_id_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_id_param_return;



typedef struct xParser_func_call_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_func_call_return;



typedef struct xParser_param_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_param_expr_return;



typedef struct xParser_cond_param_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_cond_param_return;



typedef struct xParser_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_stmt_return;



typedef struct xParser_prog_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;

}
    xParser_prog_return;




/** Context tracking structure for 
xParser

 */
struct xParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     xParser_defid_expr_return
     (*defid_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_defid_return
     (*defid)	(struct xParser_Ctx_struct * ctx);

     xParser_expr_return
     (*expr)	(struct xParser_Ctx_struct * ctx);

     xParser_bit_orExpr_return
     (*bit_orExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_bit_xorExpr_return
     (*bit_xorExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_bit_andExpr_return
     (*bit_andExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_shiftExpr_return
     (*shiftExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_multExpr_return
     (*multExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_atom_return
     (*atom)	(struct xParser_Ctx_struct * ctx);

     xParser_list_atom_return
     (*list_atom)	(struct xParser_Ctx_struct * ctx);

     xParser_listExpr_return
     (*listExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_list_call_ind_return
     (*list_call_ind)	(struct xParser_Ctx_struct * ctx);

     xParser_if_expr_return
     (*if_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_for_expr_return
     (*for_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_while_expr_return
     (*while_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_init_expr_return
     (*init_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_for_do_expr_return
     (*for_do_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_switch_expr_return
     (*switch_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_case_expr_return
     (*case_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_default_expr_return
     (*default_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_condition_expr_return
     (*condition_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_andExpr_return
     (*andExpr)	(struct xParser_Ctx_struct * ctx);

     xParser_cmp_atom_return
     (*cmp_atom)	(struct xParser_Ctx_struct * ctx);

     xParser_cond_atom_return
     (*cond_atom)	(struct xParser_Ctx_struct * ctx);

     xParser_block_return
     (*block)	(struct xParser_Ctx_struct * ctx);

     xParser_block_expr_return
     (*block_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_print_atom_return
     (*print_atom)	(struct xParser_Ctx_struct * ctx);

     xParser_expr_stmt_return
     (*expr_stmt)	(struct xParser_Ctx_struct * ctx);

     xParser_list_def_ind_return
     (*list_def_ind)	(struct xParser_Ctx_struct * ctx);

     xParser_control_stmt_return
     (*control_stmt)	(struct xParser_Ctx_struct * ctx);

     xParser_func_stmt_return
     (*func_stmt)	(struct xParser_Ctx_struct * ctx);

     xParser_param_return
     (*param)	(struct xParser_Ctx_struct * ctx);

     xParser_id_param_return
     (*id_param)	(struct xParser_Ctx_struct * ctx);

     xParser_func_call_return
     (*func_call)	(struct xParser_Ctx_struct * ctx);

     xParser_param_expr_return
     (*param_expr)	(struct xParser_Ctx_struct * ctx);

     xParser_cond_param_return
     (*cond_param)	(struct xParser_Ctx_struct * ctx);

     xParser_stmt_return
     (*stmt)	(struct xParser_Ctx_struct * ctx);

     xParser_prog_return
     (*prog)	(struct xParser_Ctx_struct * ctx);

     ANTLR3_BOOLEAN
     (*synpred1_x)	(struct xParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct xParser_Ctx_struct * ctx);
    void	    (*free)   (struct xParser_Ctx_struct * ctx);
/* @headerFile.members() */
pANTLR3_BASE_TREE_ADAPTOR	adaptor;
pANTLR3_VECTOR_FACTORY		vectors;
/* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pxParser xParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pxParser xParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__64      64
#define T__65      65
#define T__66      66
#define T__67      67
#define T__68      68
#define T__69      69
#define T__70      70
#define T__71      71
#define AND      4
#define ASSIGN      5
#define BIT_AND      6
#define BIT_NOR      7
#define BIT_OR      8
#define BIT_XOR      9
#define BLOCK      10
#define BREAK      11
#define CASE      12
#define COMMENT      13
#define CONTINUE      14
#define DEF      15
#define DEFAULT      16
#define DIV      17
#define DO      18
#define DOT      19
#define DOUBLE_MINUS      20
#define DOUBLE_PLUS      21
#define DOWHILE      22
#define ELSE      23
#define EQ      24
#define ESC_SEQ      25
#define EXPONENT      26
#define FLOAT      27
#define FOR      28
#define FUNC      29
#define FUNC_CALL      30
#define GE      31
#define GT      32
#define HEX_DIGIT      33
#define ID      34
#define IF      35
#define INT      36
#define LE      37
#define LIST      38
#define LIST_CALL      39
#define LIST_DEF      40
#define LITTLE      41
#define L_DOUBLE_MINUS      42
#define L_DOUBLE_PLUS      43
#define L_SHIFT      44
#define MINUS      45
#define MOD      46
#define NE      47
#define NOPE      48
#define OCTAL_ESC      49
#define OR      50
#define PARAM      51
#define PLUS      52
#define PRINT      53
#define RETURN      54
#define R_DOUBLE_MINUS      55
#define R_DOUBLE_PLUS      56
#define R_SHIFT      57
#define STRING      58
#define SWITCH      59
#define TIMES      60
#define UNICODE_ESC      61
#define WHILE      62
#define WS      63
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for xParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
