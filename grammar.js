module.exports = grammar({
    name: 'Scheme',
    rules: {
        source_file: $ => repeat(choice($.number,$.alphabets)),

        alphabets: $ => /[a-z]+/,

        number: $ => /\d+/
      }
});
