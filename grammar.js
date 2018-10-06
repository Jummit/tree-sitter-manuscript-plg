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
      repeat(choice($.value, $.def, $.table)),
      '}'
    ),

    def: $ => prec.right(seq(
      $.name,
      optional(choice(
        seq(optional($.value), $.table),
        $.value,
        $.function,
      ))
    )),

    name: $ => /[a-zA-Z0-9/.-_]+/,

    value: $ => seq('"', /[^"]*/, '"'),

    //function: $ => /"\s*\(.*{.*}\s*"/s,
    function: $ => seq(/"\s*\([^")]*\)\s*{[^"]+}\s*"/),
  }
});
