#include <stdio.h>

int main() {
    int numsecret=9;
    int a;
    printf("Ingresa un número:");
    scanf("%i", &a);
    if(a>numsecret){
    printf("el número ingresado es mayor al secreto");
    }
    else{
    printf("el número es menor que el secreto ");
    }
    return 0;
    }