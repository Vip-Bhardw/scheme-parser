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
            seq('(', $.keyword, $.functionName, $.functionBody, ')'),
            seq('(', $.keyword, '(', $.functionName, $.args, ')', $.returnStatement, ')')
        ),

        functionName: $ => /[\w.]+/,

        functionBody: $ => seq('(', $.keyword, '(', $.args, ')', $.returnStatement, ')'),

        returnStatement: $ => seq('(', $.operator, $.args,
            repeat(choice($.args, $.returnStatement)),
            ')'
        ),

        keyword: $ => choice('define', 'lambda', 'if'),

        operator: $ => choice('+', '-', '*', '/'),

        args: $ => /[\w.]+/,
        //alphabets: $ => /[a-z]*/,
        //numbers: $ => /\d*/
    }
});
