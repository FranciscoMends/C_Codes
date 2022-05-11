#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x;
    int factorial = 1;
    printf("Insira um numero: ");
    scanf("%d",&x);

    while(x>=1){
        factorial *= x;
        x--;
    }
    printf("O numero e: %d", factorial);

    return 0;
}