#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char operacao;
	float valor1, valor2, resultado;
	
	
	printf("Digite 'A' para realizar adicao, 'S' para subtracao, 'M' para multiplicacao, e 'D' para divisao:");
	scanf("%c",&operacao);
	
	printf("Digite o primeiro valor da operacao:");
	scanf("%f",&valor1);
	
	printf("Digite o segundo valor da operacao:");
	scanf("%f",&valor2);
	
	switch(operacao){
		
		case 'A':
			resultado = valor1 + valor2;
			break;
		case 'a':
			resultado = valor1 + valor2;
			break;
		case 'S':
			resultado = valor1 - valor2;
			break;
		case 's':
			resultado = valor1 - valor2;
			break;
		case 'M':
			resultado = valor1 * valor2;
			break;
		case 'm':
			resultado = valor1 * valor2;
			break;
		case 'D':
			if (valor1 != 0 && valor2 != 0){
				resultado = valor1/valor2;
			} else {
				printf("E impossivel fazer uma divisao com 0\n");
			}
			break;
		case 'd':
			if (valor1 != 0 && valor2 != 0){
				resultado = valor1/valor2;
			} else {
				printf("E impossivel fazer uma divisao com 0\n");
			}
			break;
		default:
			printf("Operacao invalida\n");
	}
	
	printf("O resultado da operacao e %5.2f\n",resultado);
	
	
	system("PAUSE");
	return 0;
}
