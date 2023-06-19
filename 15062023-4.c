#include <stdio.h>

void mostrarDatos(char nombre[], char *direccion) {
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);

    printf("Ingrese la dirección: ");
    scanf("%s", direccion);
    printf("Nombre: %s\n", nombre);
    printf("Dirección: %s\n", direccion);
}

int main() {
    char nombre[100];
    char direccion[100];

    mostrarDatos(nombre, direccion);

    return 0;
}
