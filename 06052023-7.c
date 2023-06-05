#include <stdio.h>

int main()
{
    int num_blancos = 0, num_digitos = 5, num_distintos = 3;
    char c;
    printf("ingresa un número");
    scanf("%c", &c);
    switch (c) {
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            num_digitos++;
            printf("%i", num_digitos);
            break;
        case ' ': case '\t': case '\n':
            num_blancos++;
            printf("%i", num_blancos);
            break;
        default:
            num_distintos++;
            printf("%i", num_distintos);
    }
    
    return 0;
}
