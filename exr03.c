#include <stdio.h>

int main() {
    int variavel1, variavel2;

    // Leitura das variáveis do teclado
    printf("Digite o valor da variavel1: ");
    scanf("%d", &variavel1);

    printf("Digite o valor da variavel2: ");
    scanf("%d", &variavel2);

    // Comparação dos endereços
    if (&variavel1 > &variavel2) {
        printf("O conteúdo da variavel localizada no maior endereço é: %d\n", variavel1);
    } else if (&variavel1 < &variavel2) {
        printf("O conteúdo da variavel localizada no maior endereço é: %d\n", variavel2);
    } else {
        printf("As variáveis estão armazenadas no mesmo endereço.\n");
    }

    return 0;
}
