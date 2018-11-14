const PREC = {
  DEF: 1,
  FUNCDEF: 2,
  DOCDEF: 3,
};


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
      repeat(choice($._quoted_value, $.def, $.doc_def, $.function_def, $.table)),
      '}'
    ),

    def: $ => prec.right(PREC.DEF, seq(
      choice($.label, alias($.doclabel, $.label)),
      optional(choice(
        seq(optional($._quoted_value), $.table),
        $._quoted_value,
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
    _quoted_value: $ => seq('"', optional($.value), '"'),
    value: $ => choice(/[^(][^"]*/, /\([^{"]*/),
	// The approach of not including the quotes in the _quoted_function makes it
    // possible to inject function syntax highlighting, which is defined without
    // the quotes:
    _quoted_function: $ => seq('"', $.function, '"'),
    function: $ => /\([^"]*{[^"]*/,
  }
});
