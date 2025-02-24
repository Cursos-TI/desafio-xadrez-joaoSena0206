#include <stdio.h>


void mostraMovimentosTorre(int movimentosTorre, int i)
{
    if (i == movimentosTorre)
    {
        return;
    }

    printf("Direita\n");

    mostraMovimentosTorre(movimentosTorre, i + 1);
}

void mostraMovimentosBispo(int movimentosBispo, int i)
{
    if (i == movimentosBispo)
    {
        return;
    }

    printf("Cima, Direita\n");

    mostraMovimentosBispo(movimentosBispo, i + 1);
}

void mostraMovimentosRainha(int movimentosRainha, int i)
{
    if (i == movimentosRainha)
    {
        return;
    }

    printf("Esquerda\n");

    mostraMovimentosRainha(movimentosRainha, i + 1);
}

int main() {
    const int TORRE_MOVIMENTOS = 5;
    const int BISPO_MOVIMENTOS = 5;
    const int RAINHA_MOVIMENTOS = 8;
    const int CAVALO_MOVIMENTOS_CIMA = 2;
    const int CAVALO_MOVIMENTOS_LADO = 1;

    // Mostra os movimentos da torre
    printf("Movimentos da Torre: \n\n");

    mostraMovimentosTorre(TORRE_MOVIMENTOS, 0);

    // Mostra os movimentos do bispo
    printf("\nMovimentos do Bispo: \n\n");

    mostraMovimentosBispo(BISPO_MOVIMENTOS, 0);

    // Mostra os movimentos da rainha
    printf("\nMovimentos da Rainha: \n\n");

    mostraMovimentosRainha(RAINHA_MOVIMENTOS, 0);

    // Mostra os movimentos do cavalo
    printf("\nMovimentos do Cavalo: \n\n");

    for (int i = 0, j = 0; i < CAVALO_MOVIMENTOS_CIMA; i++)
    {
        printf("Cima\n");

        if (i == CAVALO_MOVIMENTOS_CIMA - 1)
        {
            while (j < CAVALO_MOVIMENTOS_LADO)
            {
                printf("Direita\n");

                j++;
            }
        }
    }

    return 0;
}