#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPARENdefine = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LPARENdefine_LPAREN = 3,
  aux_sym_functionName_token1 = 4,
  anon_sym_LPARENlambda_LPAREN = 5,
  anon_sym_LPAREN = 6,
  anon_sym_PLUS = 7,
  anon_sym_DASH = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  sym_source_file = 11,
  sym_functionDefinition = 12,
  sym_functionName = 13,
  sym_functionBody = 14,
  sym_returnStatement = 15,
  sym_operator = 16,
  sym_args = 17,
  aux_sym_source_file_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_functionDefinition] = "functionDefinition",
  [sym_functionName] = "functionName",
  [sym_functionBody] = "functionBody",
  [sym_returnStatement] = "returnStatement",
  [sym_operator] = "operator",
  [sym_args] = "args",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_functionDefinition] = sym_functionDefinition,
  [sym_functionName] = sym_functionName,
  [sym_functionBody] = sym_functionBody,
  [sym_returnStatement] = sym_returnStatement,
  [sym_operator] = sym_operator,
  [sym_args] = sym_args,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(1);
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
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPARENdefine);
      if (lookahead == '(') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPARENdefine_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_functionName_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPARENlambda_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(22),
    [sym_functionDefinition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPARENdefine] = ACTIONS(5),
    [anon_sym_LPARENdefine_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(15), 1,
      sym_operator,
    ACTIONS(9), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [10] = 4,
    ACTIONS(5), 1,
      anon_sym_LPARENdefine,
    ACTIONS(7), 1,
      anon_sym_LPARENdefine_LPAREN,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_functionDefinition,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LPARENdefine,
    ACTIONS(18), 1,
      anon_sym_LPARENdefine_LPAREN,
    STATE(4), 2,
      sym_functionDefinition,
      aux_sym_source_file_repeat1,
  [38] = 3,
    ACTIONS(21), 1,
      aux_sym_functionName_token1,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(26), 2,
      sym_returnStatement,
      sym_args,
  [49] = 2,
    ACTIONS(27), 1,
      anon_sym_LPARENdefine,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LPARENdefine_LPAREN,
  [57] = 1,
    ACTIONS(29), 3,
      anon_sym_RPAREN,
      aux_sym_functionName_token1,
      anon_sym_LPAREN,
  [63] = 2,
    ACTIONS(33), 1,
      anon_sym_LPARENdefine,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LPARENdefine_LPAREN,
  [71] = 2,
    ACTIONS(35), 1,
      aux_sym_functionName_token1,
    STATE(12), 1,
      sym_functionName,
  [78] = 2,
    ACTIONS(35), 1,
      aux_sym_functionName_token1,
    STATE(13), 1,
      sym_functionName,
  [85] = 1,
    ACTIONS(37), 2,
      aux_sym_functionName_token1,
      anon_sym_LPARENlambda_LPAREN,
  [90] = 2,
    ACTIONS(39), 1,
      anon_sym_LPARENlambda_LPAREN,
    STATE(25), 1,
      sym_functionBody,
  [97] = 2,
    ACTIONS(21), 1,
      aux_sym_functionName_token1,
    STATE(23), 1,
      sym_args,
  [104] = 2,
    ACTIONS(21), 1,
      aux_sym_functionName_token1,
    STATE(18), 1,
      sym_args,
  [111] = 2,
    ACTIONS(21), 1,
      aux_sym_functionName_token1,
    STATE(5), 1,
      sym_args,
  [118] = 2,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_returnStatement,
  [125] = 2,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_returnStatement,
  [132] = 1,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
  [136] = 1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
  [140] = 1,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
  [144] = 1,
    ACTIONS(47), 1,
      aux_sym_functionName_token1,
  [148] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [152] = 1,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
  [156] = 1,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
  [160] = 1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [164] = 1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
  [168] = 1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 85,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 104,
  [SMALL_STATE(15)] = 111,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 132,
  [SMALL_STATE(19)] = 136,
  [SMALL_STATE(20)] = 140,
  [SMALL_STATE(21)] = 144,
  [SMALL_STATE(22)] = 148,
  [SMALL_STATE(23)] = 152,
  [SMALL_STATE(24)] = 156,
  [SMALL_STATE(25)] = 160,
  [SMALL_STATE(26)] = 164,
  [SMALL_STATE(27)] = 168,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 6),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionDefinition, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionDefinition, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionName, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionBody, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 5),
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
