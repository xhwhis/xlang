#include <iostream>
#include <cassert>
#include <xLexer.h>
#include <xParser.h>
#include <tree.h>
#include <runtime.h>
#include <debug.h>

xlang::ASTree init(int argc, char *argv[]) {
    pANTLR3_INPUT_STREAM input;
    pxLexer lex;
    pANTLR3_COMMON_TOKEN_STREAM tokens;
    pxParser parser;
    input = antlr3FileStreamNew((pANTLR3_UINT8)argv[1], ANTLR3_ENC_8BIT);
    lex = xLexerNew(input);
    tokens = antlr3CommonTokenStreamSourceNew(ANTLR3_SIZE_HINT, TOKENSOURCE(lex));
    parser = xParserNew(tokens);
    xParser_prog_return r = parser->prog(parser);
    return r.tree;
}

int main(int argc, char *argv[]) {
    xlang::ASTree *tree = new xlang::ASTree(init(argc, argv));
    xlang::Runtime env(tree);
    env.run();
    return 0;
}
