#include <math.h>
#include <stdio.h>
#include <string.h>

// retorna a op��o desejada pelo usu�rio, entre um n�mero de op��es
int retornar_opcao(int numero_op) {  // int numero_op vai receber o numero de op��es que o programa vai ter, no caso, 6.
	int i; 
	char op[numero_op][10];  // matriz de op��es 
	
	// preencher 'op'
	for(i = 0; i < numero_op; i++) {
		sprintf(op[i], "%d", i);
	}
	
	// pedir entrada do usu�rio
	char resposta[100];
	scanf("%[^\n]s", resposta);
	fflush(stdin);
	
	// se a resposta do usu�rio for uma op��o, retornar n�mero referente a essa op��o
	for (i = 0; i < numero_op; i++) {
		if (strcmp(resposta, op[i]) == 0) {  
			return i;
		}
	}
	
	// retorna -1 se a entrada do usu�rio n�o for uma op��o
	return -1;
}


// fun��o da dist�ncia entre  dois pontos
void distEntrePontos(){  
	float x1, y1, z1; //variaveis para as coordenadas do ponto inicial
	float x2, y2, z2; //variaveis para as coordenadas do ponto final
	float distancia;  //variavel que vai receber o resultado

	//lendo os valores para as coordenadas
	printf("Preencha as informacoes abaixo.");
	printf("\n\nDigite o valor da coordenada X1 (X inicial): ");
	scanf(" %f", &x1);
	fflush(stdin);	
	
	printf("\nDigite o valor da coordenada Y1 (Y inicial): ");
	scanf(" %f", &y1);
	fflush(stdin);
	
	printf("\nDigite o valor da coordenada Z1 (Z inicial): ");
	scanf(" %f", &z1);
	fflush(stdin);
	
	printf("\nDigite o valor da coordenada X2 (X final): ");
	scanf(" %f", &x2);
	fflush(stdin);
	
	printf("\nDigite o valor da coordenada Y2 (Y final): ");
	scanf(" %f", &y2);
	fflush(stdin);
	
	printf("\nDigite o valor da coordenada Z2 (Z final): ");
	scanf(" %f", &z2);
	fflush(stdin);
	
	distancia =  sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));   // fazendo o c�lculo da distancia entre os pontos
	
	printf("\n\nA distancia entre os dois pontos: %.2f", distancia);  // exibindo o resultado
		
}


//fun��o para  calcular o teorema de pitagoras
void teoremaPitagoras(){
	float b; // vari�vel para receber o valor do  cateto oposto
	float c; // vari�vel para receber o valor do cateto adjacente
	float result;  // vari�vel para receber o resultado da opera��o
	
	// do while para garantir que o usu�rio n�o digite um valor negativo para os catetos
	do{
		printf("\nPreencha as informacoes abaixo.\n\n");
		printf("Digite um valor positivo para o cateto oposto: ");
		scanf(" %f", &b);
		fflush(stdin);
		if(b<0){	
			printf("\nCateto oposto nao pode ser negativo. Digite um numero valido!\n\n");
			printf("---------------------------------------------------------------------\n\n");
		}
	} while(b<0);

	do{
		printf("\nDigite um valor positivo para o cateto adjacente: ");
		scanf(" %f", &c);
		fflush(stdin);
		if(c<0) {
			printf("\nCateto adjacente nao pode ser negativo. Digite um numero valido!\n\n");	
			printf("---------------------------------------------------------------------\n\n");
		}
	} while(c<0);
	
	result= sqrt(pow(b, 2) + pow(c, 2));  // fazendo o c�lculo da hipotenusa
	
	printf("\nO resultado da hipotenusa:  %.2f", result);  // exibindo o resultado
}


