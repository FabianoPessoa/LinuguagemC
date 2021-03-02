//#ifndef DEFS_H
//#define DEFS_H
//
//typedef unsigned long long U64
//
//#define NAME *Vice 1.0*
//#define BRD_SQ_NUM 120
//
//enum { EMPTY, wP, wN, wB, wR, wQ, wK, bP, bN, bB, bR, bQ, bK };
//enum { FILE_A, FILE_B, FILE_C, FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NONE};
//enum { RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_NONE};
//enum { WHITE, BLACK, BOTH}; 
//
//enum{
//     A1 = 21, B1, C1, D1, E1, F1, G1, H1,
//     A2 = 31, B2, C2, D2, E2, F2, G2, H2,
//     A3 = 41, B3, C3, D3, E3, F3, G3, H3,
//     A4 = 51, B4, C4, D4, E4, F4, G4, H4,
//     A5 = 61, B5, C5, D5, E5, F5, G5, H5,
//     A6 = 71, B6, C6, D6, E6, F6, G6, H6,
//     A7 = 81, B7, C7, D7, E7, F7, G7, H7,
//     A8 = 91, B8, C8, D8, E8, F8, G8, H8, NO_SQ
//     };
//enum {FALSE, TRUE};
//#endif
//************Nao funcionou na compilacao****************

/*
 *	DEFS.H
 *	Tom Kerrigan's Simple Chess Program (TSCP)
 *
 *	Copyright 1997 Tom Kerrigan
 */


#define BOOL			int
#define TRUE			1
#define FALSE			0

#define GEN_STACK		1120
#define MAX_PLY			32
#define HIST_STACK		400

#define LIGHT			0
#define DARK			1

#define PAWN			0
#define KNIGHT			1
#define BISHOP			2
#define ROOK			3
#define QUEEN			4
#define KING			5

#define EMPTY			6

/* useful squares */
#define A1				56
#define B1				57
#define C1				58
#define D1				59
#define E1				60
#define F1				61
#define G1				62
#define H1				63
#define A8				0
#define B8				1
#define C8				2
#define D8				3
#define E8				4
#define F8				5
#define G8				6
#define H8				7

#define ROW(x)			(x >> 3)
#define COL(x)			(x & 7)


/* This is the basic description of a move. promote is what
   piece to promote the pawn to, if the move is a pawn
   promotion. bits is a bitfield that describes the move,
   with the following bits:

   1	capture
   2	castle
   4	en passant capture
   8	pushing a pawn 2 squares
   16	pawn move
   32	promote

   It's union'ed with an integer so two moves can easily
   be compared with each other. */
   
   /* Esta e' a descricao ba'sica de uma jogada. promover e' o que
    peca para promover o peao, se o movimento for um peao
    promocao. bits e' um campo de bits que descreve a mudanca,
    com os seguintes bits:

    1 captura
    2 castelo <deve ser roque>
    4 captura passante
    8 empurrando um peão 2 quadrados <peao anda duas casas>
    Movimento de 16 peões
    32 promover

    E' unido a um numero inteiro, para que dois movimentos possam ser facilmente
    ser comparados entre si. */
     

typedef struct {
	char from;
	char to;
	char promote;
	char bits;
} move_bytes;

typedef union {
	move_bytes b;
	int u;
} move;

/* an element of the move stack. it's just a move with a
   score, so it can be sorted by the search functions. */
   
/* um elemento da pilha de movimentacao. e' apenas um movimento com um
    pontuacao, para que possa ser classificado pelas funcoes de pesquisa. */   
  
typedef struct {
	move m;
	int score;
} gen_t;

/* an element of the history stack, with the information
   necessary to take a move back. */
   
/* um elemento da pilha do histórico, com as informacoes
    necessario voltar atras. */
   
typedef struct {
	move m;
	int capture;
	int castle;
	int ep;
	int fifty;
	int hash;
} hist_t;
