#include<stdio.h>
#include<conio.h>
#include "data.h" //preciso chamar a biblioteca que contem a declaracao
                    //da variavel
//***********************************************************************
//funcao que testa estruturas
int f_struct()
{
     x.a = 1;
     y.a = 2;
     x.b = 3;
     y.b = 4;
     
     printf("\n struc {");
     printf("\n int a;");
     printf("\n int b;");
     printf("\n }x,y;");
     printf("\n Entrando com: \n x.a = 1; \n y.a = 2; \n x.b = 3; \n y.b = 4;");
     printf("\n Estrutura x.a : %d",x.a);
     printf("\n Estrutura y.a : %d",y.a);
     printf("\n Estrutura x.b : %d",x.b);
     printf("\n Estrutura y.b : %d",y.b); 
	 
	return 0;
}               
//****************************************************************
int funcao2()
{    int aux;
     aux = funcao1();  //usa um funcao declarada em baixo 
     return aux;}                    
//************************************************************************                   
//funcao
int funcao1()
{
     return 0;}

//************************************************************************
//Inteface do programa
int ihm()
{ //Cabecalho da interface
  //char ch;
     printf("\n 1 Tarefa");
     printf("\n 2 Tarefa");
     printf("\n 3 Tarefa");
     printf("\n Digite sua escolha \n\t\t");
     do{
         ch = getchar();
         switch(ch) {
                     case '1':
                              printf("\n funcao 1");
							  funcao1();
                              break;
                     case '2':
                              printf("\n funcao 2");
							  funcao2();
                              break;
                     case '3':
                              printf("\n funcao 3");
							  f_struct();
                              break;
                     } 
     }while(ch!='1' && ch!='2' && ch!='3');
     return 0;
}
