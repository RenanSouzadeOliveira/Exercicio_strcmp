#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char senha_entrada[20];
	char correto[20] = "agua";
	printf("Digite a senha:");
	scanf("%s",&senha_entrada);
	

	if(strcmp(correto,senha_entrada) == 0){
		printf("Senha OK\n");
	} else {
		printf("Senha Invalida\n");
	}
	
	system("PAUSE");
	return 0;
}
