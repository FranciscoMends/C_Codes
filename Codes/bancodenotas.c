#include <stdio.h>
#include <stdlib.h>

int main(void){
    float matriz[4][4];
    float total;
    float media[4];

    for (int aluno = 0; aluno < 4; aluno++){
        total = 0;
        printf("Aluno Numero 0%i=>\n",aluno+1);
        for(int nota = 0; nota < 4; nota++){
            printf("Insira a %i nota: ", nota+1);
            scanf("%f", &matriz[aluno][nota]);
            total += matriz[aluno][nota];
        }
        media[aluno] = total / 4;
        printf("Media deste aluno: %.1f\n", media[aluno]);
        printf("\n");
    }

    printf("Media dos respectivos alunos: \n");
    for (int i = 0; i < 4; i++){
        printf("Media do aluno numero 0%i= %.1f!\n",i+1, media[i]);
    }

    return 0;
}