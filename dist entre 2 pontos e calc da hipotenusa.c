#include <stdio.h>
#include <stdlib.h>
#include "biblioteca das funcoes.h"

int main(){
	int escolha; // variavel para receber o valor da op��o da fun��o escolhida pelo usu�rio 
	
	//do while para garantir que o usu�rio digite um do valores da op��es at� que ele deseje finalizar o programa
	do{
		printf("\n\nEscolha qual das funcoes listadas abaixo voce quer realizar: ");
		printf("\n\n0. Finalizar programa\n1. Teorema de Pitagoras\n2. Distancia entre dois pontos\n3. Limpar tela\n\n");
		printf("Digite o valor de uma das opcoes para ser realizada: \n");
		escolha = retornar_opcao(6);  //escolha est� chamando a fun��o de op��es para ter certeza que o usu�rio est� digitando uma op��o v�lida
		//printf("%d\n", escolha);
		
	
		// switch  case para cada op��o de fun��o 
		switch(escolha){
			case 0: 		// op��o em que o usu�rio finaliza o programa
				system("cls");	
				printf("\n\nPrograma Finalizado.\n");
				break;
			
			case 1:
				system("cls");	
				printf("\n\nOpcao selecionada:	1.Teorema de Pitagoras\n");
				teoremaPitagoras(); //chamando a fun��o void para o Teorema de Pit�goras
				printf("\n\n---------------------------------------------------------------------");
				break;
				
			case 2:
				system("cls");	
				printf("\n\nOpcao selecionada:	2. Distancia entre dois pontos\n\n");
				distEntrePontos();  // chamando a fun��o void para a Dist�ncia entre dois pontos
				printf("\n\n---------------------------------------------------------------------");
				break;
			
			case 3:
				system("cls");
				break;
				
			default: 		//default para caso o usu�rio digite um valor inv�lido	
			system("cls");		
			printf("\nNumero Invalido.\n\n");	
			printf("---------------------------------------------------------------------");	
			break;
		}

	} while(escolha!=0); 
	


return 0;
}

