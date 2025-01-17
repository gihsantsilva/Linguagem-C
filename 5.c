#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	struct Aluno {
		int codAluno;
		char nomeAluno[50];
		int idadeAluno;
	};
	
	//declaração do array de Alunos
	struct Aluno turma[3];
	
	
	//instanciação dos registros
	turma[0].codAluno = 10;
	strcpy(turma[0].nomeAluno, "Giovani");
	turma[0].idadeAluno = 18;
 
 	turma[1].codAluno = 20;
	strcpy(turma[1].nomeAluno, "Gustavo");
	turma[0].idadeAluno = 19;
	 
	turma[2].codAluno = 30;
	strcpy(turma[2].nomeAluno, "Murilo");
	turma[2].idadeAluno = 19;
	 
	//impressão dos registros
	
	int i;
	for (i = 0; i < 3; i ++) {
		printf("\nDados do Aluno: \n");
		printf("Código: %d\n", turma[i].codAluno);
		printf("Nome: %s\n", turma[i].nomeAluno);
		printf("Idade: %d\n", turma[i].idadeAluno);	
		printf("\n");
	}
	
	
	return 0;
}
