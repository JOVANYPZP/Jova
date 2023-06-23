#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

struct Paciente {
    char n[50];
    int ed;
    char sex;
    float p;
    float alt;
    char nac[50];
    int h;
};

int main() {
    struct Paciente pacientes[MAX];
    int numPacientes = 0;
    char resp;

    do {
        struct Paciente pac;

        printf("Nombre del paciente: ");
        scanf("%s", pac.n);

        printf("Edad: ");
        scanf("%d", &pac.ed);

        printf("Sexo (M/F): ");
        scanf(" %c", &pac.sex);

        printf("Peso: ");
        scanf("%f", &pac.p);

        printf("Altura: ");
        scanf("%f", &pac.alt);

        printf("Nacionalidad: ");
        scanf("%s", pac.nac);

        pacientes[numPacientes] = pac;
        numPacientes++;

        printf("¿Registrar otro paciente? (S/N): ");
        scanf(" %c", &resp);
    } while (resp == 'S' || resp == 's');

    printf("Pacientes registrados:\n");
    for (int i = 0; i < numPacientes; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nombre: %s\n", pacientes[i].n);
        printf("Edad: %d\n", pacientes[i].ed);
        printf("Sexo: %c\n", pacientes[i].sex);
        printf("Peso: %.2f\n", pacientes[i].p);
        printf("Altura: %.2f\n", pacientes[i].alt);
        printf("Nacionalidad: %s\n", pacientes[i].nac);
        printf("--------------------\n");
    }

    return 0;
}
    