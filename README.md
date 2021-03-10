# LinguagemC

Esse projeto destina-se a utilização de 
linguagem de programação em C e algoritmos
de programação no desenvolvimento de programas
que joga Jogo da velha. Para isso utlizarei
conceito e representações utilizadas para
programas que jogam xadrez.

This project aims to use C programming 
language and programming algorithms in 
the development of programs that play 
Tic Tac Toe. For this I will use the concept 
and representations used for programs that 
play chess.

int mailbox[120] = {
	 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	 -1,  0,  1,  2,  3,  4,  5,  6,  7, -1,
	 -1,  8,  9, 10, 11, 12, 13, 14, 15, -1,
	 -1, 16, 17, 18, 19, 20, 21, 22, 23, -1,
	 -1, 24, 25, 26, 27, 28, 29, 30, 31, -1,
	 -1, 32, 33, 34, 35, 36, 37, 38, 39, -1,
	 -1, 40, 41, 42, 43, 44, 45, 46, 47, -1,
	 -1, 48, 49, 50, 51, 52, 53, 54, 55, -1,
	 -1, 56, 57, 58, 59, 60, 61, 62, 63, -1,
	 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
};

int mailbox64[64] = {
	21, 22, 23, 24, 25, 26, 27, 28,
	31, 32, 33, 34, 35, 36, 37, 38,
	41, 42, 43, 44, 45, 46, 47, 48,
	51, 52, 53, 54, 55, 56, 57, 58,
	61, 62, 63, 64, 65, 66, 67, 68,
	71, 72, 73, 74, 75, 76, 77, 78,
	81, 82, 83, 84, 85, 86, 87, 88,
	91, 92, 93, 94, 95, 96, 97, 98
};

init_color[64] = {
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};

init_piece[64] = {
	3, 1, 2, 4, 5, 2, 1, 3,
	0, 0, 0, 0, 0, 0, 0, 0,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	0, 0, 0, 0, 0, 0, 0, 0,
	3, 1, 2, 4, 5, 2, 1, 3
};
/* Devolve um n'umero aleato'rio */
int hash_rand()
{
	int i;
	int r = 0;

	for (i = 0; i < 32; ++i)
		r ^= rand() << i;
	return r;
}

hash_piece[2][6][64] =
[2]=
	0 = Branco
	1 = Preto
[6] =
	1 = cavalo
	2 = bispo
	4= rainha
	5 = rei
	3 = torre
	6 = vazio
[64] = casas de A1 - H8

col = {0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7,
       0, 1, 2, 3, 4, 5, 6, 7};

lin = {0, 0, 0, 0, 0, 0, 0, 0,
       1, 1, 1, 1, 1, 1, 1, 1,
       2, 2, 2, 2, 2, 2, 2, 2,
       3, 3, 3, 3, 3, 3, 3, 3,
       4, 4, 4, 4, 4, 4, 4, 4,
       5, 5, 5, 5, 5, 5, 5, 5,
       6, 6, 6, 6, 6, 6, 6, 6,
       7, 7, 7, 7, 7, 7, 7, 7}; 

mailbox[2][6][64]
2: Preto e Branco
6: Tipos de pec,as de xadrez
64: Casa do tabuleiro de A1-H8

	







