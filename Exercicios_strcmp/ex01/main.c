#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palavra1 [20];
	char palavra2 [20];
	
	printf("Digite a primeira palavra:");
	scanf("%s",&palavra1);
	
	printf("Digite a segunda palavra:");
	scanf("%s",&palavra2);
	
	if(strcmp(palavra1,palavra2) == 0){
		printf("\n As palavras sao identicas\n");
	} else {
		printf("As palavras sao diferentes\n");
	}
	
	system("PAUSE");
	return 0;
}
