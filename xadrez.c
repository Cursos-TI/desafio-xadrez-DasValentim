#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Movimento do Bispo: 5 casas na diagonal superior direita (usando for)
    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
        printf("\n");
    }
    // Movimento da Torre: 5 casas para a direita (usando while)
    printf("Movimento da Torre:\n");
    int cont_torre = 0;
    while(cont_torre < 5) {
        printf("Direita\n");
        printf("\n");
        cont_torre++;
    }
    // Movimento da Rainha: 8 casas para a esquerda (usando do while)
    printf("Movimento da Rainha:\n");
    int cont_rainha = 0;
    do {
        printf("Esquerda\n");
        printf("\n");
        cont_rainha++;
    } while(cont_rainha < 8);

    // Movimento do Cavalo: em L para baixo e esquerda (usando loops aninhados)
    printf("Movimento do Cavalo (em L para baixo e esquerda):\n");
    // Loop externo (for) controla a parte horizontal do L (1 casas para esquerda)
    for(int i = 0; i < 1; i++) {
        // Loop interno (while) controla a parte vertical do L (2 casa para baixo)
        int cont_cavalo = 0;
        while(cont_cavalo < 2){
            printf("Baixo\n");
            cont_cavalo++;
        }
        printf("Esquerda\n");
        printf("\n");
    }

    return 0;
}
