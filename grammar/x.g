grammar x;

options {
    language = Cpp;
}

@header {
    #include <assert.h>
}

defid_expr
    : DEF defid (',' defid)*
    ;

defid
    : ID (ASSIGN condition_expr)?
    ;

expr
    : bit_orExpr (BIT_OR bit_orExpr)*
    ;

bit_orExpr
    : bit_xorExpr (BIT_XOR bit_xorExpr)*
    ;

bit_xorExpr
    : bit_andExpr (BIT_AND bit_andExpr)*
    ;

bit_andExpr
    : shiftExpr ((L_SHIFT | R_SHIFT) shiftExpr)*
    ;

shiftExpr
    : multExpr ((PLUS | MINUS) multExpr)*
    ;

multExpr
    : atom ((TIMES | DIV | MOD) atom)*
    ;

atom
    : INT
    | BIT_NOR INT
    | ID
    | BIT_NOR ID
    | DOUBLE_PLUS ID
    | ID DOUBLE_PLUS
    | DOUBLE_MINUS ID
    | ID DOUBLE_MINUS
    | STRING
    | FLOAT
    | func_call
    | list_atom
    | ID list_call_ind
    | '(' expr ')'
    | BIT_NOR '(' expr ')'
    ;

list_atom
    : '[' listExpr? ']'
    ;

listExpr
    : expr (',' expr)*
    ;

list_call_ind
    : ('[' expr ']')+
    ;

stmt
    : expr_stmt
    | control_stmt
    | func_stmt
    ;

if_expr
    : IF '(' condition_expr ')' stmt (ELSE stmt)?
    ;

for_expr
    : FOR '(' init_expr ';' condition_expr ';' for_do_expr ')' stmt
    ;

while_expr
    : WHILE '(' condition_expr ')' stmt
    | DO block WHILE '(' condition_expr ')' ';'
    ;

init_expr
    : defid_expr
    | ID ASSIGN expr
    ;

for_do_expr
    : ID ASSIGN expr
    | ID PLUS ASSIGN expr
    | ID MINUS ASSIGN expr
    | ID TIMES ASSIGN expr
    | ID DIV ASSIGN expr
    | ID MOD ASSIGN expr
    | ID BIT_AND ASSIGN expr
    | ID BIT_OR ASSIGN expr
    | ID BIT_XOR ASSIGN expr
    | ID L_SHIFT ASSIGN expr
    | ID R_SHIFT ASSIGN expr
    | DOUBLE_PLUS ID
    | ID DOUBLE_PLUS
    | DOUBLE_MINUS ID
    | ID DOUBLE_MINUS
    ;

switch_expr
    : SWITCH '(' condition_expr ')' '{' case_expr+ default_expr? '}'
    ;

case_expr
    : CASE expr ':' (stmt)*
    ;

default_expr
    : DEFAULT ':' (stmt)*
    ;

condition_expr
    : andExpr (OR andExpr)*
    ;

andExpr
    : cmp_atom (AND cmp_atom)*
    ;

cmp_atom
    : cond_atom ((GT | LITTLE | EQ | GE | LE | NE) cond_atom)?
    ;

cond_atom
    : expr
    ;

block
    : block_expr
    ;

block_expr
    : '{' (stmt)* '}'
    ;

print_atom
    : condition_expr
    ;

expr_stmt
    : expr ';'
    | ID ASSIGN expr ';'
    | ID '[' list_def_ind ']' ASSIGN expr ';'
    | ID PLUS ASSIGN expr ';'
    | ID MINUS ASSIGN expr ';'
    | ID TIMES ASSIGN expr ';'
    | ID DIV ASSIGN expr ';'
    | ID MOD ASSIGN expr ';'
    | ID BIT_AND ASSIGN expr ';'
    | ID BIT_OR ASSIGN expr ';'
    | ID BIT_XOR ASSIGN expr ';'
    | ID L_SHIFT ASSIGN expr ';'
    | ID R_SHIFT ASSIGN expr ';'
    | PRINT print_atom (',' print_atom)* ';'
    ;

list_def_ind
    : INT
    | ID
    ;

control_stmt
    : for_expr
    | if_expr
    | while_expr
    | defid_expr ';'
    | block
    | BREAK ';'
    | CONTINUE ';'
    | RETURN condition_expr ';'
    ;

func_stmt
    : FUNC ID param block
    ;

param
    : '(' id_param? ')'
    ;

id_param
    : ID (',' ID)*
    ;

func_call
    : ID param_expr
    ;

param_expr
    : '(' cond_param ')'
    ;

cond_param
    : condition_expr (',' condition_expr)*
    ;

prog: 
    (stmt {
            pANTLR3_STRING s = stmt(tree)->toStringTree(stmt(tree));
            assert(s->chars);
            printf("tree \%s\n", s->chars);
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
BIT_NOR: '~';
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
    : '//' ~('\n'|'\r')* '\r'? '\n' {channel(HIDDEN);}
    ;

WS: ( ' '
    | '\t'
    | '\r'
    | '\n'
    ) {channel(HIDDEN);}
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
    : '\\' ('b' | 't' | 'n' | 'f' | 'r' | '\'' | '\\')
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
