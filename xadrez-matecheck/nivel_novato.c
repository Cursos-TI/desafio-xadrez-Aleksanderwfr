#include <stdio.h>

#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    // Movimento do Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo (Diagonal superior direita):\n");
    for (int i = 1; i <= BISPO_PASSOS; i++) {
        printf("Diagonal: cima + direita (passo %d)\n", i);
    }

    // Movimento da Torre: 5 casas para a direita
    printf("\nMovimento da Torre (Direita):\n");
    int count = 0;
    while (count < TORRE_PASSOS) {
        printf("Direita (passo %d)\n", count + 1);
        count++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha (Esquerda):\n");
    int passo = 1;
    do {
        printf("Esquerda (passo %d)\n", passo);
        passo++;
    } while (passo <= RAINHA_PASSOS);

    return 0;
}
