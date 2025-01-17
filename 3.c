#include <stdio.h>
#include <locale.h>

struct Aluno{
	char nome[60];
	double nota;
};

int main (){
	setlocale(LC_ALL, "Portuguese");
	struct Aluno alunos[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Digite o nome do aluno %d: ", i+1);
		scanf("%s", &alunos[i].nome);
		
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &alunos[i].nota);
		printf("\n");
	}
	printf("\nDados dos alunos:\n");

	for(i=0;i<3;i++){
		printf("Aluno %d: Nome: %s, Nota: %.2f\n", i+1, alunos[i].nome, alunos[i].nota);
	}
	return 0;
}
