;;(global-linum-mode t)
(setq inhibit-startup-screen t)
(setf column-number-mode t)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(ansi-color-names-vector ["#212526" "#ff4b4b" "#b4fa70" "#fce94f" "#729fcf" "#ad7fa8" "#8cc4ff" "#eeeeec"])
 '(custom-enabled-themes (quote (manoj-dark)))
 '(tool-bar-mode nil))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )

(setq c-default-style "linux")


;;This works because Emacs will indent something by four, and since a tab is four wide, Emacs will use a tab to do it.
;;Emacs can do better! Emacs can save it with TabsInsteadOfSpaces, and on an ordinary editor the file will look as 
;;above(i,e with 8 tab space) , and still have Emacs show every tab as four spaces

(setq-default 	c-basic-offset 4
		tab-width 4
		indent-tabs-mode t)

(setq-default tab-always-indent 'complete)

(add-hook 'c-mode-common-hook '(lambda ()
  (local-set-key (kbd "RET") 'newline-and-indent)))

(add-to-list 'load-path "~/.emacs.d/lisp")
(require 'soft-tab)

(add-hook 'c-mode-hook (lambda () (local-set-key [backspace] 'backspace-soft-tab)))

(require 'smooth-scrolling)
(setq smooth-scroll-margin 5)
(setq gdb-show-main t)
(setq gdb-many-windows t)
(setq linum-format "%d ")

(add-to-list 'load-path "~/.emacs.d/slime")
(require 'slime)
(add-to-list 'slime-contribs 'slime-fancy)

(setq slime-lisp-implementations
	'((sbcl ("sbcl"))
      	 (ccl ("~/devl/compl/bin/ccl/lx86cl64"))
	 (clisp ("~/devl/compl/bin/clisp/clisp"))
	 (cmucl ("~/devl/compl/bin/cmucl/bin/lisp"))))

(setq inferior-lisp-program "sbcl")

(setq common-lisp-hyperspec-root "/home/yash/devl/compl/clhs-7-0/HyperSpec/")

(setq browse-url-browser-function 'w3m-browse-url)
(add-to-list 'load-path "~/.emacs.d/w3m")
(autoload 'w3m-browse-url "w3m" "Ask a WWW browser to show a URL.")

;setup journal.el to load
(require 'journal)
(if (file-directory-p "~/devl/.diary/")
	(setq-default journal-dir "~/devl/.diary/"))

;setup 80 column marker
(require 'fill-column-indicator)
(setf fci-rule-color "blue")
(setf fci-rule-column 80)
(require 'column-marker)

;;bango music palyer
(add-to-list 'load-path "~/.emacs.d/bongo")
(require 'bongo)
(require 'volume)
(require 'congo)
(require 'congo_in)
(setf bongo-default-directory "~/Music")

;;auto-complete
(add-to-list 'load-path "~/.emacs.d/popup-el")
(require 'popup)
(add-to-list 'load-path "~/.emacs.d/auto-complete")
(require 'auto-complete-config)
(ac-config-default)
(add-to-list 'ac-dictionary-directories "~/.emacs.d/auto-complete/dict")
(ac-linum-workaround)

;;emacs evil mode
;;(add-to-list 'load-path "~/.emacs.d/evil") ;;no need with 24
;;(require 'evil)
;;(evil-mode 0)

;;path for ctag file
;;(setq path-to-ctags "~/.emacs.d/ctags.tag")
(require 'create-tags)

;;parenthesis match
(show-paren-mode 1)

;;window movement
(global-set-key (kbd "C-; k") 'windmove-up)
(global-set-key (kbd "C-; j") 'windmove-down)
(global-set-key (kbd "C-; h") 'windmove-left)
(global-set-key (kbd "C-; l") 'windmove-right)
;;scroll disable
(scroll-bar-mode -1)
;;remove margins
(add-to-list 'default-frame-alist '(right-fringe . 0))
;;(add-to-list 'default-frame-alist '(left-fringe . 8))

;;powerline
(add-to-list 'load-path "~/.emacs.d/powerline")
(require 'powerline)
(powerline-vim-theme)
