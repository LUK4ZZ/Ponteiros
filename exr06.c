#include <stdio.h>

// Função para calcular a soma do dobro de dois números e modificar os valores originais
int somaDobro(int *a, int *b) {
    // Armazenar o dobro de A na própria variável A
    *a = 2 * (*a);

    // Armazenar o dobro de B na própria variável B
    *b = 2 * (*b);

    // Retornar a soma do dobro dos dois números
    return *a + *b;
}

int main() {
    int valorA, valorB;

    // Leitura dos valores do teclado
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    // Chamar a função e armazenar o resultado
    int resultado = somaDobro(&valorA, &valorB);

    // Exibição do resultado
    printf("A soma do dobro de A e B é: %d\n", resultado);
    printf("Novo valor de A: %d\n", valorA);
    printf("Novo valor de B: %d\n", valorB);

    return 0;
}
