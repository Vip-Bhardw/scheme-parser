#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym_commentSingleLine_token1 = 3,
  aux_sym_commentSingleLine_token2 = 4,
  anon_sym_PIPE_POUND = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  aux_sym_functionName_token1 = 8,
  anon_sym_define = 9,
  anon_sym_lambda = 10,
  anon_sym_if = 11,
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
  sym_keyword = 24,
  sym_operator = 25,
  sym_args = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_commentSingleLine_repeat1 = 28,
  aux_sym_commentMultiLine_repeat1 = 29,
  aux_sym_returnStatement_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_commentSingleLine_token1] = "commentSingleLine_token1",
  [aux_sym_commentSingleLine_token2] = "commentSingleLine_token2",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_functionName_token1] = "functionName_token1",
  [anon_sym_define] = "define",
  [anon_sym_lambda] = "lambda",
  [anon_sym_if] = "if",
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
  [sym_keyword] = "keyword",
  [sym_operator] = "operator",
  [sym_args] = "args",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_commentSingleLine_repeat1] = "commentSingleLine_repeat1",
  [aux_sym_commentMultiLine_repeat1] = "commentMultiLine_repeat1",
  [aux_sym_returnStatement_repeat1] = "returnStatement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_commentSingleLine_token1] = aux_sym_commentSingleLine_token1,
  [aux_sym_commentSingleLine_token2] = aux_sym_commentSingleLine_token2,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_functionName_token1] = aux_sym_functionName_token1,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_if] = anon_sym_if,
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
  [sym_keyword] = sym_keyword,
  [sym_operator] = sym_operator,
  [sym_args] = sym_args,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_commentSingleLine_repeat1] = aux_sym_commentSingleLine_repeat1,
  [aux_sym_commentMultiLine_repeat1] = aux_sym_commentMultiLine_repeat1,
  [aux_sym_returnStatement_repeat1] = aux_sym_returnStatement_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_functionName_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [sym_keyword] = {
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
  [aux_sym_returnStatement_repeat1] = {
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
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == '|') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token1);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token2);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_commentSingleLine_token2);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_functionName_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_lambda);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_comments] = STATE(3),
    [sym_functionDefinition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(16), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(2), 3,
      sym_comments,
      sym_functionDefinition,
      aux_sym_source_file_repeat1,
  [18] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym_comments,
      sym_functionDefinition,
      aux_sym_source_file_repeat1,
  [36] = 4,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
    ACTIONS(28), 1,
      aux_sym_functionName_token1,
    STATE(6), 3,
      sym_returnStatement,
      sym_args,
      aux_sym_returnStatement_repeat1,
  [51] = 4,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      aux_sym_functionName_token1,
    STATE(5), 3,
      sym_returnStatement,
      sym_args,
      aux_sym_returnStatement_repeat1,
  [66] = 4,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      aux_sym_functionName_token1,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(5), 3,
      sym_returnStatement,
      sym_args,
      aux_sym_returnStatement_repeat1,
  [81] = 4,
    ACTIONS(42), 1,
      anon_sym_PIPE_POUND,
    STATE(11), 1,
      aux_sym_commentMultiLine_repeat1,
    STATE(15), 1,
      sym_commentMultiLine,
    ACTIONS(40), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [95] = 2,
    STATE(30), 1,
      sym_operator,
    ACTIONS(44), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [105] = 3,
    ACTIONS(49), 1,
      anon_sym_PIPE_POUND,
    STATE(9), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(46), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [116] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [123] = 3,
    ACTIONS(55), 1,
      anon_sym_PIPE_POUND,
    STATE(9), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(53), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [134] = 4,
    ACTIONS(57), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(59), 1,
      aux_sym_commentSingleLine_token2,
    STATE(15), 1,
      sym_commentSingleLine,
    STATE(24), 1,
      aux_sym_commentSingleLine_repeat1,
  [147] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [154] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [161] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [168] = 1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [175] = 2,
    STATE(22), 1,
      sym_keyword,
    ACTIONS(69), 3,
      anon_sym_define,
      anon_sym_lambda,
      anon_sym_if,
  [184] = 2,
    STATE(37), 1,
      sym_keyword,
    ACTIONS(69), 3,
      anon_sym_define,
      anon_sym_lambda,
      anon_sym_if,
  [193] = 1,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [200] = 1,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPAREN,
  [207] = 1,
    ACTIONS(75), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
  [213] = 3,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym_functionName_token1,
    STATE(32), 1,
      sym_functionName,
  [223] = 3,
    ACTIONS(81), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(84), 1,
      aux_sym_commentSingleLine_token2,
    STATE(23), 1,
      aux_sym_commentSingleLine_repeat1,
  [233] = 3,
    ACTIONS(86), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(88), 1,
      aux_sym_commentSingleLine_token2,
    STATE(23), 1,
      aux_sym_commentSingleLine_repeat1,
  [243] = 1,
    ACTIONS(90), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
  [249] = 1,
    ACTIONS(92), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
  [255] = 2,
    ACTIONS(28), 1,
      aux_sym_functionName_token1,
    STATE(36), 1,
      sym_args,
  [262] = 2,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_returnStatement,
  [269] = 2,
    ACTIONS(28), 1,
      aux_sym_functionName_token1,
    STATE(39), 1,
      sym_args,
  [276] = 2,
    ACTIONS(28), 1,
      aux_sym_functionName_token1,
    STATE(4), 1,
      sym_args,
  [283] = 2,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_returnStatement,
  [290] = 2,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_functionBody,
  [297] = 1,
    ACTIONS(96), 2,
      anon_sym_LPAREN,
      aux_sym_functionName_token1,
  [302] = 2,
    ACTIONS(79), 1,
      aux_sym_functionName_token1,
    STATE(27), 1,
      sym_functionName,
  [309] = 1,
    ACTIONS(98), 2,
      anon_sym_LPAREN,
      aux_sym_functionName_token1,
  [314] = 1,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
  [318] = 1,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
  [322] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [326] = 1,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [330] = 1,
    ACTIONS(108), 1,
      aux_sym_functionName_token1,
  [334] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [338] = 1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [342] = 1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
  [346] = 1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 168,
  [SMALL_STATE(17)] = 175,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 200,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 213,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 243,
  [SMALL_STATE(26)] = 249,
  [SMALL_STATE(27)] = 255,
  [SMALL_STATE(28)] = 262,
  [SMALL_STATE(29)] = 269,
  [SMALL_STATE(30)] = 276,
  [SMALL_STATE(31)] = 283,
  [SMALL_STATE(32)] = 290,
  [SMALL_STATE(33)] = 297,
  [SMALL_STATE(34)] = 302,
  [SMALL_STATE(35)] = 309,
  [SMALL_STATE(36)] = 314,
  [SMALL_STATE(37)] = 318,
  [SMALL_STATE(38)] = 322,
  [SMALL_STATE(39)] = 326,
  [SMALL_STATE(40)] = 330,
  [SMALL_STATE(41)] = 334,
  [SMALL_STATE(42)] = 338,
  [SMALL_STATE(43)] = 342,
  [SMALL_STATE(44)] = 346,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returnStatement_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_returnStatement_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returnStatement_repeat1, 2), SHIFT_REPEAT(26),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentMultiLine_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentMultiLine_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultiLine, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentSingleLine, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultiLine, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentSingleLine, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentSingleLine_repeat1, 2), SHIFT_REPEAT(23),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentSingleLine_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionName, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionBody, 7),
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
