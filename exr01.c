#include <stdio.h>

int main() {
    // Declaração de variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declaração de ponteiros
    int *ptrInteiro;
    float *ptrReal;
    char *ptrCaractere;

    // Associação das variáveis aos ponteiros
    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    // Impressão dos valores iniciais
    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificação dos valores usando os ponteiros
    *ptrInteiro = 20;
    *ptrReal = 6.28;
    *ptrCaractere = 'B';

    // Impressão dos valores após a modificação
    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
