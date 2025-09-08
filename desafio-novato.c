#include <stdio.h>

int main() {
    int casasTorre, casasBispo, casasRainha;

    // ======== Entrada de dados ==========
    printf("Quantas casas a Torre deve mover para a Direita? ");
    scanf("%d", &casasTorre);

    printf("Quantas casas o Bispo deve mover na Diagonal Cima Direita? ");
    scanf("%d", &casasBispo);

    printf("Quantas casas a Rainha deve mover para a Esquerda? ");
    scanf("%d", &casasRainha);

    printf("\n");

    // ======== Movimento da Torre ==========
    printf("Movimento da Torre (%d casas para a Direita):\n", casasTorre);
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ======== Movimento do Bispo ==========
    int j = 1;
    printf("Movimento do Bispo (%d casas na Diagonal Cima Direita):\n", casasBispo);
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ======== Movimento da Rainha ==========
    int k = 1;
    printf("Movimento da Rainha (%d casas para a Esquerda):\n", casasRainha);
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
