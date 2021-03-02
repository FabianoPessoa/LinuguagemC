#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Bibliotecas Criadas
#include"proto.h"
// Aqui entendeu-se que o programa deve chamar o include que possue seus
// proto'tipos no caso o da u'nica func,a'o existente.
// Codigo dos programas
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
