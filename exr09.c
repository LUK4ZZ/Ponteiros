#include <stdio.h>

int main() {
    // Declarando uma matriz de inteiros 3x3
    int minhaMatriz[3][3];

    // Preenchendo a matriz com alguns valores (isso é opcional)
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            minhaMatriz[i][j] = i * 3 + j + 1;
        }
    }

    // Imprimindo o endereço de cada posição da matriz
    printf("Enderecos das posicoes da matriz:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Posicao (%d, %d): %p\n", i, j, (void *)&minhaMatriz[i][j]);
        }
    }

    return 0;
}
