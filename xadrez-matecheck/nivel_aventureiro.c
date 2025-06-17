#include <stdio.h>

int main() {
    // Nível novato
    printf("Movimento do Bispo (Diagonal superior direita):\n");
    for (int passo = 1; passo <= 5; passo++) {
        printf("Diagonal: cima + direita (passo %d)\n", passo);
    }
    printf("\n");

    printf("Movimento da Torre (Direita):\n");
    for (int passo = 1; passo <= 5; passo++) {
        printf("Direita (passo %d)\n", passo);
    }
    printf("\n");

    printf("Movimento da Rainha (Esquerda):\n");
    for (int passo = 1; passo <= 8; passo++) {
        printf("Esquerda (passo %d)\n", passo);
    }
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo (em L) - para baixo e para a esquerda com loops aninhados:\n");
    for (int baixo = 1; baixo <= 2; baixo++) {
        for (int esquerda = 1; esquerda <= 3; esquerda++) {
            printf("Movimento %d para baixo e %d para esquerda\n", baixo, esquerda);
        }
    }
    printf("\n");

    return 0;
}
