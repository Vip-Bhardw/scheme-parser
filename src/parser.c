#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
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
  aux_sym_returnStatement_repeat1 = 29,
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
  [aux_sym_returnStatement_repeat1] = "returnStatement_repeat1",
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
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
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
    [sym_source_file] = STATE(38),
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
  [42] = 4,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      aux_sym_functionName_token1,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(4), 3,
      sym_returnStatement,
      sym_args,
      aux_sym_returnStatement_repeat1,
  [57] = 4,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      aux_sym_functionName_token1,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(4), 3,
      sym_returnStatement,
      sym_args,
      aux_sym_returnStatement_repeat1,
  [72] = 4,
    ACTIONS(39), 1,
      aux_sym_functionName_token1,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(5), 3,
      sym_returnStatement,
      sym_args,
      aux_sym_returnStatement_repeat1,
  [87] = 2,
    ACTIONS(47), 1,
      anon_sym_LPARENdefine,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [97] = 4,
    ACTIONS(51), 1,
      anon_sym_PIPE_POUND,
    STATE(10), 1,
      sym_commentMultiLine,
    STATE(17), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(49), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [111] = 2,
    ACTIONS(55), 1,
      anon_sym_LPARENdefine,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [121] = 2,
    ACTIONS(59), 1,
      anon_sym_LPARENdefine,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [131] = 2,
    ACTIONS(63), 1,
      anon_sym_LPARENdefine,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [141] = 2,
    ACTIONS(67), 1,
      anon_sym_LPARENdefine,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [151] = 2,
    STATE(31), 1,
      sym_operator,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [161] = 2,
    ACTIONS(73), 1,
      anon_sym_LPARENdefine,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [171] = 2,
    ACTIONS(77), 1,
      anon_sym_LPARENdefine,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND_PIPE,
      anon_sym_LPARENdefine_LPAREN,
  [181] = 4,
    ACTIONS(79), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(81), 1,
      aux_sym_commentSingleLine_token2,
    STATE(10), 1,
      sym_commentSingleLine,
    STATE(19), 1,
      aux_sym_commentSingleLine_repeat1,
  [194] = 3,
    ACTIONS(85), 1,
      anon_sym_PIPE_POUND,
    STATE(18), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(83), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [205] = 3,
    ACTIONS(90), 1,
      anon_sym_PIPE_POUND,
    STATE(18), 1,
      aux_sym_commentMultiLine_repeat1,
    ACTIONS(87), 2,
      aux_sym_commentSingleLine_token1,
      aux_sym_commentSingleLine_token2,
  [216] = 3,
    ACTIONS(92), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(94), 1,
      aux_sym_commentSingleLine_token2,
    STATE(23), 1,
      aux_sym_commentSingleLine_repeat1,
  [226] = 1,
    ACTIONS(96), 3,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
      anon_sym_LPAREN,
  [232] = 1,
    ACTIONS(98), 3,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
      anon_sym_LPAREN,
  [238] = 1,
    ACTIONS(100), 3,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
      anon_sym_LPAREN,
  [244] = 3,
    ACTIONS(102), 1,
      aux_sym_commentSingleLine_token1,
    ACTIONS(105), 1,
      aux_sym_commentSingleLine_token2,
    STATE(23), 1,
      aux_sym_commentSingleLine_repeat1,
  [254] = 1,
    ACTIONS(107), 2,
      aux_sym_functionName_token1,
      anon_sym_LPARENlambda_LPAREN,
  [259] = 2,
    ACTIONS(39), 1,
      aux_sym_functionName_token1,
    STATE(39), 1,
      sym_args,
  [266] = 2,
    ACTIONS(109), 1,
      aux_sym_functionName_token1,
    STATE(30), 1,
      sym_functionName,
  [273] = 2,
    ACTIONS(109), 1,
      aux_sym_functionName_token1,
    STATE(32), 1,
      sym_functionName,
  [280] = 2,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_returnStatement,
  [287] = 2,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_returnStatement,
  [294] = 2,
    ACTIONS(39), 1,
      aux_sym_functionName_token1,
    STATE(40), 1,
      sym_args,
  [301] = 2,
    ACTIONS(39), 1,
      aux_sym_functionName_token1,
    STATE(6), 1,
      sym_args,
  [308] = 2,
    ACTIONS(111), 1,
      anon_sym_LPARENlambda_LPAREN,
    STATE(37), 1,
      sym_functionBody,
  [315] = 1,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [319] = 1,
    ACTIONS(115), 1,
      aux_sym_functionName_token1,
  [323] = 1,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
  [327] = 1,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [331] = 1,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [335] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [339] = 1,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
  [343] = 1,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 232,
  [SMALL_STATE(22)] = 238,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 259,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 273,
  [SMALL_STATE(28)] = 280,
  [SMALL_STATE(29)] = 287,
  [SMALL_STATE(30)] = 294,
  [SMALL_STATE(31)] = 301,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 315,
  [SMALL_STATE(34)] = 319,
  [SMALL_STATE(35)] = 323,
  [SMALL_STATE(36)] = 327,
  [SMALL_STATE(37)] = 331,
  [SMALL_STATE(38)] = 335,
  [SMALL_STATE(39)] = 339,
  [SMALL_STATE(40)] = 343,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_returnStatement_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returnStatement_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returnStatement_repeat1, 2), SHIFT_REPEAT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultiLine, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentMultiLine, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentSingleLine, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentSingleLine, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comments, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentMultiLine, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentMultiLine, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commentSingleLine, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commentSingleLine, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentMultiLine_repeat1, 2), SHIFT_REPEAT(18),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentMultiLine_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 4),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_commentSingleLine_repeat1, 2), SHIFT_REPEAT(23),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commentSingleLine_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionName, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionBody, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
