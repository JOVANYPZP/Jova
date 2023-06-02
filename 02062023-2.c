#include <stdio.h>

int main() {
    float n;
    printf("Ingresa un número : ");
    scanf("%f", &n);
    
    if (n>0) {
        printf("El número es mayor a 0\n");
        puts("El número es mayor a 0");
    }
    if(n==0){
    printf("el número es igual a 0\n");
    puts("el número es igual a 0");
}
    
    if(n<0){
    printf("el número es menor a 0\n");
    puts("el número es menor a 0");
}
    return 0;
}