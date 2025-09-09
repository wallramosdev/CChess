#include <stdio.h>

int main()
{
    int casasTorre, casasBispo, casasRainha, movimentosCavalo;

    // ======== Entrada de dados ==========
    printf("Quantas casas a Torre deve mover para a Direita? ");
    scanf("%d", &casasTorre);

    printf("Quantas casas o Bispo deve mover na Diagonal Cima Direita? ");
    scanf("%d", &casasBispo);

    printf("Quantas casas a Rainha deve mover para a Esquerda? ");
    scanf("%d", &casasRainha);

    
    printf("Quantos movimentos em L o Cavalo deve realizar? ");
    scanf("%d", &movimentosCavalo);

    printf("\n");

    // ======== Movimento da Torre ==========
    printf("Movimento da Torre (%d casas para a Direita):\n", casasTorre);
    for (int i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // ======== Movimento do Bispo ==========
    int j = 1;
    printf("Movimento do Bispo (%d casas na Diagonal Cima Direita):\n", casasBispo);
    while (j <= casasBispo)
    {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ======== Movimento da Rainha ==========
    int k = 1;
    printf("Movimento da Rainha (%d casas para a Esquerda):\n", casasRainha);
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    printf("\n");

    // ======== Movimento do Cavalo ==========
    // O cavalo se move em "L": 2 casas para baixo e 1 para a esquerda.
    // Vamos repetir esse movimento um número fixo de vezes.
    printf("Movimento do Cavalo (%d vezes o movimento em L - 2x Baixo, 1x Esquerda):\n", movimentosCavalo);

    for (int l = 0; l < movimentosCavalo; l++)
    {
        int m = 0;

        // Loop interno (while): move 2 casas para baixo
        while (m < 2)
        {
            printf("Baixo\n");
            m++;
        }

        // Depois do while, move 1 casa para a esquerda
        printf("Esquerda\n");

        printf("---\n"); // Separador de movimentos em L
    }

    return 0;
}
