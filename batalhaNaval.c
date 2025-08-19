#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int Tabela[10][10];
    int Navio0l;
    int Navio0c;
    int Navio1l;
    int Navio1c;
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            Tabela[i][j] = 0;
        };
    };

    //Coluna alfabetica(margem)
    printf("    ");
    for (int i = 0; i < 10; i++){
        printf(" %c ", 'A' + i);
    }

    printf("\n");
    
    for (int i = 0; i < 10; i++){
        //Coluna de numeros(margem)
        printf("%d | ", i + 1);

        for (int j = 0; j < 10; j++){
            printf(" %d ", Tabela[i][j]);
        };
        printf("\n");
    };
    

    //Pedindo ao usuario a coordenadas dos navios
    printf("\nDigite a coordenada do navio 1: \n");
    printf("Linha:");
    scanf("%d", &Navio0l);
    printf("Coluna:");
    scanf("%d", &Navio0c);
    printf("\nDigite a coordenada do navio 2: \n");
    printf("Linha:");
    scanf("%d", &Navio1l);
    printf("Coluna:");
    scanf("%d", &Navio1c);
    
    for (int j = 0; j < 3; j++){
        Tabela[Navio0l + j][Navio0c] = 3;
    };

    for (int j = 0; j < 3; j++){
        Tabela[Navio1l][Navio1c + j] = 3;
    };

    //Coluna alfabetica(margem)
    printf("    ");
    for (int i = 0; i < 10; i++){
        printf(" %c ", 'A' + i);
    }

    printf("\n");
    
    for (int i = 0; i < 10; i++){
        //Coluna de numeros(margem)
        printf("%d | ", i + 1);

        for (int j = 0; j < 10; j++){
            printf(" %d ", Tabela[i][j]);
        };
        printf("\n");
    };

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
