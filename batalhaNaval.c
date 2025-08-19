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
    int NavioD0l;
    int NavioD0c;
    int NavioD1l;
    int NavioD1c;
    
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
    printf("Linha(1 - 10):");
    scanf(" %d", &Navio0l);// espaço antes do % no scanf ignora tabs e etc    
    Navio0l--;//Decremento para nao dar erro//Decremento para nao dar erro
    printf("Coluna:(A - J)");
    char coluna0c;
    scanf(" %c", &coluna0c);// espaço antes do % no scanf ignora tabs e etc=
    Navio0c = coluna0c - 'A';//Transformar em numero as letras

    printf("\nDigite a coordenada do navio 2: \n");
    printf("Linha(1 - 10):");
    scanf(" %d", &Navio1l);// espaço antes do % no scanf ignora tabs e etc    
    Navio1l--;//Decremento para nao dar erro
    printf("Coluna:(A - J)");
    char coluna1c;
    scanf(" %c", &coluna1c);// espaço antes do % no scanf ignora tabs e etc
    Navio1c = coluna1c - 'A';//Transformar em numero as letras

    printf("\nDigite a coordenada do navio na dioagonal 1: \n");
    printf("Linha(1 - 10):");
    scanf(" %d", &NavioD0l);// espaço antes do % no scanf ignora tabs e etc
    NavioD1l--;//Decremento para nao dar erro
    printf("Coluna:(A - J)");
    char colunaD0c;
    scanf(" %c", &colunaD0c);// espaço antes do % no scanf ignora tabs e etc
    NavioD0c = colunaD0c - 'A';//Transformar em numero as letras

    printf("\nDigite a coordenada do navio na dioagonal 2: \n");
    printf("Linha(1 - 10):");
    scanf(" %d", &NavioD1l);// espaço antes do % no scanf ignora tabs e etc
    NavioD1l--;//Decremento para nao dar erro
    printf("Coluna:(A - J)");
    char colunaD1c;
    scanf(" %c", &colunaD1c);// espaço antes do % no scanf ignora tabs e etc
    NavioD1c = colunaD1c - 'A';//Transformar em numero as letras
    
    //Adicionando os navios
    //Navio 1 * vertical
    for (int j = 0; j < 3; j++){
        Tabela[Navio0l + j][Navio0c] = 3;
    };

    //Navio 2 * horizontal
    for (int j = 0; j < 3; j++){
        Tabela[Navio1l][Navio1c + j] = 3;
    };

    //Navio 3 * Dioagonal
    for (int j = 0; j < 3; j++){
        Tabela[NavioD0l + j][NavioD0c + j] = 3;
    };

    //Navio 4 * Dioagonal
    for (int j = 0; j < 3; j++){
        Tabela[NavioD1l - j][NavioD1c - j] = 3;
    };

    //Coluna alfabetica(margem)
    printf("    ");
    for (int i = 0; i < 10; i++){
        printf(" %c ", 'A' + i);
    }
    //Espaço somente
    printf("\n");
    //Tabela
    for (int i = 0; i < 10; i++){
        //Coluna de numeros(margem)
        printf("%d | ", i + 1);
        //Tabela inteira 
        for (int j = 0; j < 10; j++){
            printf(" %d ", Tabela[i][j]);
        };
        printf("\n");
    };

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
