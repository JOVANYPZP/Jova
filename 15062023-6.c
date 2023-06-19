#include <stdio.h>

void max(int *n1, int *n2) {
    printf("Ingrese el primer número: ");
    scanf("%d", n1);

    printf("Ingrese el segundo número: ");
    scanf("%d", n2);

    if (*n1 > *n2) {
        printf("El número más grande es: %d\n", *n1);
    } else {
        printf("El número más grande es: %d\n", *n2);
    }
}

int main() {
    int n1, n2;

    max(&n1, &n2);

    return 0;
}
