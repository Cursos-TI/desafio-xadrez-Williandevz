#include <stdio.h>

int main() {

    // ============================================================
    //                  MOVIMENTO DA TORRE (FOR)
    // ============================================================
    // A torre no xadrez se move em linha reta. Aqui, simulamoss
    // 5 casas para a direita usando a estrutura de repetição FOR.

    int casasTorre = 5;  // número de casas que a torre deve andar

    printf("=== Movimento da Torre ===\n");
    for(int i = 1; i <= casasTorre; i++){
        printf("Direita\n");
    }


    // ============================================================
    //                 MOVIMENTO DO BISPO (WHILE)
    // ============================================================
    // O bispo anda sempre na diagonal. Neste desafio, iremos
    // mover o bispo 5 casas na diagonal para cima e à direita.
    // Representamos isso imprimindo: "Cima Direita".

    int casasBispo = 5;
    int contador = 1; // contador para o while

    printf("\n=== Movimento do Bispo ===\n");
    while(contador <= casasBispo){
        printf("Cima Direita\n");
        contador++;
    }


    // ============================================================
    //               MOVIMENTO DA RAINHA (DO-WHILE)
    // ============================================================
    // A rainha pode se mover em qualquer direção, mas o desafio
    // pede para simular 8 casas para a esquerda.
    // Usamos a estrutura DO-WHILE para isso.

    int casasRainha = 8;
    int passos = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda\n");
        passos++;
    } while(passos <= casasRainha);


    return 0;
}
