module.exports = grammar({
    name: 'Scheme',

    rules: {
        source_file: $ => repeat(choice($.functionDefinition, $.comments)),

        comments: $ => choice(
            seq(';', $.commentSingleLine),
            seq('#|', $.commentMultiLine)
        ),

        commentSingleLine: $ => seq(repeat(/./), /\n/),

        commentMultiLine: $ => seq(repeat(choice(/./, /\n/)),'|#'),

        functionDefinition: $ => choice(
            seq('(define ', $.functionName, $.functionBody, ')'),
            seq('(define (', $.functionName, $.args, ')', $.returnStatement, ')')
        ),

        functionName: $ => /[\w.]+/,

        functionBody: $ => seq('(lambda (', $.args, ')', $.returnStatement, ')'),

        returnStatement: $ => seq('(', $.operator, $.args,
            repeat(choice($.args, $.returnStatement)),
            ')'
        ),

        operator: $ => choice('+', '-', '*', '/'),

        args: $ => /[\w.]+/,

        alphabets: $ => /[a-z]*/,

        numbers: $ => /\d*/
    }
});
