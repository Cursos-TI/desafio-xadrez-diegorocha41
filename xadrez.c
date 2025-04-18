#include <stdio.h>

// Definindo o número máximo de casas que as peças podem se mover
#define MAX_MOVIMENTO 7

int main() {
    // Posição inicial das peças (exemplo)
    int posX_bispo = 4; // coluna (1 a 8)
    int posY_bispo = 4; // linha (1 a 8)

    int posX_torre = 1; // coluna
    int posY_torre = 1; // linha

    int posX_rainha = 4; // coluna
    int posY_rainha = 4; // linha

    printf("Movimentação do Bispo (diagonal):\n");
    // Simular o movimento diagonal do bispo para cima e para a direita
    for (int i = 1; i <= MAX_MOVIMENTO; i++) {
        int novaX = posX_bispo + i;
        int novaY = posY_bispo + i;
        if (novaX > 8 || novaY > 8) {
            break; // Limite do tabuleiro
        }
        printf("Passo %d: Bispo se move para (%d, %d)\n", i, novaX, novaY);
    }

    printf("\nMovimentação da Torre (horizontal para a direita):\n");
    // Simular o movimento da torre para a direita
    for (int i = 1; i <= MAX_MOVIMENTO; i++) {
        int novaX = posX_torre + i;
        int novaY = posY_torre;
        if (novaX > 8) {
            break; // Limite do tabuleiro
        }
        printf("Passo %d: Torre se move para (%d, %d)\n", i, novaX, novaY);
    }

    printf("\nMovimentação da rainha para esquerda:\n");
    // Simular o movimento da rainha para esquerda
    for (int i = 1; i <= MAX_MOVIMENTO; i++) {
        int novaX = posX_rainha + i;
        int novaY = posY_rainha;
        if (novaX > 8) {
            break; // Limite do tabuleiro
        }
        printf("Passo %d: Torre se move para (%d, %d)\n", i, novaX, novaY);
    }

    return 0;
}