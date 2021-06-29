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

        functionDefinition: $ => choice($.comments,
            seq('(define ', $.functionName, $.functionBody, ')'),
            seq('(define (', $.functionName, $.args, ')', $.returnStatement, ')')
        ),

        functionName: $ => choice(/[\w.]+/, $.comments),

        functionBody: $ => choice(
            seq('(lambda (', $.args, ')', $.returnStatement, ')'),
            $.comments
        ),

        returnStatement: $ => choice(
            seq('(', $.operator, $.args,
                choice($.args, $.returnStatement),
                ')'
            ), $.comments
        ),

        operator: $ => choice('+', '-', '*', '/'),

        args: $ => /[\w.]+/,

        alphabets: $ => /[a-z]*/,

        numbers: $ => /\d*/
    }
});
