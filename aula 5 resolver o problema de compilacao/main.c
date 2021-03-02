#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// constantes definidas no programa.
#include "defs.h"

/* Include colocado para tornar possi'vel a impressa'ao.  */
// Esta'o representadas as varia'veis do programa.
#include "data.h"
// Esta'o os proto'tipos das func,o'es
#include "protos.h"

int main()
{
 /* Declarac'ao de vari'aveis: para impressa'o*/
 int i,j,k,soma;


 printf("\n Co'digos fontes e suas bibliotecas:\n");
 printf("\n main:");
 printf("\n * stdlib.h;");
 printf("\n * stdio.h;");
 printf("\n * conio.h;");
 printf("\n * defs.h");
 printf("\n ***************************************************************");
 printf("\n ***************************Definicoes defs.h************** \n");
 printf("\n BOOL: int");
 printf("\n TRUE:\t\t %d",TRUE);
 printf("\n FALSE:\t\t %d",FALSE);
 printf("\n");
 printf("\n GEN_STACK:\t\t %d",GEN_STACK);
 printf("\n MAX_PLY:\t\t %d",MAX_PLY);
 printf("\n HIST_STACK:\t\t %d",HIST_STACK);
 printf("\n");
 printf("\n LIGHT:\t\t %d",LIGHT);
 printf("\n DARK:\t\t %d",DARK);
 printf("\n");
 printf("\n PAWN:\t\t\t %d",PAWN);
 printf("\n KNIGHT:\t\t %d",KNIGHT);
 printf("\n BISHOP:\t\t %d",BISHOP);
 printf("\n ROOK:\t\t\t %d",ROOK);
 printf("\n QUEEN:\t\t\t %d",QUEEN);
 printf("\n KING:\t\t\t %d",KING);
 printf("\n EMPTY:\t\t\t %d",EMPTY);
 printf("\n Quadrados utilizados");
 printf("\n A1:\t\t\t %d",A1);
 printf("\n B1:\t\t\t %d",B1);
 printf("\n C1:\t\t\t %d",C1);
 printf("\n D1:\t\t\t %d",D1);
 printf("\n E1:\t\t\t %d",E1);
 printf("\n F1:\t\t\t %d",F1);
 printf("\n G1:\t\t\t %d",G1);
 printf("\n H1:\t\t\t %d",H1);
 printf("\n A8:\t\t\t %d",A8);
 printf("\n B8:\t\t\t %d",B8);
 printf("\n C8:\t\t\t %d",C8);
 printf("\n D8:\t\t\t %d",D8);
 printf("\n E8:\t\t\t %d",E8);
 printf("\n G8:\t\t\t %d",G8);
 printf("\n H8:\t\t\t %d",H8);
 printf("\n ROW(X):\t\t\t (x >> 3)");
 printf("\n COL(X):\t\t\t (X & 7)");
 printf("\n ***********************************************************");
 printf("\n Esta e' a descricao ba'sica de uma jogada. promover e' o que");
 printf("\n peca para promover o peao, se o movimento for um peao");
 printf("\n promocao. bits e' um campo de bits que descreve a mudanca,");
 printf("\n com os seguintes bits: \n");
 printf("\n # 1 captura");
 printf("\n # 2 castelo");
 printf("\n # 4 captura passante");
 printf("\n # 8 empurrando um peao 2 quadrados");
 printf("\n # Movimento de 16 pe�es");
 printf("\n 32 promover");
 printf("\n **********************************************************");
 printf("\n Conjunto de Estruturas: \n");
 printf("\n move_bytes: \n");
 printf("\n * char to;");
 printf("\n * char promote;");
 printf("\n * char bits");
 printf("\n");
 printf("\n move: \n");
 printf("\n * move_bytes b;");
 printf("\n * int u");
 printf("\n um elemento da pilha de movimentacao. e' apenas um movimento com um");
 printf("\n pontuacao, para que possa ser classificado pelas funcoes de pesquisa");
 printf("\n gen_t:");
 printf("\n * move m;");
 printf("\n * int score;");
 printf("\n um elemento da pilha do histo'rico, com as informacoes necessario voltar atras.");
 printf("\n hist_t: \n");
 printf("\n * move m;");
 printf("\n * int capture;");
 printf("\n * int castle;");
 printf("\n * int ep;");
 printf("\n * int fifty;");
 printf("\n * int hash;");
 printf("\n \n");
 printf("\n ******************************************************");
 printf("\n co'digo fonte data.c e data.h e' criado");
 printf("\n data.c");
 printf("\n * data.h");
 printf("\n O data.c nao sei onde e' usado mas o data.h sera' utilizado");
 printf("nas outras arquicos .c");
 printf("\n \t\t O data.c e' usado pra explicac'a'o.");
 printf("\n #include data.h");
 /* **** */
 printf("\n extern int color[64];");
 printf("\n \t\t color[64]: claro, escuro ou vazio");
 /* **** */
 printf("\n extern int piece[64];");
 printf("\n \t\t piece[64]: peao, cavalo, bispo, torre, dama, rei, ou vazio ");
 /* **** */
 printf("\n extern int side;");
 printf("\n \t\t side: o lado do movimento");
 /* **** */
 printf("\n extern int xside;");
 printf("\n \t\t O lado que nao e' movido");
 /* **** */
 printf("\n extern int castle;");
 printf("\n \t\t um bitfield (nivel alto) para permissao de roque. se  1 branco");
 printf("  pode ainda rocar para o lado o rei.");
 printf("\n \t \t 2 e' o lado roque branco na rainha");
 printf(" 4 e' o roque preto do rei e 8 e' o roque preto da rainha.");
/* **** */
 printf("\n extern int ep;");
 printf("\n \t \t A casa em passant. Se branca move e2e4, a casa em passant");
 printf("\n \t \t e marcada para e3, porque este e' onde um peao movera'");
 printf("\n \t \t em uma captura em passant");
/* **** */
 printf("\n extern int fifty;");
 printf("\n \t \t O numero de movimento desde uma captura ou movimento do ");
 printf("\n \t \t peao, usado para a regra dos cinquentas movimentos");
/* **** */
 printf("\n extern int hash;");
 printf("\n \t \t Um (mais ou menos) unico numero que corresponde a posicao");
 /* **** */
 printf("\n extern int ply;");
 printf("\n \t \t O nu'mero de meio movimento (ply) desde a raiz da arvores de busca");
 /* **** */
 printf("\n extern int hply;");
 printf("\n \t \t h para histo'rico; o nu'mero de lance desde o ini'cio do jogo");
 /* **** */
 printf("\n extern gen_t gen_dat[GEN_STACK];");
 printf("\n extern int first_move[MAX_PLY];");
 printf("\n \t \t gen_dat e' alguma memo'ria para listas de movimentacao que sao");
 printf("\n \t \t criadas pelos geradores de movimentacao. A lista de movimentacao da");
 printf("\n \t\t dobra n comeca em first_move [n] e terminando first_move [n+1].");
 /* **** */
 printf("\n extern int history[64][64];");
 printf("\n \t \t Histo'orico da matriz heuri'stica utilizada");
 /* ****** */
 printf("\n extern hist_t hist_dat[HIST_STACK];");
 printf("\n \t\t Precisamos de uma matriz hist_t para que possamos recuperar o ");
 printf("\n \t\t movimentos que fazemos");
 /* ****** */
 printf("\n extern int max_time;");
 printf("\n extern int max_depth;");
 printf("\n \t \t o mecanismo procurara' max_time milissegundos ou ate' terminar pesquisando max_depth ply.");
 /* ******* */
 printf("\n extern int start_time;");
 printf("\n extern int stop_time;");
 printf("\n \t \t o momento em que o mecanismo comeca a pesquisar e quando deve parar");
 /* ******* */
 printf("\n extern int nodes;");
 printf("\n \t \t O nu'mero do no' que devemos procurar");
 /* ****** */

 printf("\n extern move pv[MAX_PLY][MAX_PLY];");
 printf("\n extern int pv_length[MAX_PLY];");
 printf("\n extern BOOL follow_pv;");
 printf("\n \t \t a <triangular> PV array; for a good explanation of why a triangular array is needed, see ");
 printf("<How Computers Play Chess> by Levy and Newborn.");
 /*  ****** */
 printf("\n extern int hash_piece[2][6][64];");
 printf("\n \t \t \t Indexado para peca piece[cor][tipo][casa]");
 printf("\n extern int hash_side;");
 printf("\n extern int hash_ep[64];");
 printf(" \n \t \t nu'meros aleato'rios usados para calcular o hash; veja set_hash ()");
 printf("em board.c");
 /* ****** */
 printf("\n extern int mailbox[120];");
 printf("\n extern int mailbox64[64];");
 printf("\n Agora temos a matriz de caixa de correio <mailbox., assim chamada porque se parece com uma caixa de");
 printf("\n correio, pelo menos de acordo com Bob Hyatt. Isso e u'til quando precisamos descobrir quais pec'as podem");
 printf("\n ir para onde. Digamos que temos uma torre no quadrado a4 (32) e queremos saber se ele pode mover um ");
 printf("\n quadrado para a esquerda. Subtrai'mos 1 e obtemos 31 (h5). Obviamente, a torre na'o pode passar para o");
 printf("\n h5, mas na'o sabemos isso sem fazer muito trabalho irritante. Enta'o, o que fazemos e' descobrir o nu'mero");
 printf("\n da caixa postal de a4, que e' 61. Em seguida, subtrai'mos 1 de 61 (60) e vemos o que e' a caixa postal [60]");
 printf("\n . Nesse caso, e' -1, enta'o esta' fora dos limites e podemos esquece'-lo. Voce' pode ver como a caixa de");
 printf("\n correio [] e' usada em attack () em board.c.");
 printf("\n \t \t \t Criar matriz descrita no comenta'rio.");
 /* ******observac'a'o******* */
 /* Criar o lac'o reproduzindo a matriz maibox[120] */
 printf("\n int mailbox[120] = ");
 soma = 0;
 for (i=0;i<12;i++)
      {printf("\n");
       for(j=0;j<10;j++)
           {printf("\t %d",mailbox[soma]);
            soma++;
           }
     }
 soma = 0;
 /* #include"data.h" na'o existe no co'digo original
 mas tive que colocar em main porque na'o imprimiria. */
 /* int mailbox[120] = {
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
  };*/

 /* Criar o lac'o reproduzindo a matriz mailbox64[64] */
 printf("\n int mailbox64[64] = ");
 soma = 0;
 for (i=0;i<8;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",mailbox64[soma]);
            soma++;
           }
     }
 soma = 0;



 /* int mailbox64[64] = {
	21, 22, 23, 24, 25, 26, 27, 28,
	31, 32, 33, 34, 35, 36, 37, 38,
	41, 42, 43, 44, 45, 46, 47, 48,
	51, 52, 53, 54, 55, 56, 57, 58,
	61, 62, 63, 64, 65, 66, 67, 68,
	71, 72, 73, 74, 75, 76, 77, 78,
	81, 82, 83, 84, 85, 86, 87, 88,
	91, 92, 93, 94, 95, 96, 97, 98
}; */
 /* ******* */
 printf("\n extern BOOL slide[6];");
 printf("\n \t \t falso, falso, verdadeiro, verdadeiro, verdadeiro, verdadeiro");
 printf("\n extern int offsets[6];");
 printf("\n \t \t offsets[6] = { 0, 8, 4, 4, 8, 8}");
 printf("\n extern int offset[6][8];");
 printf("\n Fazer impressa'o de de...");

 /* Criar o lac'o reproduzindo a matriz offset[6][8] */
 printf("\n int offset[6][8] = ");
 soma = 0; /* sem uso */
 for (i=0;i<6;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",offset[i][j]);
            soma++; /* sem uso */
           }
     }
 soma = 0; /* sem uso */

 /*
 int offset[6][8] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ -21, -19, -12, -8, 8, 12, 19, 21 },
	{ -11, -9, 9, 11, 0, 0, 0, 0 },
	{ -10, -1, 1, 10, 0, 0, 0, 0 },
	{ -11, -10, -9, -1, 1, 9, 10, 11 },
	{ -11, -10, -9, -1, 1, 9, 10, 11 }
};
 */

 printf("\n slide, offsets e offset sa'o basicamente os vetores nos quais as pec'as podem se mover.");
 printf("\n Se o slide da pec'a for FALSE, ele podera' mover apenas um quadrado em qualquer direc'a'o.");
 printf("\n offsets e' o nu'mero de direc'o'es em que ele pode se mover e offset e' uma matriz das direc'c'es reais.");


 /* slide, offsets, and offset are basically the vectors that
   pieces can move in. If slide for the piece is FALSE, it can
   only move one square in any one direction. offsets is the
   number of directions it can move in, and offset is an array
   of the actual directions. */

 /* ******* */
 printf("\n extern int castle_mask[64];");

  /* Criar o lac'o reproduzindo a matriz castle_mask[64] */
 printf("\n int castle_mask[64] = ");
 soma = 0;
 for (i=0;i<8;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",castle_mask[soma]);
            soma++;
           }
     }
 soma = 0;

 /*
 int castle_mask[64] = {
	 7, 15, 15, 15,  3, 15, 15, 11,
	15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15,
	13, 15, 15, 15, 12, 15, 15, 14
};
 */
 printf("\n extern char piece_char[6];");
 printf("\n \t \t A letra da pec'a para imprimir no tabuleiro");
 /* the piece letters, for print_board() */
 /* ****** */
 printf("\n extern int init_color[64];");
 printf("\n \t \t O Estado inicial do tabuleiro");
 /* the initial board state */

 /* Criar o lac'o reproduzindo a matriz init_color[64] */
 printf("\n int init_color[64] = ");
 soma = 0;
 for (i=0;i<8;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",init_color[soma]);
            soma++;
           }
     }
 soma = 0;


 /*
 int init_color[64] = {
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0
};
 */

 /* ***** */
 printf("\n extern int init_piece[64];");

 /* Criar o lac'o reproduzindo a matriz init_piece[64] */
 printf("\n int init_piece[64] = ");
 soma = 0;
 for (i=0;i<8;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",init_piece[soma]);
            soma++;
           }
     }
 soma = 0;



 /*
 int init_piece[64] = {
	3, 1, 2, 4, 5, 2, 1, 3,
	0, 0, 0, 0, 0, 0, 0, 0,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	0, 0, 0, 0, 0, 0, 0, 0,
	3, 1, 2, 4, 5, 2, 1, 3
};
 */

 printf("\n Essa e' a matriz castle_mask. Podemos usa'-lo para determinar as permisso'es de rolagem apo's uma mudanc'a.");
 printf("\n O que fazemos e' lo'gico - E os bits do castelo com os bits castle_mask para os dois quadrados do movimento.");
 printf("\n Digamos que castelo seja 1, o que significa que o branco ainda pode dominar o rei. Agora, jogamos uma jogada");
 printf("\n em que a torre da h1 e' capturada. No's AND castelo com castle_mask [63], enta'o temos 1 e 14, e o castelo se torna");
 printf("\n 0 e o branco na'o pode mais castelo do lado do rei.");

 /* This is the castle_mask array. We can use it to determine
   the castling permissions after a move. What we do is
   logical-AND the castle bits with the castle_mask bits for
   both of the move's squares. Let's say castle is 1, meaning
   that white can still castle kingside. Now we play a move
   where the rook on h1 gets captured. We AND castle with
   castle_mask[63], so we have 1&14, and castle becomes 0 and
   white can't castle kingside anymore. */

 printf("\n ");
 printf("\n ******************************************************");
 printf("\n ");
 printf("\n ");
 printf("\n ");
 printf("\n ");
 printf("\n criando o arquivo <protos.h> proto'tipos de programas");
 printf("\n \t \t *****board.c******");
 printf("\n \t void init_board()");
 printf("\n \t void init_hash();");
 printf("\n \t int hash_rand();");
 printf("\n \t void set_hash();");
 printf("\n \t BOOL in_check(int s);");
 printf("\n \t BOOL attack(int sq, int s);");
 printf("\n \t void gen();");
 printf("\n \t void gen_caps();");
 printf("\n \t void gen_push(int from, int to, int bits);");
 printf("\n \t BOOL makemove(move_bytes m);");
 printf("\n \t void takeback();");
 printf("\n \t \t ******book.c*****");
 printf("\n \t void open_book();");
 printf("\n \t void close_book();");
 printf("\n \t int book_move();");
 printf("\n \t BOOL book_match(char *s1, char *s2);");
 printf("\n \t \t *****search.c*****");
 printf("\n \t void think(int output);");
 printf("\n \t int search(int alpha, int beta, int depth);");
 printf("\n \t int search(int alpha, int beta, int depth);");
 printf("\n \t int quiesce(int alpha, int beta);");
 printf("\n \t int reps();");
 printf("\n \t void sort_pv();");
 printf("\n \t void sort(int from);");
 printf("\n \t void checkup();");
 printf("\n \t \t ***** eval.c *****");
 printf("\n \t int eval();");
 printf("\n \t int eval_light_pawn(int sq);");
 printf("\n \t int eval_dark_pawn(int sq);");
 printf("\n \t int eval_light_king(int sq);");
 printf("\n \t int eval_lkp(int f);");
 printf("\n \t int eval_dark_king(int sq);");
 printf("\n \t int eval_dkp(int f);");
 printf("\n \t \t *****main.c*****");
 printf("\n \t int get_ms();");
 printf("\n \t int main();");
 printf("\n \t int parse_move(char *s);");
 printf("\n \t char *move_str(move_bytes m);");
 printf("\n \t char *move_str(move_bytes m);");
 printf("\n \t void print_board();");
 printf("\n \t void xboard();");
 printf("\n \t void print_result();");
 printf("\n \t void bench();");

 /* ********************************************************* */
 printf("\n \t \t ******agora comec'a a brincadeira******");
 printf("\n \t \t board.c");
 printf("\n Bibliotecas utilizadas:");
 printf("\n \t \t #include <stdlib.h>");
 printf("\n \t \t #include defs.h");
 printf("\n \t \t #include data.h");
 printf("\n \t \t #include protos.h");
 printf("\n Funco'es criadas;");
 printf("\n \t * void init_board()");
 printf("\n \t * void init_hash()");
 printf("\n \t * int hash_rand()");
 printf("\n \t * void set_hash()");
 printf("\n \t * BOOL in_check(int s)");
 printf("\n \t * BOOL attack(int sq, int s)");
 printf("\n \t * void gen()");
 printf("\n \t * void gen_caps()");
 printf("\n \t * void gen_push(int from, int to, int bits)");
 printf("\n \t * void gen_promote(int from, int to, int bits)");
 printf("\n \t * BOOL makemove(move_bytes m)");
 printf("\n \t * void takeback()");
 printf("\n*****************************************");


 printf("\n init_board() configura o tabuleiro para o estado inicial de jogo.");
 //*********************************************************
