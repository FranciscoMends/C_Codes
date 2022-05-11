#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;

    printf("Insira o primeiro valor: ");
    scanf("%i",&a);
    printf("Insira o segundo valor: ");
    scanf("%i",&b);

    a > b ? printf("A(%i) e maior que B(%i)!", a, b) : printf("B(%i) e maior que A(%i)!", b, a); 

    return 0;
}