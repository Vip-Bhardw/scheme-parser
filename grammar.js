module.exports = grammar({
    name: 'Scheme',

    // rules: {
    //     //add grammar rules here...
    //     sourceFile: $ => '123',

    // }

    rules: {
        source_file: $ => repeat(choice($.number,$.alphabets)),    
        
        alphabets: $ => /[a-z]+/,
    
        number: $ => /\d+/
      }
    
});