//void init_board()
{
//	int i;
//
//	for (i = 0; i < 64; ++i) {
//		color[i] = init_color[i];
//		piece[i] = init_piece[i];
//	}
//	side = LIGHT;
//	xside = DARK;
//	castle = 15;
//	ep = -1;
//	fifty = 0;
//	ply = 0;
//	hply = 0;
//	set_hash();  /* init_hash() must be called before this function */
//	first_move[0] = 0;
}
//**********************************************************
/* Criar o lac'o reproduzindo void init_board() */
 printf("\n void init_board()");
 printf("\n Quando chamada...");
 printf("\n Inicializa a matriz extern int color[64] com o que esta' em int init_color[64]");

 //Voce' pode descomentar a linha de baixo para chamar a func'a'o init_board()
 //E ve'-la funcionar
 init_board();
 printf("\n Inicializada color[64]= ");
 printf("\n LIGHT:0 DARK:1. Claro:0 Escuro:1");
 soma = 0;
 for (i=0;i<8;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",color[soma]);
            soma++;
           }
     }
 soma = 0;

 printf("\n Inicializada piece[64]= ");
 printf("\n peao:0  cavalo:1  bispo:2  torre:3  rainha:4 rei:5 casa vazia:6");
 soma = 0;
 for (i=0;i<8;i++)
      {printf("\n");
       for(j=0;j<8;j++)
           {printf("\t %d",piece[soma]);
            soma++;
           }
     }
 soma = 0;
 //Inicializando as outras variaveis
 printf("\n side:%d",side);
 printf("\n xside:%d",xside);
 printf("\n castle:%d",castle);
 printf("\n ep:%d",ep);
 printf("\n fifty:%d",fifty);
 printf("\n ply:%d",ply);
 printf("\n hply:%d",hply);
 printf("\n set_hash(); \t init_hash() deve ser chamada antes desta funca'o. ");
 printf("\n first_move[0]:%d",first_move[0]);

 printf("\n \t\t Estudos preliminares");
 printf("\n Essa func'a'o gera um nu'meto aleato'rio.");
 printf("\n int hash_rand():%d",hash_rand());
 printf("\n ********");
 printf("\n \t\t Depois e' usada pela func'a'o:void init_hash().");
 printf("\n Que faz a inicializacao do extern int hash_piece[2][6][64];");

 //**********************************************************
// /* init_hash() initializes the random numbers used by set_hash(). */
//
//void init_hash()
//{
//	int i, j, k;
//
//	srand(0);
//	for (i = 0; i < 2; ++i)
//		for (j = 0; j < 6; ++j)
//			for (k = 0; k < 64; ++k)
//				hash_piece[i][j][k] = hash_rand();
//	hash_side = hash_rand();
//	for (i = 0; i < 64; ++i)
//		hash_ep[i] = hash_rand();
//}
//Voce' pode descomentar a linha de baixo para chamar a func'a'o init_board()
//E ve'-la funcionar
//**** Programa de sa'ida ******
//Para chamar a funca'o init_hash();
 //init_hash();
// printf("\n Funca'o: init_hash()");
// for(i=0;i<6;++i)
//    {printf("\n");
//     for(j=0;j<64;++j)
//        {printf("\t %d",hash_piece[0][i][j]);
//        }
//    }


 getch();
  return 0;
}
