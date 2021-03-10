/*
 *	DATA.H
 *	Tom Kerrigan's Simple Chess Program (TSCP)
 *
 *	Copyright 1997 Tom Kerrigan
 */
 // Foi feita um include para defs.h pois tem varia'veis la'
 // que esta'o aqui.
// #include "defs.h"

/* this is basically a copy of data.c that's included by most
   of the source files so they can use the data.c variables */


/*isso � basicamente uma c�pia do data.c inclu�da pela maioria
��� dos arquivos de origem para que eles possam usar
as vari�veis data.c*/

// a diferenc,a e' que as varia'veis esta'o extendidas o que aumenta
// a quantidade de memo'ria
// Declaracao de varia'veis globais

#include"defs.h"

extern int color[64];
extern int piece[64];
extern int side;
extern int xside;
extern int castle;
extern int ep;
extern int fifty;
extern int hash;
extern int ply;
extern int hply;
// extern gen_t gen_dat[GEN_STACK];
extern int gen_dat[GEN_STACK];
extern int first_move[MAX_PLY];
extern int history[64][64];
// extern hist_t hist_dat[HIST_STACK];
extern int max_time;
extern int max_depth;
extern int start_time;
extern int stop_time;
extern int nodes;
// extern move pv[MAX_PLY][MAX_PLY];
extern int pv_length[MAX_PLY];
extern BOOL follow_pv;
extern int hash_piece[2][6][64];
extern int hash_side;
extern int hash_ep[64];
extern int mailbox[120];
extern int mailbox64[64];
extern BOOL slide[6];
extern int offsets[6];
extern int offset[6][8];
extern int castle_mask[64];
extern char piece_char[6];
extern int init_color[64];
extern int init_piece[64];
