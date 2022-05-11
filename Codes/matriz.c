#include <stdio.h>
#include <stdlib.h>

int main(void){
    int matriz_1 [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //or
    int matriz_2 [3] [3] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int matriz_3 [3] [5] = {{1, 2, 3, 4, 5},
                            {6, 7, 8, 9, 10},
                            {11, 12, 13, 14, 15}};

    printf("Primeira Matriz: %i\n", matriz_1 [2] [1]);
    printf("Segunda Matriz: %i", matriz_2 [2] [1]);
    printf("\n");
    for (int linha = 0; linha < 3; linha++){
        printf("Linha N.%i= ",linha+1);
        for(int coluna = 0; coluna < 5; coluna++){
            printf("Coluna N.%i: %i ", coluna+1, matriz_3[linha] [coluna]);
        }
        printf("\n");
    }
    return 0;
}