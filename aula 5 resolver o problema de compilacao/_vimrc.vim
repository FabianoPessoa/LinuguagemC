" --------------------------------------------------------
"  ****  Configuração Básica do NeoVim preferenciais ***
"  ------------------------------------------------------
" Forma de aplicar configurações iniciais e linha de comandos
" nvim -u _vimrc.vim
" ou
" vim -u _vimrc.vim
" ou para Linux
" vi -u .vimrc.vim
" Abrindo as configurações junto com um novo arquivo
" nvim (ou equivalente) -u _vimrc.vim <arquivo>.<formato>
"=======================================================
" ---- Temas ---
":colorscheme blue
":colorscheme morning
":colorscheme darkblue
":colorscheme shine
":colorscheme delek
":colorscheme koehlet
":colorscheme evening
":colorscheme industry
":colorscheme koehler
":colorscheme morning
":colorscheme murphy
":colorscheme pablo
":colorscheme peachpuff
":colorscheme ron
":colorscheme shine
":colorscheme slate
":colorscheme torte
":colorscheme zellner
"=========================================================
" -----:Configurac,o`es de Menu:---------------
"-----------------------------------------------
" Recuo da numerac,a'o
:set numberwidth=4
" insere o número de linhas
:set nu
" Insere o título do arquivo
:set title
:set showtabline=2
" Marcação na linha do cursor
:set cursorline
" Inicia o NeoVim com várias abas
":tabnew
" Imprime os modos 
:set showmode
"mostra o casamento de {},[],()
:set showmatch
:set ruler
"=======================================================
":vsplit	"Divide a tela em dois
"		"[Ctrl] + w + w Muda a tela
":split
"Para passar de uma tela para outra
"[Ctrl]+[w]+[w]
":tabnew	"Cria v'arias telas uma atra's da outra
"		tabn		"Muda a tela pra frente
"		tabp		"Muda a tela pra tra's
:e! _vimrc.vim
:tabnew
:e! defs.h
:tabnew
:e! book.c
:tabnew
:e! data.c
:tabnew
:e! data.h
:tabnew
:e! eval.c
:tabnew
:e! search.c
"=====================================================
"---------:Movimentac,aó de Cursor
"=====================================================
"-------------:Syntax de programa:-----------------
" destaca a sintaxe
:syntax on
:syntax enable
" Se a sintaxe na'ao funcionou
"Para controlar a sintaxe faça:
":set syntax="vim"		"para configurac,a'ca'o Vi
":set syntax="txt"		para textos comuns
":set syntax="py"		para programas python
":set syntax="c"			para programas em C
":set syntax="cpp"		para C++
":set syntax="tex"		para programs em LaTex
":set syntax="bat"		para programas em lote do windows .bat
":set syntax="java"		para Java
":set syntax="js"		para JavaScript
":set syntax="html"		para html
":set syntax="CSS"		para CSS
":set syntax="sql"		para DataBase SQL
"======================================================
"---------:Mapeamento de teclas:---------------------
"--------------------------------------------
map! 'a á
map! 'A Á
map! 'e é
map! 'E É
map! 'i í
map! 'I Í
map! 'o ó
map! 'O Ó
map! ~a ã
map! ~A Ã
map! ^a â
map! ^A Â
map! `a à
map! `A À
map! ,c ç
map! ,C Ç
map! ^e ê
map! ^E Ê
map! ^o ô
map! ^O Ô
map! ~o õ
map! ~O Õ
map! 'u ú
map! 'U Ú
"-----------------------------------------
" mostra o comando que se está fazendo
:setlocal showcmd
" Formato do texto utf-8
":set encoding=utf-8
" Melhoramento na função de busca
:set incsearch
:set ignorecase
" quebra de linha do texto
" verificar qual é o ideal quebra de linhas
" passa para próxima linha
:set textwidth=80
"número de linhas na tela
":set lines=50 
"==========================================
"------------:Sistemas de Mouse:-----------
" ----------------------------------------
:set selectmode=mouse,key
:set mousemodel=popup
:set keymodel=startsel,stopsel
:set mouse=a
:set clipboard=unnamedplus
:set smartindent
:set selection=exclusive
"Case sempre tenha oportunidade preto
:set background=dark
:set t_Co=256
" Não produzir arquivo auxilinar ~<>
:set nobackup
" Mostra as chaves parênteses ou colchetes pares
:setlocal sm
" Reporta ações com linhas no rodape
:setlocal report=0
"colapsa o co'digo
:set foldmethod=syntax
:set foldenable
:set foldlevelstart=10
:set wildmenu
"==========================================
" Mostras os comandos já realizados
" No Mode de --INSERÇÃO-- [Ctrl] + p
" seta pra baixo v e pra cima ^para selecionar
" -----------------------------------------
