#include <stdio.h>

// Função recursiva para movimento do Bispo
void mover_bispo(int casas) {
    if(casas <= 0) return;
    
    printf("Cima\n");
    printf("Direita\n\n");
    mover_bispo(casas - 1);
}

// Função recursiva para movimento da Torre
void mover_torre(int casas) {
    if(casas <= 0) return;
    
    printf("Direita\n\n");
    mover_torre(casas - 1);
}

// Função recursiva para movimento da Rainha
void mover_rainha(int casas) {
    if(casas <= 0) return;
    
    printf("Esquerda\n\n");
    mover_rainha(casas - 1);
}

int main() {
    printf("Desafio Xadrez!\n\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo:\n");
    mover_bispo(5);
    
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    mover_torre(5);
    
    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    mover_rainha(8);
    
    // Movimento do Cavalo: em L para cima e direita
    printf("Movimento do Cavalo (em L para cima e direita):\n");
    
    for(int i = 0; i < 3; i++) {  // Loop controlador
        if(i < 2) {
            printf("Cima\n");
            continue;  // Pula para próxima iteração enquanto i < 2
        }
        
        printf("Direita\n\n");
        break;
    }
    
    return 0;
}