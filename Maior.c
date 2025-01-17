#include <stdio.h>
#include <locale.h>
int func(int [], int);
//-------------------------------------------
int main(){
	setlocale(LC_ALL, "Portuguese");
	int maiorarray;
	int array[3];
	
	printf("Entre com o primeiro valor inteiro: ");
	scanf("%d", &array[0]);
	printf("Entre com o segundo valor inteiro: ");
	scanf("%d", &array[1]);
	printf("Entre com o terceiro valor inteiro: ");
	scanf("%d", &array[2]);
	
	maiorarray = func(array, 3);
	printf("\nO maior elemento do array = %d", maiorarray);
	return 0;
}
//-------------------------------------------------------------------
int func(int array[], int tamanho) {
    int i=0, maior = array[0];
    
    for (i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    return maior;
}
