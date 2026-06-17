#include <stdio.h>

int main() {

    int casasTorre = 5;   
    int casasBispo = 5;   
    int casasRainha = 8;  

    int i; 
    int j; 
    int k; 

    
    printf("=== Movimento da Torre (Direita) ===\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    printf("=== Movimento do Bispo (Cima, Direita) ===\n");

    j = 1; 

    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++; 
    }

    printf("\n");
    printf("=== Movimento da Rainha (Esquerda) ===\n");

    k = 1; 

    do {
        printf("Esquerda\n");
        k++; 
    } while (k <= casasRainha);

    return 0;
}