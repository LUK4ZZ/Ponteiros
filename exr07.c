#include <stdio.h>

// Função para calcular a soma de dois números e armazenar o resultado na variável A
void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int valorA, valorB;

    // Leitura dos valores do teclado
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    // Chamar a função para calcular a soma e modificar o valor de A
    calcularSoma(&valorA, valorB);

    // Exibição dos valores de A e B
    printf("Novo valor de A: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);

    return 0;
}
