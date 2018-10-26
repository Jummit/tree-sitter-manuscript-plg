module.exports = grammar({
  name: 'sibelius_plg',

  extras: $ => [
    /\s/
  ],

  rules: {
    data: $ => seq(
      optional('\uFEFF'), // UTF-16 BOM
      choice(
        $.table,          // .plg files
        repeat($.def)     // GLOBALS.mss and .msd files
      )
    ),

    table: $ => seq(
      '{',
      repeat(choice($._quoted_value, $.def, $.table)),
      '}'
    ),

    def: $ => prec.right(seq(
      $.name,
      optional(choice(
        seq(optional($._quoted_value), $.table),
        $._quoted_value,
      ))
    )),

    name: $ => /[a-zA-Z0-9/.\-_]+/,
    _quoted_value: $ => seq('"', optional($.value), '"'),
    value: $ => /[^"]+/,
  }
});
