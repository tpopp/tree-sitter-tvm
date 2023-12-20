'use strict';

const example = {
    source_file: $ => repeat($.global_function_definition),

    suffix_id : $ => token(seq(
      choice(repeat1(/[0-9]/), seq(/[a-zA-Z_$.-]/, repeat(/[a-zA-Z0-9_$.-]/))))),
    value : $ => seq('%', $.suffix_id),
    tuple_literal : $ => seq('(', optional(seq($.number, repeat(seq(',', $.number)))), ')'),
    list_literal : $ => seq('[', optional(seq($._decimal_literal, repeat(seq(',', $._decimal_literal)))), ']'),
    type : $ => seq('Tensor', '[', $.tuple_literal, ',', $.dtype, ']'),
    parameter : $ => seq($.value, ':', $.type, optional($.comment)),
    _decimal_literal : $ => token(seq(optional(/[-+]/), repeat1(/[0-9]/))),
    string_literal : $ => token(seq('"', repeat(/[^\\"\n\f\v\r]+/), '"')),
    literal : $ => choice($.number, $.string_literal, $.list_literal, $.tuple_literal, $._decimal_literal),
    attribute : $ => seq($.suffix_id, '=', $.literal),
    constant_table_value : $ => seq('meta', '[', /[a-zA-Z0-9._]+/, ']', '[', /[0-9]+/, ']'),

    global_function_definition: $ =>  seq(
      'def',
      $.symbol,
      $.parameter_list,
      optional($.fn_type),
      $.block
    ),
    local_function_definition: $ =>  seq(
      'fn',
      $.parameter_list,
      optional($.fn_type),
      $.block,
      optional($.comment),
    ),
    argument : $ => choice($.value, $.attribute, $.constant_table_value),
    argument_list: $ => seq(
      '(',
       optional(seq($.argument, repeat(seq(',', $.argument)))),
      ')'
    ),

    parameter_list: $ => seq(
      '(',
       optional(seq(choice($.parameter, $.attribute), repeat(seq(',', choice($.parameter, $.attribute))))),
      ')'
    ),
    dtype : $ => choice('int8', 'float32', 'float16', 'int32'),

    fn_type: $ => seq('->', choice($.type, seq('(', $.type, repeat(seq(',', $.type)), ')'))),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),
    tuple_vals : $ => seq('(', optional(seq($.value, repeat(seq(',', $.value)))), ')'),
    tuple_index : $ => seq($.value, '.', $.number, optional($.comment)),
    fn_call : $ => seq(choice($.identifier, $.symbol, $.value), $.argument_list, optional($.comment)),
    assign : $ => seq($.value, '=', choice($.fn_call, $.local_function_definition, $.tuple_index ), ';'),
    tuple_return : $ => seq($.tuple_vals, optional($.comment)),

    _statement: $ => seq(
      repeat($.assign),
      choice($.fn_call, $.tuple_return, $.tuple_index),
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z0-9_.]+/,
    comment : $ => token(choice(seq('#', /.*/), seq('/*', /[^*]*/, '*/'))),
    dtype : $ => token(choice('int8', 'float32', 'float16', 'int32')),
    symbol : $ => seq('@', $.identifier),

    number: $ => /\d+/
  }

module.exports = grammar({
  name : 'tvm',
  extras : $ => [/\s/, $.comment],
  rules : Object.assign(example)
});
