#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int * p_array; // ponteiro do array
	int tamanho = 5;
	
	// Alocar mem�ria para um array de inteiros
	p_array = (int *)malloc(tamanho * sizeof(int));
	
	if(p_array == NULL){
		printf("Falha na aloca��o de mem�ria.\n");
		return 1;
	}
	
	int i;
	// Inicializar o array com valores
	for (i=0; i<tamanho; i++){
		p_array[i] = i*2;
	}
	
	// Usar o array alocado
	printf("Valores do array alocado: ");
	for (i=0; i<tamanho; i++){
		printf("%d ", p_array[i]);
	}
	printf("\n");
	
	// Liberar a mem�ria alocada
	free(p_array);
}
