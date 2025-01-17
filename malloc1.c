#include <stdio.h>
#include <stdlib.h>
#include <locacle.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int *ponteiro;
	
	// Alocar mem�ria para um �nico inteiro
	ponteiro = (int*)malloc(sizeof(int));
	
	if(ponteiro == NULL){
		printf("Falha na aloca��o de mem�ria.\n");
		return 1;
	}
	
	// Atribuir um valor ao inteiro alocado
	*ponteiro = 42;
	
	// Usar o valor alocado
	printf("O valor alocado �: %d\n", *ponteiro);
	
	// Liberar a mem�ria alocada
	free(ponteiro);
	
	return 0;
}
