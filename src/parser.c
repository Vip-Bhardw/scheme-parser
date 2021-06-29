#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym_commentSingleLine_token1 = 3,
  aux_sym_commentSingleLine_token2 = 4,
  anon_sym_PIPE_POUND = 5,
  anon_sym_LPARENdefine = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LPARENdefine_LPAREN = 8,
  aux_sym_functionName_token1 = 9,
  anon_sym_LPARENlambda_LPAREN = 10,
  anon_sym_LPAREN = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  sym_source_file = 16,
  sym_comments = 17,
  sym_commentSingleLine = 18,
  sym_commentMultiLine = 19,
  sym_functionDefinition = 20,
  sym_functionName = 21,
  sym_functionBody = 22,
  sym_returnStatement = 23,
  sym_operator = 24,
  sym_args = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_commentSingleLine_repeat1 = 27,
  aux_sym_commentMultiLine_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_commentSingleLine_token1] = "commentSingleLine_token1",
  [aux_sym_commentSingleLine_token2] = "commentSingleLine_token2",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_LPARENdefine] = "(define ",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPARENdefine_LPAREN] = "(define (",
  [aux_sym_functionName_token1] = "functionName_token1",
  [anon_sym_LPARENlambda_LPAREN] = "(lambda (",
  [anon_sym_LPAREN] = "(",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_comments] = "comments",
  [sym_commentSingleLine] = "commentSingleLine",
  [sym_commentMultiLine] = "commentMultiLine",
  [sym_functionDefinition] = "functionDefinition",
  [sym_functionName] = "functionName",
  [sym_functionBody] = "functionBody",
  [sym_returnStatement] = "returnStatement",
  [sym_operator] = "operator",
  [sym_args] = "args",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_commentSingleLine_repeat1] = "commentSingleLine_repeat1",
  [aux_sym_commentMultiLine_repeat1] = "commentMultiLine_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_commentSingleLine_token1] = aux_sym_commentSingleLine_token1,
  [aux_sym_commentSingleLine_token2] = aux_sym_commentSingleLine_token2,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_LPARENdefine] = anon_sym_LPARENdefine,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPARENdefine_LPAREN] = anon_sym_LPARENdefine_LPAREN,
  [aux_sym_functionName_token1] = aux_sym_functionName_token1,
  [anon_sym_LPARENlambda_LPAREN] = anon_sym_LPARENlambda_LPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_comments] = sym_comments,
  [sym_commentSingleLine] = sym_commentSingleLine,
  [sym_commentMultiLine] = sym_commentMultiLine,
  [sym_functionDefinition] = sym_functionDefinition,
  [sym_functionName] = sym_functionName,
  [sym_functionBody] = sym_functionBody,
  [sym_returnStatement] = sym_returnStatement,
  [sym_operator] = sym_operator,
  [sym_args] = sym_args,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_commentSingleLine_repeat1] = aux_sym_commentSingleLine_repeat1,
  [aux_sym_commentMultiLine_repeat1] = aux_sym_commentMultiLine_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commentSingleLine_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commentSingleLine_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENdefine_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_functionName_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPARENlambda_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comments] = {
    .visible = true,
    .named = true,
  },
  [sym_commentSingleLine] = {
    .visible = true,
    .named = true,
  },
  [sym_commentMultiLine] = {
    .visible = true,
    .named = true,
  },
  [sym_functionDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_functionName] = {
    .visible = true,
    .named = true,
  },
  [sym_functionBody] = {
    .visible = true,
    .named = true,
  },
  [sym_returnStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commentSingleLine_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commentMultiLine_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(23);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      if (lookahead == '#') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token2);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token2);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPARENdefine);
      if (lookahead == '(') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPARENdefine_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_functionName_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPARENlambda_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_LPARENdefine] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPARENdefine_LPAREN] = ACTIONS(1),
    [aux_sym_functionName_token1] = ACTIONS(1),
    [anon_sym_LPARENlambda_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_comments] = STATE(2),
    [sym_functionDefinition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [anon_sym_LPARENdefine] = ACTIONS(9),
    [anon_sym_LPARENdefine_LPAREN] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      anon_sym_LPARENdefine,
    ACTIONS(11), 1,
      anon_sym_LPARENdefine_LPAREN,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym_comments,
      sym_functionDefinition,
      aux_sym_source_file_repeat1,
  [21] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(20), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(23), 1,
      anon_sym_LPARENdefine,
    ACTIONS(26), 1,
      anon_sym_LPARENdefine_LPAREN,
    STATE(3), 3,
      sym_comments,
      sym_functionDefinition,
      aux_sym_source_file_repeat1,
  [42] = 2,
    ACTIONS(31), 1,
      anon_sym_LPARENdefine,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [52] = 4,
    ACTIONS(35), 1,
      anon_sym_PIPE_POUND,
    STATE(9), 1,
      sym_commentMultiLine,
    STATE(15), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(33), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [66] = 2,
    ACTIONS(39), 1,
      anon_sym_LPARENdefine,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [76] = 2,
    STATE(27), 1,
      sym_operator,
    ACTIONS(41), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [86] = 2,
    ACTIONS(45), 1,
      anon_sym_LPARENdefine,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [96] = 2,
    ACTIONS(49), 1,
      anon_sym_LPARENdefine,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [106] = 2,
    ACTIONS(53), 1,
      anon_sym_LPARENdefine,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [116] = 2,
    ACTIONS(57), 1,
      anon_sym_LPARENdefine,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [126] = 2,
    ACTIONS(61), 1,
      anon_sym_LPARENdefine,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [136] = 4,
    ACTIONS(63), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(65), 1,
      aux_sym_commentSingleLine_token2,
    STATE(9), 1,
      sym_commentSingleLine,
    STATE(19), 1,
      aux_sym_commentSingleLine_repeat1,
  [149] = 3,
    ACTIONS(67), 1,
      aux_sym_functionName_token1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(37), 2,
      sym_returnStatement,
      sym_args,
  [160] = 3,
    ACTIONS(73), 1,
      anon_sym_PIPE_POUND,
    STATE(16), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(71), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [171] = 3,
    ACTIONS(78), 1,
      anon_sym_PIPE_POUND,
    STATE(16), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(75), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [182] = 3,
    ACTIONS(80), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(83), 1,
      aux_sym_commentSingleLine_token2,
    STATE(17), 1,
      aux_sym_commentSingleLine_repeat1,
  [192] = 1,
    ACTIONS(85), 3,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
      anon_sym_LPAREN,
  [198] = 3,
    ACTIONS(87), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(89), 1,
      aux_sym_commentSingleLine_token2,
    STATE(17), 1,
      aux_sym_commentSingleLine_repeat1,
  [208] = 2,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_returnStatement,
  [215] = 2,
    ACTIONS(91), 1,
      aux_sym_functionName_token1,
    STATE(25), 1,
      sym_functionName,
  [222] = 2,
    ACTIONS(67), 1,
      aux_sym_functionName_token1,
    STATE(31), 1,
      sym_args,
  [229] = 1,
    ACTIONS(93), 2,
      aux_sym_functionName_token1,
      anon_sym_LPARENlambda_LPAREN,
  [234] = 2,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_returnStatement,
  [241] = 2,
    ACTIONS(95), 1,
      anon_sym_LPARENlambda_LPAREN,
    STATE(29), 1,
      sym_functionBody,
  [248] = 2,
    ACTIONS(67), 1,
      aux_sym_functionName_token1,
    STATE(30), 1,
      sym_args,
  [255] = 2,
    ACTIONS(67), 1,
      aux_sym_functionName_token1,
    STATE(14), 1,
      sym_args,
  [262] = 2,
    ACTIONS(91), 1,
      aux_sym_functionName_token1,
    STATE(26), 1,
      sym_functionName,
  [269] = 1,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [273] = 1,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [277] = 1,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [281] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [285] = 1,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
  [289] = 1,
    ACTIONS(107), 1,
      aux_sym_functionName_token1,
  [293] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [297] = 1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [301] = 1,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [305] = 1,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 192,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 208,
  [SMALL_STATE(21)] = 215,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 229,
  [SMALL_STATE(24)] = 234,
  [SMALL_STATE(25)] = 241,
  [SMALL_STATE(26)] = 248,
  [SMALL_STATE(27)] = 255,
  [SMALL_STATE(28)] = 262,
  [SMALL_STATE(29)] = 269,
  [SMALL_STATE(30)] = 273,
  [SMALL_STATE(31)] = 277,
  [SMALL_STATE(32)] = 281,
  [SMALL_STATE(33)] = 285,
  [SMALL_STATE(34)] = 289,
  [SMALL_STATE(35)] = 293,
  [SMALL_STATE(36)] = 297,
  [SMALL_STATE(37)] = 301,
  [SMALL_STATE(38)] = 305,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentSingleLine, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentSingleLine, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 6),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentSingleLine, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentSingleLine, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comments, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultiLine, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentMultiLine, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultiLine, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentMultiLine, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentMultiLine_repeat1, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentMultiLine_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentSingleLine_repeat1, 2), SHIFT_REPEAT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentSingleLine_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionName, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionBody, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Scheme(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
