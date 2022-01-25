
    #include <assert.h>


// Generated from x.g by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  xLexer : public antlr4::Lexer {
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

  explicit xLexer(antlr4::CharStream *input);
  ~xLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void COMMENTAction(antlr4::RuleContext *context, size_t actionIndex);
  void WSAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

