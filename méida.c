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

    printf("Digite as três notas do aluno:\n");
    for (i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
    }
    
    double media = calcularMedia(notas, 3);
    printf("A média aritmética das notas é: %.2f\n", media);
    
    return 0;
}
