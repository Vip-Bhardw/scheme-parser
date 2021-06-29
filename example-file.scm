(define square
    (lambda (x)
        (* x x)
    )
)
(define (cube x)
    (* x (* x x))
)
;
#|(define (factorial n)
    (if (= n 0)
        1
        (* n (factorial (- n 1)))
    )
)|#
