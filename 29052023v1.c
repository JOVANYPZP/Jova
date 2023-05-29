#include <stdio.h>

int MiNumero;

int main() {
    int numerodeIteracciones = 5;
    int i;

    printf("¿Cuál es tu número favorito? ");
    scanf("%d", &MiNumero);

    for (i = 1; i <= numerodeIteracciones; ++i) {
        printf("Interacción número: %d\n", i * 2);
    }

    printf("Cuánto vale aquí la variable i: %d\n ", i);
    printf("Cuánto vale aquí la variable MiNumero: %d\n ", MiNumero);
    printf("Cuánto vale aquí la variable numerodeIteracciones: %d\n ", numerodeIteracciones);

    return 0;
}
