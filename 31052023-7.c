#include <stdio.h>

int main() {
    int numSecret = 9;
    int a;
    printf("Ingresa un número: ");
    scanf("%i", &a);
    
    (a == numSecret) ? printf("El número ingresado es correcto.\n") : printf("El número es incorrecto.\n");
    
    return 0;
}
