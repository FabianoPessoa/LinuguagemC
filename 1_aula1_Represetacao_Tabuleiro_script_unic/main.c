// Representação do tabuleiro feito em um único script
// 1a opção em linha de comandos:
// gcc main.c -o main.exe
// 2a opção escreva o script e salve makefile<sem extenção>
// all:
	// gcc main.c -o programa.exe
// Em linha de comando faça:
// C:\> mingw32-make --always-make
// C:\> start programa.exe


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Prototipo de funcoes

int Board_Representation();


int main()
{ Board_Representation();
 getch();
  return 0;
}

//Codigo dos programas
int Board_Representation()
{
    int i,j,matriz[12][10],soma;
    i = 0;
    j = 0;
    soma = 0;
    //Tabuleiro Grande
    printf("\n**************************************************");
    printf("**************************************");
    printf("\n Representacao do Tabuleiro Grande:");
    for (i=0;i<12;i++)
        {printf("\n");
         for (j=0;j<10;j++)
             {printf("\t %d",soma);
              matriz[i][j] = soma;
              soma = soma + 1;
             }
        }
    printf("\n******************************************************");
    printf("***********************************");
    getch();
    // Tabuleiro Pequeno
    printf("\n**************************************************");
    printf("**************************************");
    printf("\n Representacao do Tabuleiro Pequeno:");
    for (i=0;i<12;i++)
        {if(i>1 && i<10)
                {printf("\n");
                 for (j=0;j<10;j++)
                      {if (j>0 && j<9)
                         {printf("\t %d",matriz[i][j]);
                          }
                    }
                }
        }
    printf("\n******************************************************");
    printf("***********************************");
     
    return 0;
     }
