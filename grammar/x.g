grammar x;

options {
    language = C;
    output = AST;
    ASTLabelType=pANTLR3_BASE_TREE;
}

@header {
    #include <assert.h>
}

// The suffix '^' means make it a root.
// The suffix '!' means ignore it.

defid_expr
    : DEF! defid (','! defid)*
    ;

defid
    : ID^ (ASSIGN! condition_expr)?
    ;

expr
    : bit_orExpr (BIT_OR^ bit_orExpr)*
    ;

bit_orExpr
    : bit_xorExpr (BIT_XOR^ bit_xorExpr)*
    ;

bit_xorExpr
    : bit_andExpr (BIT_AND^ bit_andExpr)*
    ;

bit_andExpr
    : shiftExpr ((L_SHIFT^ | R_SHIFT^) shiftExpr)*
    ;

shiftExpr
    : multExpr ((PLUS^ | MINUS^) multExpr)*
    ;

multExpr
    : atom ((TIMES^ | DIV^ | MOD^) atom)*
    ;

atom
    : INT
    | ID
    | DOUBLE_PLUS ID -> ^(L_DOUBLE_PLUS ID)
    | ID DOUBLE_PLUS -> ^(R_DOUBLE_PLUS ID)
    | DOUBLE_MINUS ID -> ^(L_DOUBLE_MINUS ID)
    | ID DOUBLE_MINUS -> ^(R_DOUBLE_MINUS ID)
    | STRING
    | FLOAT
    | func_call
    | list_atom -> ^(LIST list_atom)
    | list_id -> ^(LIST_CALL list_id)
    | '('! expr ')'!
    ;

list_atom
    : '['! exprs? ']'!
    ;

exprs
    : expr (','! expr)*
    ;

list_id
    : ID '['! expr ']'!
    ;

if_expr
    : IF^ '('! condition_expr ')'! stmt ( (ELSE) => ELSE! stmt )?
    ;

for_expr
    : FOR^ '('! init_expr ';'! condition_expr ';'! for_do_expr ')'! stmt
    ;

while_expr
    : WHILE^ '('! condition_expr ')'! stmt
    | DO block WHILE '(' condition_expr ')' ';' -> ^(DOWHILE condition_expr block)
    ;

init_expr
    : defid_expr -> ^(DEF defid_expr)
    | ID ASSIGN expr -> ^(ASSIGN ID expr)
    | -> ^(NOPE)
    ;

for_do_expr
    : ID ASSIGN expr -> ^(ASSIGN ID expr)
    | ID PLUS ASSIGN expr -> ^(ASSIGN ID ^(PLUS ID expr))
    | ID MINUS ASSIGN expr -> ^(ASSIGN ID ^(MINUS ID expr))
    | ID TIMES ASSIGN expr -> ^(ASSIGN ID ^(TIMES ID expr))
    | ID DIV ASSIGN expr -> ^(ASSIGN ID ^(DIV ID expr))
    | ID MOD ASSIGN expr -> ^(ASSIGN ID ^(MOD ID expr))
    | ID BIT_AND ASSIGN expr -> ^(ASSIGN ID ^(BIT_AND ID expr))
    | ID BIT_OR ASSIGN expr -> ^(ASSIGN ID ^(BIT_OR ID expr))
    | ID BIT_XOR ASSIGN expr -> ^(ASSIGN ID ^(BIT_XOR ID expr))
    | ID L_SHIFT ASSIGN expr -> ^(ASSIGN ID ^(L_SHIFT ID expr))
    | ID R_SHIFT ASSIGN expr -> ^(ASSIGN ID ^(R_SHIFT ID expr))
    | DOUBLE_PLUS ID -> ^(L_DOUBLE_PLUS ID)
    | ID DOUBLE_PLUS -> ^(R_DOUBLE_PLUS ID)
    | DOUBLE_MINUS ID -> ^(L_DOUBLE_MINUS ID)
    | ID DOUBLE_MINUS -> ^(R_DOUBLE_MINUS ID)
    | -> ^(NOPE)
    ;

switch_expr
    : SWITCH^ '('! condition_expr ')'! '{'! case_expr+ default_expr? '}'!
    ;

case_expr
    : CASE^ expr ':'! (stmt)*
    ;

default_expr
    : DEFAULT^ ':'! (stmt)*
    ;

condition_expr
    : andExpr (OR^ andExpr)*
    ;

andExpr
    : cmp_atom (AND^ cmp_atom)*
    ;

cmp_atom
    : cond_atom ((GT^ | LITTLE^ | EQ^ | GE^ | LE^ | NE^) cond_atom)?
    ;

cond_atom
    : expr
    | -> ^(NOPE)
    ;

block
    : block_expr -> ^(BLOCK block_expr)
    ;

block_expr
    : '{'! (stmt)* '}'!
    ;

print_atom
    : condition_expr
    ;

