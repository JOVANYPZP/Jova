#include <stdio.h>

int main() {
    char car;

    printf("Ingrese un carácter: ");
    scanf("%c", &car);

    if ((car == 'a') || (car == 'A') || (car == 'e') || (car == 'E') || (car == 'i') || (car == 'I') || (car == 'o') || (car == 'O') || (car == 'u') || (car == 'U')) {
        printf("%c es una vocal.\n", car);
    } else {
    printf("%c no es una vocal\n", car);
        }

    return 0;
}
