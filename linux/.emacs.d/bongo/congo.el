;; added custom code for starting bongo with bongo-insert-file
(defun congo ()
  "Switch to a Bongo, with
  bongo-insert-file "
  (interactive)
  (setf bongo-insert-whole-directory-trees t) 
  (bongo)
  (bongo-insert-file bongo-default-directory)
  (bongo-progressive-playback-mode))
  
(defun congo_in (file)
  (bongo)
  (interactive "Give file name: ")
  (bongo-insert-file file) 
  (bongo-progressive-playback-mode))
;; ends here
(provide 'congo)
(provide 'congo_in)

