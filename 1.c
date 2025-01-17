#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tab[2][3], i, j, trab, soma[2], somatotal;
	
	soma[0] = 0;
	soma[1] = 0;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nEntre com um valor numérico: ");
			scanf("%d", &trab);
			tab[i][j]=trab;
			somatotal+=trab;
			soma[i]+=trab;
		}
	}
	for(i=0;i<2;i++){
		printf("\nLinha %d ---> ", i);
		for(j=0;j<3;j++)
			printf("%d  ", tab[i][j]);
	}

	printf("\n\nA Soma total é: %d", somatotal);
	printf("\n\nA soma da linha 1 é: %d ", soma[0]);
	printf("\n\nA soma da linha 2 é: %d ", soma[1]);
	
	return 0;
}
