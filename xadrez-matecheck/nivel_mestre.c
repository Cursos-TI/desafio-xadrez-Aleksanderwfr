#include <stdio.h>

void moverBispoRecursivo(int passo) {
    if (passo > 5) {
        printf("\n");
        return;
    }
    printf("Bispo: diagonal direita para cima (passo %d)\n", passo);
    moverBispoRecursivo(passo + 1);
}

int main() {
    // Novato
    printf("Movimento da Torre:\n");
    for (int passo = 1; passo <= 5; passo++) {
        printf("Direita (passo %d)\n", passo);
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    for (int passo = 1; passo <= 8; passo++) {
        printf("Esquerda (passo %d)\n", passo);
    }
    printf("\n");

    // Bispo recursivo (substitui o do novato)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(1);

    // Cavalo nível mestre
    printf("Movimento do Cavalo (1 vez em L para cima e direita) - nível mestre:\n");
    printf("Passo Cavalo: 1 para cima, 2 para direita\n");
    printf("Passo Cavalo: 2 para cima, 1 para direita\n");
    printf("\n");

    return 0;
}
