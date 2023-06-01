#include <stdio.h>

int main() {
    int c, a, b;
int res=0;
printf("ingresa el primer número\n");
scanf("%i", &a);
printf("ingresa el segundo número\n");
scanf("%i", &b);
    if (a%b == 0) {
        printf("%d es divisible por %d\n", a, b);
        c =a / b;
        printf("el divisor es: %d\n", b);
    printf("el dividendo es: %d\n", a);
    printf("el cociente es: %d\n", c);;
    printf("el residuo es: %d\n", res);
    } else {
        printf("%d no es divisible por %d\n", a, b);
    }
    
    

    return 0;
}
