#include <stdio.h>
#include <locale.h>

struct Aluno {
    char nome[50];
    double nota;
};

double calcularMedia(struct Aluno *alunos, int numAlunos) {
    double soma = 0.0;
    
    int i;
    for (i = 0; i < numAlunos; i++) {
        soma += alunos[i].nota;
    }

    return soma / numAlunos;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    struct Aluno alunos[3];
    
    int i;
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", &alunos[i].nome);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%lf", &alunos[i].nota);
    }

    double media = calcularMedia(alunos, 3);
    printf("\nA média das notas dos alunos é: %.2f\n", media);

    return 0;
}
