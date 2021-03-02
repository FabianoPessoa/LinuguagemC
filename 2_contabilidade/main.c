#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void abertura();

int main()
{	int x,i;
	float soma[6];
	float conta;
	float total;
	char ch,ch2,*p;
	char cha[80] = "alo mundo";
	char s1[5];
	char *erros[]={
	"Erro0",
	"Erro1",
	"Erro2",
	};
	// *****************************************************************
	abertura();
	
	// soma[0] =  Contas Correntes;
	// soma[1] = Saques TAA;
	// soma[2] = Transporte;
	// soma[3] = Mercadoria;
	// soma[4] = Comer Fora;
	// soma[5] = Não identificado;
	// *****************************************************************
	// Inicializa o vetor de somas conta'beis
	for(i=0;i<5;i++)
		soma[i] = 0;

	printf("\n [c]: Contas Correntes;");
	printf("\n [s]: Saques TAA;");
	printf("\n [t]: Transporte;");
	printf("\n [m]: Mercadoria;");
	printf("\n [f]: Comer Fora;");
	printf("\n [n]: Na'o Identificado;");
	printf("\n [x]: Finalizar\n");
	printf("\n Digite o valor: ~:>");

	do{ 
		ch = getchar();
		switch(ch){
			case 'c':
				conta = 0; 														// Entrada dos valores
				printf("\n [c]: Contas Correntes;");
				printf("\n [s]: Saques TAA;");
				printf("\n [t]: Transporte;");
				printf("\n [m]: Mercadoria;");
				printf("\n [f]: Comer Fora;");
				printf("\n [n]: Não Identificado;");
				printf("\n [x]: Finalizar\n");
				printf("Digite o valor do Conta Corrente\n ~:> R$");
				scanf("%f",&conta);
				soma[0] = soma[0] + conta;
				conta = 0;
				break;
			case 's':
				conta = 0; 														// Entrada dos valores
				printf("\n [c]: Contas Correntes;");
				printf("\n [s]: Saques TAA;");
				printf("\n [t]: Transporte;");
				printf("\n [m]: Mercadoria;");
				printf("\n [f]: Comer Fora;");
				printf("\n [n]: Não Identificado;");
				printf("\n [x]: Finalizar\n");
				printf("Digite o valor do Saques TAA\n ~:> R$");
				scanf("%f",&conta);
				soma[1] = soma[1] + conta;
				conta = 0;
				break;
			case 't':
				conta = 0; 														// Entrada dos valores
				printf("\n [c]: Contas Correntes;");
				printf("\n [s]: Saques TAA;");
				printf("\n [t]: Transporte;");
				printf("\n [m]: Mercadoria;");
				printf("\n [f]: Comer Fora;");
				printf("\n [n]: Não Identificado;");
				printf("\n [x]: Finalizar\n");
				printf("Digite o valor do  Transporte\n ~:> R$ ");
				scanf("%f",&conta);
				soma[2] = soma[2] + conta;
				conta = 0;
				break;
			case 'm':
				conta = 0; 														// Entrada dos valores
				printf("\n [c]: Contas Correntes;");
				printf("\n [s]: Saques TAA;");
				printf("\n [t]: Transporte;");
				printf("\n [m]: Mercadoria;");
				printf("\n [f]: Comer Fora;");
				printf("\n [n]: Não Identificado;");
				printf("\n [x]: Finalizar\n");
				printf("Digite o valor do  Mercadoria\n ~:> R$ ");
				scanf("%f",&conta);
				soma[3] = soma[3] + conta;
				conta = 0;
				break;
			case 'f':
				conta = 0; 														// Entrada dos valores
				printf("\n [c]: Contas Correntes;");
				printf("\n [s]: Saques TAA;");
				printf("\n [t]: Transporte;");
				printf("\n [m]: Mercadoria;");
				printf("\n [f]: Comer Fora;");
				printf("\n [n]: Não Identificado;");
				printf("\n [x]: Finalizar\n");
				printf("Digite o valor do  Comer Fora\n ~:> R$ ");
				scanf("%f",&conta);
				soma[4] = soma[4] + conta;
				conta = 0;
				break;
			case 'n':
				conta = 0; 														// Entrada dos valores
				printf("\n [c]: Contas Correntes;");
				printf("\n [s]: Saques TAA;");
				printf("\n [t]: Transporte;");
				printf("\n [m]: Mercadoria;");
				printf("\n [f]: Comer Fora;");
				printf("\n [n]: Não Identificado;");
				printf("\n [x]: Finalizar\n");
				printf("Digite o valor do  Não Identificado\n ~:> R$ ");
				scanf("%f",&conta);
				soma[5] = soma[5] + conta;
				conta = 0;
				break;
			case 'x':
					printf("\n Interrompe \n");
					break;
			}
		}while(ch!='x');
	printf("\n ************** Agosto - 2020 ************");
	printf("\n Conta Corrente: ..................R$ %.2f", soma[0]);
	printf("\n Saques TAA: ......................R$ %.2f", soma[1]);
	printf("\n Saques Transporte: ...............R$ %.2f", soma[2]);
	printf("\n Mercadoria: ......................R$ %.2f", soma[3]);
	printf("\n Comer Fora: ......................R$ %.2f", soma[4]);
	printf("\n Na'o Identificado: ...............R$ %.2f", soma[5]);
	for(i=0;i<6;i++)
		total = total + soma[i];
	printf("\n Total:::::%.2f",total);
	getch();
	return 0;
}

void abertura(){
	printf("\n $----Acompanhamento de Gastos Mensais -----$ \n");
	printf("\n Por Fabiano Pessoa  \n");
}
