#include <stdio.h>

// ======== TORRE: função recursiva para mover para a direita ==========
void moverTorreRecursivo(int casas)
{
    if (casas <= 0)
        return;

    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// ======== RAINHA: função recursiva para mover para a esquerda ==========
void moverRainhaRecursivo(int casas)
{
    if (casas <= 0)
        return;

    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// ======== BISPO: função recursiva com loops aninhados para diagonal (Cima Direita) ==========
void moverBispoRecursivo(int passos)
{
    if (passos <= 0)
        return;

    // Para cada passo, usamos 1 vertical (Cima) e 1 horizontal (Direita)
    for (int i = 0; i < 1; i++) { // Loop vertical
        printf("Cima ");
        for (int j = 0; j < 1; j++) { // Loop horizontal
            printf("Direita\n");
        }
    }

    moverBispoRecursivo(passos - 1);
}

// ======== CAVALO: único movimento em L com loops aninhados, múltiplas variáveis e controle de fluxo ==========
void moverCavaloL() {
    printf("Movimento do Cavalo (1 movimento em L - 2x Cima, 1x Direita):\n");

    // Loop externo com múltiplas variáveis declaradas
    for (int vertical = 0, horizontal = 0; vertical < 2 && horizontal < 1; vertical++) {

        // Controle de fluxo: pula o segundo passo vertical se for par (exemplo didático)
        if (vertical == 1 && (vertical + horizontal) % 2 == 0) {
            continue;
        }

        // Movimento vertical (Cima)
        printf("Cima\n");

        // Loop aninhado para movimento horizontal (1x Direita)
        for (int h = horizontal; h < 1; h++) {
            // Controle de fluxo: interrompe o loop se já estiver no primeiro passo
            if (vertical == 1 && h == 0) {
                printf("Direita\n");
                break;
            }
        }
    }

    printf("---\n"); // Separador visual
}


// ======== Função principal ==========
int main()
{
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
    moverTorreRecursivo(casasTorre);

    printf("\n");

    // ======== Movimento do Bispo ==========
    printf("Movimento do Bispo (%d casas na Diagonal Cima Direita):\n", casasBispo);
    moverBispoRecursivo(casasBispo);

    printf("\n");

    // ======== Movimento da Rainha ==========
    printf("Movimento da Rainha (%d casas para a Esquerda):\n", casasRainha);
    moverRainhaRecursivo(casasRainha);

    printf("\n");

    // ======== Movimento do Cavalo ==========
    moverCavaloL();

    return 0;
}
