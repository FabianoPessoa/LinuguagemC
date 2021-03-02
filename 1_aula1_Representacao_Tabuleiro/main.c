// ==========================================================================
// Compilador por Fabiano Pessoa
// 19/09/2020
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
// C:\> g++ main.c proto.h <outros scripts.c> -o proj.exe
// 2aOpção:
// C:\> gcc main.c proto.h funcao1.c funcao2.c -o proj.exe
// Para executar o executavel criado faço
// C:\> start proj.exe
// No Git Bash:
// ~:$ start proj.exe
// No terminal Linux tentar: 
// ~:$ ./proj
// ***********************************************************************
// Programa tcp em linguagem C que joga Xadrez
// Nesse programa está descrito as convenções de representação utilizada
// na matriz para o tabuleiro de xadrez.

// # Escreva o scrip abaixo e salve como makefile<sem formato>
// # No terminal faça:
// # all:
// # [tab]gcc main.c funcao.c defs.h protos.h -o programa.exe
// # Depois faça em linha de comando:
// # ~:$ mingw32-make
// # Será executada o makefile existente.
// all:
	// gcc main.c funcao.c proto.h -o programa.exe


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Bibliotecas Criadas
#include"proto.h"

// Função Principal
int main()
{ Board_Representation();
  getch();
  return 0;
}
