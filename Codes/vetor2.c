#include <stdio.h>
#include <stdlib.h>

int main(void){
    float notas[3];
    float total, media;
    
    for (int i = 0; i < 3; i++){
        printf("Insira a %i nota: ", i+1);
        scanf("%f",&notas[i]);
        total += notas[i];
    }
    media = total / 3;
    printf("Sua media foi: %.1f!", media);
    
    return 0;
}