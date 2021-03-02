// ==========================================================================
// Compilador por Fabiano Pessoa
// Data:
// Utilizando compilador de comando e linha
// C:\> g++ --version
// g++.exe (MinGW.org GCC Build-2) 9.2.0
// Copyright (C) 2019 Free Software Foundation, Inc.
// This is free software; see the source for copying conditions.  There is NO
// warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// ------------------------------------------------------------------
//
// Para compilar o projeto faça:
// 1a Opção:
// C:\> g++ vice.c defs.c <outros scripts.c> <outros bibliotecas>.h -o nome_do_programa.exe
// 2aOpção:
// C:\> gcc vice.c defs.c <outros scripts.c> <outros bibliotecas>.h -o nome_do_programa.exe
// Para executar o executavel criado faço
// C:\> start proj.exe
// No Git Bash:
// ~:$ start proj.exe
// No terminal Linux tentar: 
// ~:$ ./proj
// ***********************************************************************
/*
 *	DEFS.H
 *	Tom Kerrigan's Simple Chess Program (TSCP)
 *
 *	Copyright 1997 Tom Kerrigan
 */

// # Escreva o scrip abaixo e salve como makefile<sem formato>
// # No terminal faça:
// # all:
// # [tab]gcc main.c funcao.c defs.h protos.h -o programa.exe
// # Depois faça em linha de comando:
// # ~:$ mingw32-make --always-make




// # Será executada o makefile existente.
// all:
	// gcc main.c funcao.c proto.h -o programa.exe



// Programa mostra e executa as definições #define



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "defs.h"

int main()
{
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
 printf("\n D8:t\t\t %d",D8);
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
 printf("\n # 8 empurrando um peão 2 quadrados");
 printf("\n # Movimento de 16 peões");
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


 getch();
  return 0;
}
