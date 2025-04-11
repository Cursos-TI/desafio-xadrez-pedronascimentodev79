#include <stdio.h>

// Função recursiva para a Torre: move-se em linha reta para a Direita
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para o Bispo: move-se na diagonal (Cima Direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função recursiva para a Rainha: move-se em linha reta para a Esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Movimento complexo do Cavalo: duas casas para cima e uma para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosFeitos = 0;

    for (int vertical = 2; vertical >= 1; vertical--) { // sobe duas casas
        if (vertical == 1) {
            // Quando estiver na segunda casa para cima, mover uma para a direita
            for (int horizontal = 0; horizontal < 2; horizontal++) {
                if (horizontal == 1) {
                    printf("Direita\n");
                    movimentosFeitos++;
                    break;
                } else {
                    continue;
                }
            }
        }
        printf("Cima\n");
        movimentosFeitos++;
        if (movimentosFeitos >= 3) break;
    }
}

// Movimento do Bispo com loops aninhados (externo: vertical / interno: horizontal)
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");

    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) { // horizontal (1 passo por ciclo)
            printf("Cima Direita\n");
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBispoLoops = 5;

    // Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo com recursividade
    printf("Movimento do Bispo (recursividade):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Rainha com recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo com loops aninhados complexos
    moverCavalo();
    printf("\n");

    // Bispo com loops aninhados (vertical + horizontal)
    moverBispoComLoops(casasBispoLoops);
    printf("\n");

    return 0;
}
