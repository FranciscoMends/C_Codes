#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nota[3], prova;
    
    nota[0] = 10;
    nota[1] = 8;
    nota[2] = 6;

    printf("Qual nome gostaria de visualizar? \n1.parcial \n2.mediana \n3.global \nInsira o valor aqui: ");
    scanf("%i",&prova);
    //fgets(prova,7,stdin);

    
    if (prova == 1){
        printf("Nota parcial: %i",nota[0]);
    } else if (prova == 2){
        printf("Nota mediana: %i",nota[1]);
    } else if (prova == 3){
        printf("Nota global: %i",nota[2]);
    } else{
        printf("Comando nao valido!");
    }

    return 0;
}