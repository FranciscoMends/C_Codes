#include <stdio.h>
#include <stdlib.h>

// \n = pula uma linha
// \t = pula um espaço
// %d inteiro
// %f float
// %s string

int main(){
    char name[20];
    int a, b, c;

    printf("Nome do aluno: ");
    scanf("%s", &name);
    printf("Primeira Nota: ");
    scanf("%d", &a);
    printf("Segunda Nota: ");
    scanf("%d", &b);
    printf("Terceira Nota: ");
    scanf("%d", &c);
    float final = (a + b + c)/3;

    printf("Ola, %s. Sua nota final foi de: %f", name, final);
    return 0;  
}
