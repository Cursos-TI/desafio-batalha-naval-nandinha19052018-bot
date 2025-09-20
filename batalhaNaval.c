#include <stdio.h>

#define TAM_TABULEIRO 10   // tamanho fixo do tabuleiro
#define TAM_NAVIO 3        // tamanho dos navios

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // 1. Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Define coordenadas iniciais dos navios
    // Navio horizontal
    int linhaH = 2, colunaH = 4;
    // Navio vertical
    int linhaV = 5, colunaV = 1;

    // 3. Posiciona navio horizontal
    for (int j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    // 4. Posiciona navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // 5. Exibe o tabuleiro
    printf("\n=== TABULEIRO NIVEL NOVATO ===\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}