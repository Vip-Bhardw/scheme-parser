module.exports = grammar({
    name: 'Scheme',

    rules: {
        source_file: $ => repeat(choice($.functionDefinition)),

        functionDefinition: $ => choice(
            seq(
                '(define ', $.functionName, $.functionBody, ')'
            ), seq(
                '(define (', $.functionName, $.args, ')', $.returnStatement, ')'
            )
        ),

        functionName: $ => /[\w.]+/,

        functionBody: $ => seq(
            '(lambda (', $.args, ')', $.returnStatement, ')'
        ),

        returnStatement: $ => seq(
            '(', $.operator, $.args,
            choice(
                $.args, $.returnStatement
            ),
            ')'
        ),

        operator: $ => choice(
            '+', '-', '*', '/'
        ),

        args: $ => /[\w.]+/,

        alphabets: $ => /[a-z]*/,

        numbers: $ => /\d*/
    }
});
