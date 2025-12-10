#include <stdio.h>

void moverTorreDireitaRecursivo(int casasRestantes);
void moverBispoDiagonalRecursivo(int passoAtual, int totalPassos);
void moverRainhaEsquerdaRecursivo(int casasRestantes);
void moverCavaloComplexo(int movimentosVerticais, int movimentosHorizontais);

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloVertical = 2;
    const int casasCavaloHorizontal = 1;

    printf("Movimento da Torre:\n");
    moverTorreDireitaRecursivo(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoDiagonalRecursivo(1, casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaEsquerdaRecursivo(casasRainha);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavaloComplexo(casasCavaloVertical, casasCavaloHorizontal);

    return 0;
}

void moverTorreDireitaRecursivo(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }
    printf("Direita\n");
    moverTorreDireitaRecursivo(casasRestantes - 1);
}

void moverBispoDiagonalRecursivo(int passoAtual, int totalPassos) {
    int v, h;

    if (passoAtual > totalPassos) {
        return;
    }

    for (v = 0; v < 1; v++) {
        for (h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoDiagonalRecursivo(passoAtual + 1, totalPassos);
}

void moverRainhaEsquerdaRecursivo(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaEsquerdaRecursivo(casasRestantes - 1);
}

void moverCavaloComplexo(int movimentosVerticais, int movimentosHorizontais) {
    int passoVertical, passoHorizontal;

    for (passoVertical = 1; passoVertical <= movimentosVerticais; passoVertical++) {
        printf("Cima\n");

        if (passoVertical < movimentosVerticais) {
            continue;
        }

        passoHorizontal = 0;

        while (passoHorizontal < movimentosHorizontais) {
            printf("Direita\n");
            passoHorizontal++;
            if (passoHorizontal >= movimentosHorizontais) {
                break;
            }
        }
    }
}
