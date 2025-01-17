#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char*string;
	
	// Alocar memória para uma string
	string = (char *)malloc(50 * sizeof(char));
	
	if(string == NULL){
		printf("Falha na alocação de memória.\n");
		return 1;
	}
	
	// Copiar uam mensagem para a string alocada
	strcpy(string, "Olá, mundo!");
	
	// Usar a string alocada
	printf("A mensagem é: %s\n", string);
	
	// Liberar a memória alocada
	free(string);
	
	return 0;
}
