#include <stdio.h>
#include <locale.h>

// Função para calcular o Fibonacci
int calcularFibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
    }
}

int main() {
    // Configura o ambiente para imprimir em português
    setlocale(LC_ALL, "Portuguese");

    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro para calcular o Fibonacci: ");
    scanf("%d", &numero);

    if (numero < 0) {
        // Verifica se o número é negativo e exibe uma mensagem de erro
        printf("O número deve ser não negativo.\n");
    } else {
        // Chama a função calcularFibonacci e armazena o resultado
        int resultado = calcularFibonacci(numero);

        // Exibe o resultado
        printf("O Fibonacci de %d é: %d\n", numero, resultado);
    }

    return 0;
}
