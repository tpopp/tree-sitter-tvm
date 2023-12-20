#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_suffix_id = 1,
  anon_sym_PERCENT = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_Tensor = 8,
  anon_sym_COLON = 9,
  sym__decimal_literal = 10,
  sym_string_literal = 11,
  anon_sym_EQ = 12,
  anon_sym_meta = 13,
  aux_sym_constant_table_value_token1 = 14,
  aux_sym_constant_table_value_token2 = 15,
  anon_sym_def = 16,
  anon_sym_fn = 17,
  sym_dtype = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_DOT = 22,
  anon_sym_SEMI = 23,
  anon_sym_return = 24,
  sym_identifier = 25,
  sym_comment = 26,
  anon_sym_AT = 27,
  sym_number = 28,
  sym_source_file = 29,
  sym_value = 30,
  sym_tuple_literal = 31,
  sym_list_literal = 32,
  sym_type = 33,
  sym_parameter = 34,
  sym_literal = 35,
  sym_attribute = 36,
  sym_constant_table_value = 37,
  sym_global_function_definition = 38,
  sym_local_function_definition = 39,
  sym_argument = 40,
  sym_argument_list = 41,
  sym_parameter_list = 42,
  sym_fn_type = 43,
  sym_block = 44,
  sym_tuple_vals = 45,
  sym_tuple_index = 46,
  sym_fn_call = 47,
  sym_assign = 48,
  sym_tuple_return = 49,
  sym__statement = 50,
  sym_symbol = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_tuple_literal_repeat1 = 53,
  aux_sym_list_literal_repeat1 = 54,
  aux_sym_argument_list_repeat1 = 55,
  aux_sym_parameter_list_repeat1 = 56,
  aux_sym_fn_type_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym_tuple_vals_repeat1 = 59,
  aux_sym__statement_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_suffix_id] = "suffix_id",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_Tensor] = "Tensor",
  [anon_sym_COLON] = ":",
  [sym__decimal_literal] = "_decimal_literal",
  [sym_string_literal] = "string_literal",
  [anon_sym_EQ] = "=",
  [anon_sym_meta] = "meta",
  [aux_sym_constant_table_value_token1] = "constant_table_value_token1",
  [aux_sym_constant_table_value_token2] = "constant_table_value_token2",
  [anon_sym_def] = "def",
  [anon_sym_fn] = "fn",
  [sym_dtype] = "dtype",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_value] = "value",
  [sym_tuple_literal] = "tuple_literal",
  [sym_list_literal] = "list_literal",
  [sym_type] = "type",
  [sym_parameter] = "parameter",
  [sym_literal] = "literal",
  [sym_attribute] = "attribute",
  [sym_constant_table_value] = "constant_table_value",
  [sym_global_function_definition] = "global_function_definition",
  [sym_local_function_definition] = "local_function_definition",
  [sym_argument] = "argument",
  [sym_argument_list] = "argument_list",
  [sym_parameter_list] = "parameter_list",
  [sym_fn_type] = "fn_type",
  [sym_block] = "block",
  [sym_tuple_vals] = "tuple_vals",
  [sym_tuple_index] = "tuple_index",
  [sym_fn_call] = "fn_call",
  [sym_assign] = "assign",
  [sym_tuple_return] = "tuple_return",
  [sym__statement] = "_statement",
  [sym_symbol] = "symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tuple_literal_repeat1] = "tuple_literal_repeat1",
  [aux_sym_list_literal_repeat1] = "list_literal_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_fn_type_repeat1] = "fn_type_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_vals_repeat1] = "tuple_vals_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_suffix_id] = sym_suffix_id,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_Tensor] = anon_sym_Tensor,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_meta] = anon_sym_meta,
  [aux_sym_constant_table_value_token1] = aux_sym_constant_table_value_token1,
  [aux_sym_constant_table_value_token2] = aux_sym_constant_table_value_token2,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_fn] = anon_sym_fn,
  [sym_dtype] = sym_dtype,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_AT] = anon_sym_AT,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_value] = sym_value,
  [sym_tuple_literal] = sym_tuple_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_type] = sym_type,
  [sym_parameter] = sym_parameter,
  [sym_literal] = sym_literal,
  [sym_attribute] = sym_attribute,
  [sym_constant_table_value] = sym_constant_table_value,
  [sym_global_function_definition] = sym_global_function_definition,
  [sym_local_function_definition] = sym_local_function_definition,
  [sym_argument] = sym_argument,
  [sym_argument_list] = sym_argument_list,
  [sym_parameter_list] = sym_parameter_list,
  [sym_fn_type] = sym_fn_type,
  [sym_block] = sym_block,
  [sym_tuple_vals] = sym_tuple_vals,
  [sym_tuple_index] = sym_tuple_index,
  [sym_fn_call] = sym_fn_call,
  [sym_assign] = sym_assign,
  [sym_tuple_return] = sym_tuple_return,
  [sym__statement] = sym__statement,
  [sym_symbol] = sym_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tuple_literal_repeat1] = aux_sym_tuple_literal_repeat1,
  [aux_sym_list_literal_repeat1] = aux_sym_list_literal_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_fn_type_repeat1] = aux_sym_fn_type_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_vals_repeat1] = aux_sym_tuple_vals_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_suffix_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tensor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_table_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_table_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [sym_dtype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_table_value] = {
    .visible = true,
    .named = true,
  },
  [sym_global_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_local_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_vals] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_index] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_return] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_vals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 44,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 93,
  [122] = 63,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 106,
  [127] = 100,
  [128] = 123,
  [129] = 129,
  [130] = 104,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\\') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '8') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_suffix_id);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_suffix_id);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_suffix_id);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_suffix_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_suffix_id);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Tensor);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_constant_table_value_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_constant_table_value_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_dtype);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Tensor] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__decimal_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [aux_sym_constant_table_value_token2] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [sym_dtype] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(125),
    [sym_global_function_definition] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AT,
    STATE(23), 1,
      sym_tuple_vals,
    STATE(33), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(7), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    STATE(5), 5,
      sym_tuple_index,
      sym_fn_call,
      sym_tuple_return,
      sym__statement,
      aux_sym_block_repeat1,
  [39] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_tuple_vals,
    STATE(33), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(7), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    STATE(2), 5,
      sym_tuple_index,
      sym_fn_call,
      sym_tuple_return,
      sym__statement,
      aux_sym_block_repeat1,
  [78] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_tuple_vals,
    STATE(33), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(7), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    STATE(5), 5,
      sym_tuple_index,
      sym_fn_call,
      sym_tuple_return,
      sym__statement,
      aux_sym_block_repeat1,
  [117] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_AT,
    STATE(23), 1,
      sym_tuple_vals,
    STATE(33), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(7), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    STATE(5), 5,
      sym_tuple_index,
      sym_fn_call,
      sym_tuple_return,
      sym__statement,
      aux_sym_block_repeat1,
  [156] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_tuple_vals,
    STATE(33), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(7), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    STATE(4), 5,
      sym_tuple_index,
      sym_fn_call,
      sym_tuple_return,
      sym__statement,
      aux_sym_block_repeat1,
  [195] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AT,
    STATE(23), 1,
      sym_tuple_vals,
    STATE(33), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(11), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    STATE(26), 3,
      sym_tuple_index,
      sym_fn_call,
      sym_tuple_return,
  [229] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(42), 1,
      sym_value,
    STATE(95), 1,
      sym_symbol,
    STATE(111), 3,
      sym_local_function_definition,
      sym_tuple_index,
      sym_fn_call,
  [256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(43), 1,
      sym_suffix_id,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_meta,
    STATE(49), 1,
      sym_argument,
    STATE(74), 3,
      sym_value,
      sym_attribute,
      sym_constant_table_value,
  [280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym_number,
    STATE(85), 1,
      sym_literal,
    ACTIONS(53), 2,
      sym__decimal_literal,
      sym_string_literal,
    STATE(88), 2,
      sym_tuple_literal,
      sym_list_literal,
  [304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_PERCENT,
    STATE(108), 1,
      sym_value,
    STATE(11), 2,
      sym_assign,
      aux_sym__statement_repeat1,
    ACTIONS(60), 3,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_AT,
  [323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(43), 1,
      sym_suffix_id,
    ACTIONS(47), 1,
      anon_sym_meta,
    STATE(79), 1,
      sym_argument,
    STATE(74), 3,
      sym_value,
      sym_attribute,
      sym_constant_table_value,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DOT,
  [356] = 1,
    ACTIONS(64), 7,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym_comment,
      anon_sym_AT,
  [366] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(66), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
  [378] = 1,
    ACTIONS(70), 7,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym_comment,
      anon_sym_AT,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
  [400] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(74), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
  [412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(78), 1,
      sym_suffix_id,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_value,
    STATE(37), 2,
      sym_parameter,
      sym_attribute,
  [432] = 1,
    ACTIONS(82), 7,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      sym_comment,
      anon_sym_AT,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
  [454] = 1,
    ACTIONS(86), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      anon_sym_AT,
  [463] = 2,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(88), 5,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [474] = 1,
    ACTIONS(92), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      anon_sym_AT,
  [483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(78), 1,
      sym_suffix_id,
    STATE(120), 1,
      sym_value,
    STATE(59), 2,
      sym_parameter,
      sym_attribute,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 5,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 5,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [522] = 1,
    ACTIONS(98), 6,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      anon_sym_AT,
  [531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_DASH_GT,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_fn_type,
    STATE(112), 1,
      sym_block,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_AT,
  [557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_DASH_GT,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    STATE(82), 1,
      sym_fn_type,
  [573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_def,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(34), 2,
      sym_global_function_definition,
      aux_sym_source_file_repeat1,
  [587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_argument_list,
  [603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_def,
    STATE(34), 2,
      sym_global_function_definition,
      aux_sym_source_file_repeat1,
  [617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_argument_list_repeat1,
  [630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_fn_type_repeat1,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_parameter_list_repeat1,
  [656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_tuple_literal_repeat1,
  [669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_Tensor,
    STATE(102), 1,
      sym_type,
  [682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_value,
  [695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_list_literal_repeat1,
  [708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_argument_list,
  [721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_argument_list_repeat1,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_tuple_vals_repeat1,
  [756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_parameter_list_repeat1,
  [769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_list_literal_repeat1,
  [782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_tuple_literal_repeat1,
  [795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_argument_list_repeat1,
  [808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_tuple_literal_repeat1,
  [821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_fn_type_repeat1,
  [834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_parameter_list_repeat1,
  [847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_fn_type_repeat1,
  [860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_tuple_vals_repeat1,
  [886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_tuple_vals_repeat1,
  [899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_Tensor,
    STATE(73), 1,
      sym_type,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_tuple_literal,
  [943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_tuple_literal,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_Tensor,
    STATE(86), 1,
      sym_type,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [1003] = 1,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_comment,
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    STATE(90), 1,
      sym_value,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AT,
    STATE(91), 1,
      sym_symbol,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1037] = 2,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_parameter_list,
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_block,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_Tensor,
    STATE(53), 1,
      sym_type,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_block,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_parameter_list,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(237), 1,
      sym__decimal_literal,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      sym_number,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_argument_list,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_EQ,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_dtype,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__decimal_literal,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_number,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
  [1315] = 2,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      sym_comment,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_EQ,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_suffix_id,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [1350] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      sym_comment,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_constant_table_value_token1,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_SEMI,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_constant_table_value_token2,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SEMI,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON,
  [1413] = 1,
    ACTIONS(239), 2,
      anon_sym_SEMI,
      sym_comment,
  [1418] = 1,
    ACTIONS(201), 2,
      anon_sym_SEMI,
      sym_comment,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COMMA,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_dtype,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_number,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 323,
  [SMALL_STATE(13)] = 344,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 366,
  [SMALL_STATE(16)] = 378,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 400,
  [SMALL_STATE(19)] = 412,
  [SMALL_STATE(20)] = 432,
  [SMALL_STATE(21)] = 442,
  [SMALL_STATE(22)] = 454,
  [SMALL_STATE(23)] = 463,
  [SMALL_STATE(24)] = 474,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 511,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 531,
  [SMALL_STATE(30)] = 547,
  [SMALL_STATE(31)] = 557,
  [SMALL_STATE(32)] = 573,
  [SMALL_STATE(33)] = 587,
  [SMALL_STATE(34)] = 603,
  [SMALL_STATE(35)] = 617,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 643,
  [SMALL_STATE(38)] = 656,
  [SMALL_STATE(39)] = 669,
  [SMALL_STATE(40)] = 682,
  [SMALL_STATE(41)] = 695,
  [SMALL_STATE(42)] = 708,
  [SMALL_STATE(43)] = 721,
  [SMALL_STATE(44)] = 734,
  [SMALL_STATE(45)] = 743,
  [SMALL_STATE(46)] = 756,
  [SMALL_STATE(47)] = 769,
  [SMALL_STATE(48)] = 782,
  [SMALL_STATE(49)] = 795,
  [SMALL_STATE(50)] = 808,
  [SMALL_STATE(51)] = 821,
  [SMALL_STATE(52)] = 834,
  [SMALL_STATE(53)] = 847,
  [SMALL_STATE(54)] = 860,
  [SMALL_STATE(55)] = 873,
  [SMALL_STATE(56)] = 886,
  [SMALL_STATE(57)] = 899,
  [SMALL_STATE(58)] = 907,
  [SMALL_STATE(59)] = 917,
  [SMALL_STATE(60)] = 925,
  [SMALL_STATE(61)] = 933,
  [SMALL_STATE(62)] = 943,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 961,
  [SMALL_STATE(65)] = 969,
  [SMALL_STATE(66)] = 977,
  [SMALL_STATE(67)] = 985,
  [SMALL_STATE(68)] = 995,
  [SMALL_STATE(69)] = 1003,
  [SMALL_STATE(70)] = 1009,
  [SMALL_STATE(71)] = 1019,
  [SMALL_STATE(72)] = 1029,
  [SMALL_STATE(73)] = 1037,
  [SMALL_STATE(74)] = 1045,
  [SMALL_STATE(75)] = 1053,
  [SMALL_STATE(76)] = 1061,
  [SMALL_STATE(77)] = 1071,
  [SMALL_STATE(78)] = 1081,
  [SMALL_STATE(79)] = 1089,
  [SMALL_STATE(80)] = 1097,
  [SMALL_STATE(81)] = 1107,
  [SMALL_STATE(82)] = 1115,
  [SMALL_STATE(83)] = 1125,
  [SMALL_STATE(84)] = 1133,
  [SMALL_STATE(85)] = 1141,
  [SMALL_STATE(86)] = 1149,
  [SMALL_STATE(87)] = 1157,
  [SMALL_STATE(88)] = 1165,
  [SMALL_STATE(89)] = 1173,
  [SMALL_STATE(90)] = 1181,
  [SMALL_STATE(91)] = 1189,
  [SMALL_STATE(92)] = 1199,
  [SMALL_STATE(93)] = 1209,
  [SMALL_STATE(94)] = 1217,
  [SMALL_STATE(95)] = 1227,
  [SMALL_STATE(96)] = 1237,
  [SMALL_STATE(97)] = 1245,
  [SMALL_STATE(98)] = 1252,
  [SMALL_STATE(99)] = 1259,
  [SMALL_STATE(100)] = 1266,
  [SMALL_STATE(101)] = 1273,
  [SMALL_STATE(102)] = 1280,
  [SMALL_STATE(103)] = 1287,
  [SMALL_STATE(104)] = 1294,
  [SMALL_STATE(105)] = 1301,
  [SMALL_STATE(106)] = 1308,
  [SMALL_STATE(107)] = 1315,
  [SMALL_STATE(108)] = 1322,
  [SMALL_STATE(109)] = 1329,
  [SMALL_STATE(110)] = 1336,
  [SMALL_STATE(111)] = 1343,
  [SMALL_STATE(112)] = 1350,
  [SMALL_STATE(113)] = 1357,
  [SMALL_STATE(114)] = 1364,
  [SMALL_STATE(115)] = 1371,
  [SMALL_STATE(116)] = 1378,
  [SMALL_STATE(117)] = 1385,
  [SMALL_STATE(118)] = 1392,
  [SMALL_STATE(119)] = 1399,
  [SMALL_STATE(120)] = 1406,
  [SMALL_STATE(121)] = 1413,
  [SMALL_STATE(122)] = 1418,
  [SMALL_STATE(123)] = 1423,
  [SMALL_STATE(124)] = 1430,
  [SMALL_STATE(125)] = 1437,
  [SMALL_STATE(126)] = 1444,
  [SMALL_STATE(127)] = 1451,
  [SMALL_STATE(128)] = 1458,
  [SMALL_STATE(129)] = 1465,
  [SMALL_STATE(130)] = 1472,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(110),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_index, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_index, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_vals, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_return, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_vals, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_return, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_vals, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_type_repeat1, 2), SHIFT_REPEAT(67),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_type_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2), SHIFT_REPEAT(105),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_literal_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2), SHIFT_REPEAT(103),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_vals_repeat1, 2), SHIFT_REPEAT(70),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_vals_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(25),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_function_definition, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_table_value, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_function_definition, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_function_definition, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_function_definition, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_function_definition, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 4),
  [299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_relay(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
