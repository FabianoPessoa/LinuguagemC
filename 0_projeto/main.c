#include<stdio.h>
#include<conio.h>
#include "defs.h" //definicoes
#include "protos.h" //prototipos
#include "data.h"// declaracoes inicializacoes de variaveis
int main()
{    //char ch;
	// Testa os #define CONST 
     printf("\n CONST:%d",CONST);   
     ihm();              //chama a funcao que faz a interface dos programas
     //f_struct();       //ex. struct
     getch();
     return 0;
}
