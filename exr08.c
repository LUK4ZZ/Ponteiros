#include <stdio.h>

int main() {
    // Declarando um array de float com 10 elementos
    float meuArray[10];

    // Preenchendo o array com alguns valores (isso é opcional)
    for (int i = 0; i < 10; ++i) {
        meuArray[i] = i + 1.5;
    }

    // Imprimindo o endereço de cada posição do array
    printf("Enderecos das posicoes do array:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Posicao %d: %p\n", i, (void *)&meuArray[i]);
    }

    return 0;
}
