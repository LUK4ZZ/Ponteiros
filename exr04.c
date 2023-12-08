#include <stdio.h>

// Função para trocar o conteúdo de duas variáveis
void trocarConteudo(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valor1, valor2;

    // Leitura dos valores do teclado
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    // Exibição dos valores antes da troca
    printf("Valores antes da troca: %d, %d\n", valor1, valor2);

    // Chamando a função para trocar o conteúdo
    trocarConteudo(&valor1, &valor2);

    // Exibição dos valores após a troca
    printf("Valores depois da troca: %d, %d\n", valor1, valor2);

    return 0;
}
