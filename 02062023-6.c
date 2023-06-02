#include <stdio.h>

int main() {
    float n;
    printf("Ingresa un número : ");
    scanf("%f", &n);
    
    if (n>0) {
        puts("El número es mayor a 0");
    }
    else if(n==0){
    puts("el número es igual a 0");
}
    
    else if(n<0){
    puts("el número es menor a 0");
}
    return 0;
}