#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Bibliotecas de Definic,o'es
#include"defs.h"
#include"data.h"

void ihm()
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
 
 getch();

}