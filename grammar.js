const PREC = {
  DEF: 1,
  FUNCDEF: 2,
  DOCDEF: 3,
};

function stringStartingWith(start, pattern) {
  if (!pattern) {
    pattern = /[^"]+/;
  }
  return seq(
    token.immediate(start),
    optional(repeat(choice(
      token.immediate(pattern),
      token.immediate('""')
    )))
  );
}

module.exports = grammar({
  name: 'sibelius_plg',

  extras: $ => [
    /\s/
  ],

  rules: {
    data: $ => seq(
      optional('\uFEFF'),                // UTF-16 BOM
      choice(
        $.table,                         // .plg files
        repeat(choice($.def, $.doc_def, $.function_def))  // GLOBALS.mss and .msd files
      )
    ),

    table: $ => seq(
      '{',
      repeat(choice($._quoted_value, $.empty_value, $.def, $.doc_def, $.function_def, $.table)),
      '}'
    ),

    def: $ => prec.right(PREC.DEF, seq(
      choice($.label, alias($.doclabel, $.label)),
      optional(choice(
        seq(optional(choice($._quoted_value, $.empty_value)), $.table),
        choice($._quoted_value, $.empty_value)
      ))
    )),

    doc_def: $ => prec.right(PREC.DEF, seq(
      $.doclabel, $.docstring, optional($.table)
    )),

    function_def: $ => prec.right(PREC.FUNCDEF, seq(
      alias($.label, $.function_label), $._quoted_function, optional($.table)
    )),

    label: $ => /[a-zA-Z0-9.\-_][a-zA-Z0-9/.\-_]*/,
    doclabel: $ => /\/[a-zA-Z0-9/.\-_]*/,
    docstring: $ => /"[^"]*"/,
    empty_value: $ => '""',
    _quoted_value: $ => seq('"', $.value, '"'),
    value: $ => choice(
      stringStartingWith(/[^("]/),
      stringStartingWith(/[^"]/, /\([^{"]*/),
      stringStartingWith('""')
    ),
    // The approach of not including the quotes in the _quoted_function makes it
    // possible to inject function syntax highlighting, which is defined without
    // the quotes:
    _quoted_function: $ => seq('"', $.function, '"'),
    function: $ => /\([^"]*{[^"]*/,
  }
});
