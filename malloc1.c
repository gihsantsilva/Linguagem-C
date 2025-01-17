#include <stdio.h>
#include <stdlib.h>
#include <locacle.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int *ponteiro;
	
	// Alocar memória para um único inteiro
	ponteiro = (int*)malloc(sizeof(int));
	
	if(ponteiro == NULL){
		printf("Falha na alocação de memória.\n");
		return 1;
	}
	
	// Atribuir um valor ao inteiro alocado
	*ponteiro = 42;
	
	// Usar o valor alocado
	printf("O valor alocado é: %d\n", *ponteiro);
	
	// Liberar a memória alocada
	free(ponteiro);
	
	return 0;
}
