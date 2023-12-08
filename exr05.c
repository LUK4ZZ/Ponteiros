#include <stdio.h>

// Função para trocar o conteúdo de duas variáveis
void ordenarValores(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    // Leitura dos valores do teclado
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    // Exibição dos valores antes da ordenação
    printf("Valores antes da ordenação: %d, %d\n", valor1, valor2);

    // Chamando a função para ordenar os valores
    ordenarValores(&valor1, &valor2);

    // Exibição dos valores após a ordenação
    printf("Valores após a ordenação: %d, %d\n", valor1, valor2);

    return 0;
}
