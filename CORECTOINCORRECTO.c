#include <stdio.h>

int main() {
    int numsecret=9;
    int a;
    printf("Ingresa un número:");
    scanf("%i", &a);
    if(a==numsecret){
    printf("el número ingresado es correcto");
    }
    else{
    printf("el número es incorrecto");
    }
    return 0;
    }