expr_stmt
    : expr ';' -> expr // tree rewrite syntax
    | ID ASSIGN expr ';' -> ^(ASSIGN ID expr) // tree notation
    | ID '[' INT ']' ASSIGN expr ';' -> ^(LIST_DEF ID INT expr)
    | ID PLUS ASSIGN expr ';' -> ^(ASSIGN ID ^(PLUS ID expr))
    | ID MINUS ASSIGN expr ';' -> ^(ASSIGN ID ^(MINUS ID expr))
    | ID TIMES ASSIGN expr ';' -> ^(ASSIGN ID ^(TIMES ID expr))
    | ID DIV ASSIGN expr ';' -> ^(ASSIGN ID ^(DIV ID expr))
    | ID MOD ASSIGN expr ';' -> ^(ASSIGN ID ^(MOD ID expr))
    | ID BIT_AND ASSIGN expr ';' -> ^(ASSIGN ID ^(BIT_AND ID expr))
    | ID BIT_OR ASSIGN expr ';' -> ^(ASSIGN ID ^(BIT_OR ID expr))
    | ID BIT_XOR ASSIGN expr ';' -> ^(ASSIGN ID ^(BIT_XOR ID expr))
    | ID L_SHIFT ASSIGN expr ';' -> ^(ASSIGN ID ^(L_SHIFT ID expr))
    | ID R_SHIFT ASSIGN expr ';' -> ^(ASSIGN ID ^(R_SHIFT ID expr))
    | PRINT^ print_atom (','! print_atom)* ';'!
    ;

control_stmt
    : for_expr
    | if_expr
    | while_expr
    | defid_expr ';' -> ^(DEF defid_expr)
    | block
    | BREAK ';'!
    | CONTINUE ';'!
    | RETURN^ condition_expr ';'!
    ;

func_stmt
    : FUNC^ ID param block
    ;

param
    : '(' id_param? ')' -> ^(PARAM id_param?)
    ;

id_param
    : ID (','! ID)*
    ;

func_call
    : ID param_expr -> ^(FUNC_CALL ID param_expr)
    ;

param_expr
    : '(' cond_param ')' -> ^(PARAM cond_param)
    ;

cond_param
    : condition_expr (','! condition_expr)*
    ;

stmt
    : expr_stmt
    | control_stmt
    | func_stmt
    ;

prog: 
    (stmt {
            //#ifdef DEBUG
            pANTLR3_STRING s = $stmt.tree->toStringTree($stmt.tree);
            assert(s->chars);
            printf("tree \%s\n", s->chars);
            //#endif
        }
    )+
    ;

DEF: 'def';
PRINT: 'print';
ASSIGN: '=';
PLUS: '+';
MINUS: '-';
TIMES: '*';
DIV: '/';
MOD: '%';
BIT_AND: '&';
BIT_OR: '|';
BIT_XOR: '^';
L_SHIFT: '<<';
R_SHIFT: '>>';
DOUBLE_PLUS: '++';
L_DOUBLE_PLUS: '++L';
R_DOUBLE_PLUS: 'R++';
DOUBLE_MINUS: '--';
L_DOUBLE_MINUS: '--L';
R_DOUBLE_MINUS: 'R--';
AND: '&&';
OR: '||';
GE: '>=' | '=>';
NE: '!=';
LITTLE: '<';
LE: '<=' | '=<';
GT: '>';
EQ: '==';
DOT : ',';
BLOCK: '{}';
IF: 'if';
ELSE: 'else';
BREAK: 'break';
CONTINUE: 'continue';
SWITCH: 'switch';
CASE: 'case';
DEFAULT: 'default';
FOR: 'for';
WHILE: 'while';
DO: 'do';
DOWHILE: 'dowhile';
NOPE: '404';
LIST: 'list';
LIST_CALL: 'list_call';
LIST_DEF: 'list_def';
FUNC: 'func';
FUNC_CALL: 'func_call';
RETURN: 'return';
PARAM: 'param';

INT: '-'? ('0'..'9')+;

ID: ('a'..'z'|'A'..'Z'|'_') ('a'..'z'|'A'..'Z'|'0'..'9'|'_')*;

FLOAT
    : ('0'..'9')+ '.' ('0'..'9')* EXPONENT?
    | '.' ('0'..'9')+ EXPONENT?
    | ('0'..'9')+ EXPONENT
    ;

COMMENT
    : '//' ~('\n'|'\r')* '\r'? '\n' {$channel=HIDDEN;}
    | '/*' ( options {greedy=false;} : . )* '*/' {$channel=HIDDEN;}
    ;

WS: ( ' '
    | '\t'
    | '\r'
    | '\n'
    ) {$channel=HIDDEN;}
    ;

STRING
    : '"' ( ESC_SEQ | ~('\\'|'"') )* '"'
    ;

fragment
EXPONENT: ('e'|'E') ('+'|'-')? ('0'..'9')+ ;

fragment
HEX_DIGIT: ('0'..'9'|'a'..'f'|'A'..'F') ;

fragment
ESC_SEQ
    : '\\' ('b'|'t'|'n'|'f'|'r'|'\"'|'\''|'\\')
    | UNICODE_ESC
    | OCTAL_ESC
    ;

fragment
OCTAL_ESC
    : '\\' ('0'..'3') ('0'..'7') ('0'..'7')
    | '\\' ('0'..'7') ('0'..'7')
    | '\\' ('0'..'7')
    ;

fragment
UNICODE_ESC
    : '\\' 'u' HEX_DIGIT HEX_DIGIT HEX_DIGIT HEX_DIGIT
    ;
