#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char*string;
	
	// Alocar mem�ria para uma string
	string = (char *)malloc(50 * sizeof(char));
	
	if(string == NULL){
		printf("Falha na aloca��o de mem�ria.\n");
		return 1;
	}
	
	// Copiar uam mensagem para a string alocada
	strcpy(string, "Ol�, mundo!");
	
	// Usar a string alocada
	printf("A mensagem �: %s\n", string);
	
	// Liberar a mem�ria alocada
	free(string);
	
	return 0;
}
