#include <stdio.h>
#include <string.h>

#define TAM 10

void mostrar_tabuleiro(int tab[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

int adicionar_navio(int tab[TAM][TAM], int tipo, int linha, int coluna, const char *direcao) {
    int tamanho = tipo; // tamanho do navio eh igual ao numero que o representa
    int dl = 0, dc = 0;

    if (strcmp(direcao, "N") == 0) { dl = -1; dc = 0; }
    else if (strcmp(direcao, "S") == 0) { dl = 1; dc = 0; }
    else if (strcmp(direcao, "E") == 0) { dl = 0; dc = 1; }
    else if (strcmp(direcao, "W") == 0) { dl = 0; dc = -1; }
    else if (strcmp(direcao, "NE") == 0) { dl = -1; dc = 1; }
    else if (strcmp(direcao, "NW") == 0) { dl = -1; dc = -1; }
    else if (strcmp(direcao, "SE") == 0) { dl = 1; dc = 1; }
    else if (strcmp(direcao, "SW") == 0) { dl = 1; dc = -1; }
    else {
        return -1; // direcao invalida
    }

    // verifica se eh possivel adicionar
    for (int i = 0; i < tamanho; i++) {
        int l = linha + i * dl;
        int c = coluna + i * dc;
        if (l < 0 || l >= TAM || c < 0 || c >= TAM || tab[l][c] != 0) {
            return -1; // fora do tabuleiro ou ja ocupado
        }
    }

    // adiciona o navio
    for (int i = 0; i < tamanho; i++) {
        int l = linha + i * dl;
        int c = coluna + i * dc;
        tab[l][c] = tipo;
    }

    return 0;
}

int main() {
    int tabuleiro[TAM][TAM] = {0};
    while (1) {
        mostrar_tabuleiro(tabuleiro);
        printf("Digite o tipo do navio (1=submarino, 2=destroier, 3=cruzador, 4=porta-avioes, 0=sair): ");
        int tipo; if (scanf("%d", &tipo) != 1) return 0;
        if (tipo == 0) break;
        printf("Linha inicial (0-%d): ", TAM-1); int linha; if (scanf("%d", &linha) != 1) return 0;
        printf("Coluna inicial (0-%d): ", TAM-1); int coluna; if (scanf("%d", &coluna) != 1) return 0;
        char direcao[3];
        printf("Direcao (N, S, E, W, NE, NW, SE, SW): ");
        scanf("%2s", direcao);
        if (adicionar_navio(tabuleiro, tipo, linha, coluna, direcao) != 0) {
            printf("Nao foi possivel adicionar o navio. Verifique posicoes e direcao.\n");
        }
    }
    return 0;
}
