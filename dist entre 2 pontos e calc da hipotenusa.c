#include <stdio.h>
#include <stdlib.h>
#include "biblioteca das funcoes.h"

int main(){
	int escolha; // variavel para receber o valor da opção da função escolhida pelo usuário 
	
	//do while para garantir que o usuário digite um do valores da opções até que ele deseje finalizar o programa
	do{
		printf("\n\nEscolha qual das funcoes listadas abaixo voce quer realizar: ");
		printf("\n\n0. Finalizar programa\n1. Teorema de Pitagoras\n2. Distancia entre dois pontos\n3. Limpar tela\n\n");
		printf("Digite o valor de uma das opcoes para ser realizada: \n");
		escolha = retornar_opcao(6);  //escolha está chamando a função de opções para ter certeza que o usuário está digitando uma opção válida
		//printf("%d\n", escolha);
		
	
		// switch  case para cada opção de função 
		switch(escolha){
			case 0: 		// opção em que o usuário finaliza o programa
				system("cls");	
				printf("\n\nPrograma Finalizado.\n");
				break;
			
			case 1:
				system("cls");	
				printf("\n\nOpcao selecionada:	1.Teorema de Pitagoras\n");
				teoremaPitagoras(); //chamando a função void para o Teorema de Pitágoras
				printf("\n\n---------------------------------------------------------------------");
				break;
				
			case 2:
				system("cls");	
				printf("\n\nOpcao selecionada:	2. Distancia entre dois pontos\n\n");
				distEntrePontos();  // chamando a função void para a Distância entre dois pontos
				printf("\n\n---------------------------------------------------------------------");
				break;
			
			case 3:
				system("cls");
				break;
				
			default: 		//default para caso o usuário digite um valor inválido	
			system("cls");		
			printf("\nNumero Invalido.\n\n");	
			printf("---------------------------------------------------------------------");	
			break;
		}

	} while(escolha!=0); 
	


return 0;
}

