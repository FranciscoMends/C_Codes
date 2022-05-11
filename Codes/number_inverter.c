#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, letter;

    printf("Insira um valor: ");
    scanf("%d", &number);
    
    if (number > 0){
        do{
           letter = number % 10;
           printf("%d", letter);
           number /= 10;
        }while(number != 0);

    }else if (number < 0){
        printf("-");
        number *= -1;
        do{
           letter = number % 10;
           printf("%d", letter);
           number /= 10;
        }while(number != 0);
    }else{
        printf("0(zero) nao e um numero valido!");

    }
    return 0;
}