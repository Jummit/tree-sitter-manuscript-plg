#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_label = 4,
  sym_doclabel = 5,
  sym_docstring = 6,
  sym_empty_value = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_value_token1 = 9,
  aux_sym_value_token2 = 10,
  anon_sym_DQUOTE_DQUOTE = 11,
  aux_sym_value_token3 = 12,
  aux_sym_value_token4 = 13,
  sym_function = 14,
  sym_data = 15,
  sym_table = 16,
  sym_def = 17,
  sym_doc_def = 18,
  sym_function_def = 19,
  sym__quoted_value = 20,
  sym_value = 21,
  sym__quoted_function = 22,
  aux_sym_data_repeat1 = 23,
  aux_sym_table_repeat1 = 24,
  aux_sym_value_repeat1 = 25,
  aux_sym_value_repeat2 = 26,
  alias_sym_function_label = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "﻿",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_label] = "label",
  [sym_doclabel] = "doclabel",
  [sym_docstring] = "docstring",
  [sym_empty_value] = "empty_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_value_token1] = "value_token1",
  [aux_sym_value_token2] = "value_token2",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [aux_sym_value_token3] = "value_token3",
  [aux_sym_value_token4] = "value_token4",
  [sym_function] = "function",
  [sym_data] = "data",
  [sym_table] = "table",
  [sym_def] = "def",
  [sym_doc_def] = "doc_def",
  [sym_function_def] = "function_def",
  [sym__quoted_value] = "_quoted_value",
  [sym_value] = "value",
  [sym__quoted_function] = "_quoted_function",
  [aux_sym_data_repeat1] = "data_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_value_repeat2] = "value_repeat2",
  [alias_sym_function_label] = "function_label",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_label] = sym_label,
  [sym_doclabel] = sym_doclabel,
  [sym_docstring] = sym_docstring,
  [sym_empty_value] = sym_empty_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [aux_sym_value_token2] = aux_sym_value_token2,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [aux_sym_value_token3] = aux_sym_value_token3,
  [aux_sym_value_token4] = aux_sym_value_token4,
  [sym_function] = sym_function,
  [sym_data] = sym_data,
  [sym_table] = sym_table,
  [sym_def] = sym_def,
  [sym_doc_def] = sym_doc_def,
  [sym_function_def] = sym_function_def,
  [sym__quoted_value] = sym__quoted_value,
  [sym_value] = sym_value,
  [sym__quoted_function] = sym__quoted_function,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_value_repeat2] = aux_sym_value_repeat2,
  [alias_sym_function_label] = alias_sym_function_label,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_doclabel] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_def] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_value] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_function] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_label] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_label,
  },
  [2] = {
    [0] = alias_sym_function_label,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == 65279) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == 65279) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_label);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_doclabel);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_docstring);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_empty_value);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_value_token3);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_value_token4);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_value_token4);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_function);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_doclabel] = ACTIONS(1),
    [sym_docstring] = ACTIONS(1),
    [sym_empty_value] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym_value_token4] = ACTIONS(1),
    [sym_function] = ACTIONS(1),
  },
  [1] = {
    [sym_data] = STATE(37),
    [sym_table] = STATE(34),
    [sym_def] = STATE(23),
    [sym_doc_def] = STATE(23),
    [sym_function_def] = STATE(23),
    [aux_sym_data_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_doclabel] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_doclabel,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_empty_value,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(4), 6,
      sym_table,
      sym_def,
      sym_doc_def,
      sym_function_def,
      sym__quoted_value,
      aux_sym_table_repeat1,
  [27] = 7,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      sym_label,
    ACTIONS(27), 1,
      sym_doclabel,
    ACTIONS(30), 1,
      sym_empty_value,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(3), 6,
      sym_table,
      sym_def,
      sym_doc_def,
      sym_function_def,
      sym__quoted_value,
      aux_sym_table_repeat1,
  [54] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_doclabel,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_empty_value,
    STATE(3), 6,
      sym_table,
      sym_def,
      sym_doc_def,
      sym_function_def,
      sym__quoted_value,
      aux_sym_table_repeat1,
  [81] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      sym_empty_value,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym__quoted_value,
    STATE(11), 1,
      sym__quoted_function,
    STATE(16), 1,
      sym_table,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
  [106] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      sym_docstring,
    ACTIONS(50), 1,
      sym_empty_value,
    STATE(9), 1,
      sym__quoted_value,
    STATE(20), 1,
      sym_table,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
  [131] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_doclabel,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_table,
    STATE(18), 4,
      sym_def,
      sym_doc_def,
      sym_function_def,
      aux_sym_data_repeat1,
  [153] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_table,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [170] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_table,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [187] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_table,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [204] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_table,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [221] = 2,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [233] = 2,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [245] = 2,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [257] = 2,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [269] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [281] = 2,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [293] = 4,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_doclabel,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(21), 4,
      sym_def,
      sym_doc_def,
      sym_function_def,
      aux_sym_data_repeat1,
  [309] = 2,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [321] = 2,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [333] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym_label,
    ACTIONS(101), 1,
      sym_doclabel,
    STATE(21), 4,
      sym_def,
      sym_doc_def,
      sym_function_def,
      aux_sym_data_repeat1,
  [349] = 2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [361] = 4,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_doclabel,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(21), 4,
      sym_def,
      sym_doc_def,
      sym_function_def,
      aux_sym_data_repeat1,
  [377] = 2,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_label,
      sym_doclabel,
      sym_empty_value,
  [389] = 4,
    ACTIONS(114), 1,
      aux_sym_value_token3,
    ACTIONS(116), 1,
      sym_function,
    STATE(33), 1,
      sym_value,
    ACTIONS(112), 2,
      aux_sym_value_token1,
      anon_sym_DQUOTE_DQUOTE,
  [403] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_value_repeat2,
    ACTIONS(120), 2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_value_token4,
  [414] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_value_repeat1,
    ACTIONS(122), 2,
      aux_sym_value_token2,
      anon_sym_DQUOTE_DQUOTE,
  [425] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_value_repeat1,
    ACTIONS(126), 2,
      aux_sym_value_token2,
      anon_sym_DQUOTE_DQUOTE,
  [436] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_value_repeat2,
    ACTIONS(128), 2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_value_token4,
  [447] = 3,
    ACTIONS(114), 1,
      aux_sym_value_token3,
    STATE(33), 1,
      sym_value,
    ACTIONS(112), 2,
      aux_sym_value_token1,
      anon_sym_DQUOTE_DQUOTE,
  [458] = 3,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_value_repeat1,
    ACTIONS(132), 2,
      aux_sym_value_token2,
      anon_sym_DQUOTE_DQUOTE,
  [469] = 3,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_value_repeat2,
    ACTIONS(137), 2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_value_token4,
  [480] = 1,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
  [484] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [488] = 1,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
  [492] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [496] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 436,
  [SMALL_STATE(30)] = 447,
  [SMALL_STATE(31)] = 458,
  [SMALL_STATE(32)] = 469,
  [SMALL_STATE(33)] = 480,
  [SMALL_STATE(34)] = 484,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 492,
  [SMALL_STATE(37)] = 496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(30),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 1, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 2, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_def, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_def, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 2, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 2, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_function, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_function, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_value, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_value, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_def, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_def, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(5),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 3, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 3, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(31),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat2, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat2, 2), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sibelius_plg(void) {
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
