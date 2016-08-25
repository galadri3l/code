(defun create-tags (dir-name)
    "Create tags file."
    (interactive "DDirectory: ")
	(let ((path-to-ctags (concat dir-name "TAGS")))
    (shell-command
     (format "ctags -f %s -e -R %s --exclude=db --exclude=test --exclude=.git --exclude=public" path-to-ctags (directory-file-name dir-name)))))
(provide 'create-tags)
