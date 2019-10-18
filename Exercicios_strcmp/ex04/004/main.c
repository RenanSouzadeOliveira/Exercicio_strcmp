#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b, resultado;
	char op;
	printf("Digite o primeiro valor para a operacao,\n logo apos digite 'A' para adicao, 'S' para subtracao, 'M' para multiplicacao, 'D' para divisao,\n apos isso digite o segundo valor da operacao:");
	scanf("%f %c %f", &a, &op, &b);
	
	switch(op){
		
		case 'A':
			resultado = a + b;
			break;
		case 'a':
			resultado = a + b;
			break;
		case 'S':
			resultado = a - b;
			break;
		case 's':
			resultado = a - b;
			break;
		case 'M':
			resultado = a * b;
			break;
		case 'm':
			resultado = a * b;
			break;
		case 'D':
			if (a != 0 && b != 0){
				resultado = a/b;
			} else {
				printf("E impossivel fazer uma divisao com 0\n");
				exit(0);
			}
			break;
		case 'd':
			if (a != 0 && b != 0){
				resultado = a/b;
			} else {
				printf("E impossivel fazer uma divisao com 0\n");
				exit(0);
			}
			break;
		default:
			printf("Operacao invalida\n");
	}
	
	printf("O resultado da operacao e: %5.2f\n", resultado);
	system("PAUSE");
	return 0;
}
