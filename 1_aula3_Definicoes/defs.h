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
