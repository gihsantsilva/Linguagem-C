#include <stdio.h>
#include <locale.h>

int printMsg(void);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Inicio do Programa 02");
	int codretorno;
	
	codretorno=printMsg();
	printf("\ncodretorno = %d", codretorno);
	printf("\nFim do Programa 02");
	return 0;
}
int printMsg(void){
	printf("\nHello Word...");
	return 99;
}
