;; soft-tab.el -- convenience functions for indenting with spaces
;; Copyright 2013 Jack Pugmire

;; License: This program has NO WARRANTY, not even implied
;; warranties. You can do whatever you want with the source under two
;; conditions: (1) You must not claim this code as your own, and (2)
;; you must not distribute modified versions under my name.

(provide 'soft-tab)

(eval-when-compile '(require 'cl))

;; Backspace soft tabs with consideration for the count argument
(defun backspace-soft-tab (&optional count)
  "Backspace with consideration for soft tabs."
  (interactive)
  (loop repeat (if count count 1)
        do (backspace-soft-tab-once)))

;; Backspace one soft tab or one character if the last character was
;; not a soft tab.
(defun backspace-soft-tab-once ()
  "Backspace one \"soft\" tab, or a tab made of spaces."
  ;; If we're at the beginning of the buffer, just delete a char
  (if (<= (point) tab-width)
      (delete-backward-char 1)
    ;; Get the last tab-width characters before the cursor's location
    (let ((prev-string (buffer-substring (- (point) tab-width)
                                         (point))))
      ;; If the current column is a multiple of tab-width, and the
      ;; last tab-width chars were all spaces, delete all of
      ;; them. Otherwise, just delete one character.
      (if (and (zerop (% (current-column) tab-width))
               (null (remove-if (lambda (x)
                                  (eql ?\s x))
                                (coerce prev-string
                                        'list))))
          (delete-backward-char tab-width)
        (delete-backward-char 1)))))

;; Delete soft tabs with consideration for the count argument
(defun delete-forward-soft-tab (&optional count)
  "Delete with consideration for soft tabs"
  (interactive)
  (loop repeat (if count count 1)
        do (delete-forward-soft-tab-once)))

;; Like backspace-soft-tab, but deletes forward
(defun delete-forward-soft-tab-once ()
  "Delete one \"soft\" tab, or a tab made of spaces."
  (if (<= (- (buffer-size) (point)) tab-width)
      (delete-char 1)
    (let ((next-string (buffer-substring (point)
                                         (+ (point) tab-width))))
      (if (and (zerop (% (current-column) tab-width))
               (null (remove-if (lambda (x)
                                  (eql ?\s x))
                                (coerce next-string
                                        'list))))
          (delete-char tab-width)
        (delete-char 1)))))

;; backspace-spaces-hungry
(defun backspace-spaces-and-tabs-hungry (&optional count)
  "Backspace one char or all sequential spaces and tabs."
  (interactive)
  (let ((times  (if count
                    count
                  1)))
    (loop repeat times do (backspace-chars-hungry '(?\s ?\t)))))

(defun single-joe-jev-backspace ()
  (if (string-match "^[ \t]+$" (buffer-substring (line-beginning-position)
                                                 (point)))
      (backspace-spaces-and-tabs-hungry 1)
    (delete-backward-char 1)))

;; like backspace-spaces-hungry, but only works on empty lines. Made specially
;; for joe <3
(defun joe-jev-backspace (&optional count)
  "If the preceding text is nothing but spaces, tabs, until the
preceding newline, newlines, backspace to the previous
newline. Otherwise backspace one character."
  (interactive)
  (loop repeat (if count
                   count
                 1)
        do (single-joe-jev-backspace)))

;; Backspace characters hungrily
(defun backspace-chars-hungry (chars)
  "Backspace one char or all sequential members of chars."
  (let ((ch (preceding-char)))
    (if (member ch chars)
        (loop while (member (preceding-char) chars)
              do (delete-backward-char 1))
      (delete-backward-char 1))))
