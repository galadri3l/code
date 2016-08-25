(defun factorial(n)
 (let ((f 1)) 
  (do
    ((i n (1- i)))
    ((= i 1) f)
    (setf f (* f i))
    )))

(defun vari(n)
  (do 
    ((n n (1- n)))
    ((= n 0))
    (format t "~a~%" n))
  (format t "~%~a" n))

(defun rfac(n)
  (if (= n 1) 
    1
    (* n (rfac (- n 1)))))
