#include <stdio.h>
#include <locale.h>

// Fun��o para calcular o Fibonacci
int calcularFibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
    }
}

int main() {
    // Configura o ambiente para imprimir em portugu�s
    setlocale(LC_ALL, "Portuguese");

    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro para calcular o Fibonacci: ");
    scanf("%d", &numero);

    if (numero < 0) {
        // Verifica se o n�mero � negativo e exibe uma mensagem de erro
        printf("O n�mero deve ser n�o negativo.\n");
    } else {
        // Chama a fun��o calcularFibonacci e armazena o resultado
        int resultado = calcularFibonacci(numero);

        // Exibe o resultado
        printf("O Fibonacci de %d �: %d\n", numero, resultado);
    }

    return 0;
}
