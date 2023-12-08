#include <stdio.h>

int main() {
    // Declarando um array de inteiros com 5 elementos
    int meuArray[5];

    // Preenchendo o array com valores lidos do teclado
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &meuArray[i]);
    }

    // Imprimindo o dobro de cada valor usando aritmética de ponteiros
    printf("O dobro de cada valor:\n");
    for (int i = 0; i < 5; ++i) {
        // Utilizando aritmética de ponteiros para acessar os elementos do array
        int *ptr = &meuArray[i];
        printf("%d ", (*ptr) * 2);
    }

    return 0;
}
