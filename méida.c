#include <stdio.h>
#include <locale.h>

double calcularMedia(double notas[], int tamanho) {
    double soma = 0.0;
    int i;

    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    double media = soma / tamanho;
    
    return media;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    double notas[3];
    int i;

    printf("Digite as tr�s notas do aluno:\n");
    for (i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
    }
    
    double media = calcularMedia(notas, 3);
    printf("A m�dia aritm�tica das notas �: %.2f\n", media);
    
    return 0;
}
