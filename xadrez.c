#include <stdio.h>

// Constantes globais para movimentos
const int movimentosBispo = 5;
const int movimentosTorre = 5;
const int movimentosRainha = 8;

// Função para imprimir os movimentos
void moverPeca(const char* direcao, int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("%s - Passo %d\n", direcao, i);
    }
    printf("\n");
}

// Função para mover o cavalo em L
void moverCavaloEmL(const char* direcao1, const char* direcao2, int movimentos) {
    // Loop externo usando for para controlar as repetições de movimentos
    for (int i = 1; i <= movimentos; i++) {
        printf("Movimento do Cavalo:\n");

        // Loop interno usando while para movimento do cavalo
        int j = 1; // contador para o loop while
        while (j <= 2) {  // Move o cavalo para baixo (2 casas)
            printf("Movendo para %s - Passo %d\n", direcao1, j);
            j++;
        }

        // Loop adicional usando do-while para mover o cavalo para a esquerda (1 casa)
        int k = 1; // contador para o loop do-while
        do {
            printf("Movendo para %s - Passo %d\n", direcao2, k);
            k++;
        } while (k <= 1); // Move o cavalo para a esquerda uma casa

        printf("\n");
    }
}

int main() {
    // Movimento do Bispo (diagonal superior direita)
    printf("Movimento do Bispo:\n");
    moverPeca("Diagonal Superior Direita", movimentosBispo);

    // Movimento da Torre (direita)
    printf("Movimento da Torre:\n");
    moverPeca("Direita", movimentosTorre);

    // Movimento da Rainha (esquerda)
    printf("Movimento da Rainha:\n");
    moverPeca("Esquerda", movimentosRainha);

     // Movimento do Cavalo
    moverCavaloEmL("Direita", "Esquerda",  3);

    // Exemplo de movimento adicional (loop while)
    printf("Movimento Adicional: Loop Controlado\n");
    int contador = 0;
    while (contador < movimentosRainha) {
        printf("Loop Controlado - Passo %d\n", contador + 1);
        contador++;
    }
    printf("\n");

    // Movimento com do-while
    printf("Movimento Alternativo com do-while:\n");
    int contador2 = 1;
    do {
        printf("Direção Alternativa - Passo %d\n", contador2);
        contador2++;
    } while (contador2 <= movimentosTorre);

    printf("\n");

    printf("Desafio completo!\n");

    return 0;
}
