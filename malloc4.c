#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho;
	int * numeros;
	
	// Solicita ao usu�rio o tamanho do array
	printf("Informe o tamanho do array de n�meros: ");
	scanf("%d", &tamanho);
	
	// Aloca mem�ria para o array de n�emros
	numeros = (int *)malloc(tamanho*sizeof(int));
	
	if(numeros == NULL){
		printf("Falha na aloca��o de mem�ria.\n");
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
	// Libera a mem�ria alocada
	free(numeros);
}
