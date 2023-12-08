#include <stdio.h>

int main() {
    int variavel1, variavel2;

    // Atribuição de valores às variáveis (poderiam ser lidos do usuário)
    variavel1 = 42;
    variavel2 = 99;

    // Comparação dos endereços
    if (&variavel1 > &variavel2) {
        printf("O endereço de variavel1 é maior: %p\n", (void*)&variavel1);
    } else if (&variavel1 < &variavel2) {
        printf("O endereço de variavel2 é maior: %p\n", (void*)&variavel2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
