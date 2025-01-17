#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho;
	int * numeros;
	
	// Solicita ao usuário o tamanho do array
	printf("Informe o tamanho do array de números: ");
	scanf("%d", &tamanho);
	
	// Aloca memória para o array de núemros
	numeros = (int *)malloc(tamanho*sizeof(int));
	
	if(numeros == NULL){
		printf("Falha na alocação de memória.\n");
		return 1;
	}
	
	int i;
	// Preenche o array com valores
	for(i=0;i<tamanho;i++){
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &numeros[i]);
	}
	// Exibe os valores do array
	printf("Valores informados:\n");
	for (i=0; i<tamanho; i++){
		printf("%d ", numeros[i]);
	}
	printf("\n");
	// Libera a memória alocada
	free(numeros);
}
