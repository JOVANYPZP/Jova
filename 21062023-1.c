#include <stdio.h>

int main() {
    int elementos[10] = {2, 5, 8, 1, 9, 4, 3, 23, 6, 10};
    int suma = 0;
    int mayor = elementos[0];

    printf("Los elementos son: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", elementos[i]);
    }

   
    for (int i = 0; i < 10; i++) {
        suma += elementos[i];
    }
    printf("\nSuma: %d\n", suma);

    for (int i = 1; i < 10; i++) {
        if (elementos[i] > mayor) {
            mayor = elementos[i];
        }
    }
    printf("Mayor elemento: %d\n", mayor);

    return 0;
}
