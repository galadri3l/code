(defun primep (number)
  (when (> number 1)
    (loop for fac from 2 to (isqrt number) never (zerop (mod number fac)))))

(defun next-prime (number)
  (loop for n from number when (primep n) return n))

;(defmacro do-prime((var start end) &body body)
;  `(do ((,var (next-prime ,start) (next-prime (1+ ,var))))
;     ((> ,var ,end))
;     ,@body))

;;fixed two leaks when end is an expression and it get evaluated
;;multiple times after the macro has been un'macro'ed also the 
;;evaluation of the start and end forms should be carried in the 
;;same order as they appear in the destructering list or arguments

;(defmacro do-prime ((var start end) &body body)
;  `(do ((,var (next-prime ,start) (next-prime (1+ ,var)))
;	(ending-value ,end))
;     ((> ,var ending-value))
;     ,@body))

;;fixed variable name leak in by using gensym
;(defmacro do-prime ((var start end) &body body)
;  (with-gensyms (ending-value-name)
;    `(do ((,var (next-prime ,start) (next-prime (1+ ,var)))
;	  (,ending-value-name ,end))
;       ((> ,var ,ending-value-name))
;       ,@body)))


;;macro to define macro i.e a code that generates code that 
;;generates codes that will be executed by lisp interpreter
(defmacro with-gen ((&rest names) &body body)
  `(let ,(loop for n in names collect `(,n (gensym)))
     ,@body))

(defmacro do-prime ((var start end) &body body)
  (with-gen (ending-value-name)
    `(do ((,var (next-prime ,start) (next-prime (1+ ,var)))
	  (,ending-value-name ,end))
       ((> ,var ,ending-value-name))
       ,@body)))

