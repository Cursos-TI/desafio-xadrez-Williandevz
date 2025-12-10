#include <stdio.h>

int main() {

    // ============================================================
    //                  MOVIMENTO DA TORRE (FOR)
    // ============================================================
    int casasTorre = 5;

    printf("=== Movimento da Torre ===\n");
    for(int i = 1; i <= casasTorre; i++){
        printf("Direita\n");
    }


    // ============================================================
    //                 MOVIMENTO DO BISPO (WHILE)
    // ============================================================
    int casasBispo = 5;
    int contador = 1;

    printf("\n=== Movimento do Bispo ===\n");
    while(contador <= casasBispo){
        printf("Cima Direita\n");
        contador++;
    }


    // ============================================================
    //               MOVIMENTO DA RAINHA (DO-WHILE)
    // ============================================================
    int casasRainha = 8;
    int passos = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda\n");
        passos++;
    } while(passos <= casasRainha);


    // ============================================================
    //                MOVIMENTO DO CAVALO (LOOPS ANINHADOS)
    // ============================================================
    // O cavalo se move em "L":
    // - 2 casas em uma direção (BAIXO)
    // - 1 casa perpendicular (ESQUERDA)
    //
    // Aqui, usamos:
    // - Um loop FOR para controlar as duas casas para baixo.
    // - Um loop WHILE aninhado para executar a casa final para a esquerda.
    //
    // A saída deve ser:
    // Baixo
    // Baixo
    // Esquerda

    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("\n=== Movimento do Cavalo ===\n");

    // Primeiro movimento: 2 casas para baixo (loop for obrigatório)
    for(int i = 1; i <= casasBaixo; i++){
        printf("Baixo\n");
    }

    // Segundo movimento: 1 casa para a esquerda (loop while aninhado)
    int j = 1;
    while(j <= casasEsquerda){
        printf("Esquerda\n");
        j++;
    }


    return 0;
}
