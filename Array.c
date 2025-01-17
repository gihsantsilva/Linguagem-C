#include <stdio.h>
#include <locale.h>

void imprime(int[],int);
int maxRecursivo(int[], int);
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tab[]={44,6,8,1,4,9,10,94}, n=8;
	imprime(tab,8);
	printf("Maior valor: %d", maxRecursivo(tab, n));
}
void imprime(int v[], int n){
	int i;
	printf("Array:  ");
	for (i=0;i<n;i++)
		printf("\n%d  ", v[i]);
	printf("\n");
}
int maxRecursivo(int A[], int n){
	if(n==1)
		return A[0];
	else{
		int x=maxRecursivo(A, n-1);
		if(x<A[n-1])
			return A[n-1];
		else
			return x;
	}
}
