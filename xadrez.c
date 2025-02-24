#include <stdio.h>


int main() {
    const int TORRE_MOVIMENTOS = 5;
    const int BISPO_MOVIMENTOS = 5;
    const int RAINHA_MOVIMENTOS = 8;

    // Mostra os movimentos da torre
    printf("Movimentos da Torre: \n\n");

    for (int i = 0; i < TORRE_MOVIMENTOS; i++)
    {
        printf("Direita\n");
    }

    // Mostra os movimentos do bispo
    printf("\nMovimentos do Bispo: \n\n");

    int i = 0;

    while (i < BISPO_MOVIMENTOS)
    {
        printf("Cima, Direita\n");

        i++;
    }

    i = 0; // Muda o valor da variável para 0, para que possa ser utilizada na iteração da rainha

    // Mostra os movimentos da rainha
    printf("\nMovimentos da Rainha: \n\n");

    do
    {
        printf("Esquerda\n");

        i++;
    }
    while (i < RAINHA_MOVIMENTOS);

    return 0;
}
