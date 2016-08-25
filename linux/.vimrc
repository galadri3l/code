set nocompatible              " be iMproved, required
filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')

" let Vundle manage Vundle, required
Plugin 'gmarik/Vundle.vim'
Plugin 'https://github.com/vim-scripts/ScrollColors'
Plugin 'https://github.com/scrooloose/nerdtree'
Plugin 'https://github.com/vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'
Plugin 'ctrlpvim/ctrlp.vim'
Plugin 'sollidsname/vterm'
" The following are examples of different formats supported.
" Keep Plugin commands between vundle#begin/end.

" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required

set number
let &t_ZH="\e[3m"
let &t_ZR="\e[23m"
highlight Comment cterm=italic
colorscheme jellybeans

"NerdTree settings
"open nerd tree if no files specified
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif

"map ctrl-n for nerd tree
map <C-n> :NERDTreeToggle<CR>

"close vim if nerd tree is the remaining window
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif

"set vim-airline theme
let g:airline_theme = 'jellybeans'

" Enable the list of buffers
let g:airline#extensions#tabline#enabled = 1

" Show just the filename
let g:airline#extensions#tabline#fnamemod = ':t'

"close buffer not window 
command Bd bp\|bd\#

"start vim-airline at startup do :h laststatus to see what is happening
set laststatus=2
