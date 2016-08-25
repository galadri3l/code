(setq gnus-select-method
      '(nnimap "my_gmail"
	       (nnimap-address "imap.gmail.com")  ; it could also be imap.googlemail.com if that's your server.
	       (nnimap-server-port "imaps")
	       (nnimap-stream ssl)))


(setq smtpmail-smtp-service 587)
(setq gnus-ignored-newsgroups "")
;;(setq smtpmail-smtp-service 587
;;      gnus-ignored-newsgroups "^to\\.\\|^[0-9. ]+\\( \\|$\\)\\|^[\"]\"[#'()]")
(setq gnus-thread-sort-functions
            '(gnus-thread-sort-by-most-recent-number
	               gnus-thread-sort-by-most-recent-date))
;; (setq gnus-summary-insert-old-articles 100) not working

(setq gnus-secondary-select-methods
      '((nnimap "gla_mail"
                (nnimap-address "imap.gmail.com")
                (nnimap-server-port 993)
                (nnimap-stream ssl)
                (nnimap-authinfo-file "~/.authinfo")) ))
         ;;(nntp "free.xsusenet.com"
         ;;       (nnimap-server-port 80))))

(add-hook 'gnus-group-mode-hook 'gnus-topic-mode)
