#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

struct paciente {
    char n[50];
    int ed;
    char sx;
    float p;
    float alt;
    char nac[50];
};

int main() {
    struct paciente pac[MAX];
    int np = 0;
    int resp;

    do {
        printf("1. Registrar un paciente\n");
        printf("2. Consultar estado de un paciente\n");
        printf("3. Mostrar lista de pacientes\n");
        printf("0. Salir\n");
        scanf("%i", &resp);

        switch (resp) {
            case 1:
                printf("Nombre: ");
                scanf("%s", pac[np].n);
                printf("Edad: ");
                scanf("%i", &pac[np].ed);
                printf("Sexo (M/F): ");
                scanf(" %c", &pac[np].sx);
                printf("Altura (cm): ");
                scanf("%f", &pac[np].alt);
                printf("Peso (kg): ");
                scanf("%f", &pac[np].p);
                printf("Nacionalidad: ");
                scanf("%s", pac[np].nac);
                printf("REGISTRO EXITOSO\n");
                np++;  
                break;
                
            case 2:
                if (np > 0) {
            
                    char nombre[50];
                    printf("Ingrese el nombre del paciente: ");
                    scanf("%s", nombre);
                    
                    int encontrado = 0;
                    for (int i = 0; i < np; i++) {
                        if (strcmp(pac[i].n, nombre) == 0) {
                            printf("\nDatos del paciente:\n");
                            printf("Nombre: %s\n", pac[i].n);
                            printf("Edad: %i\n", pac[i].ed);
                            printf("Sexo: %c\n", pac[i].sx);
                            printf("Altura: %.2f cm\n", pac[i].alt);
                            printf("Peso: %.2f kg\n", pac[i].p);
                            printf("Nacionalidad: %s\n", pac[i].nac);
                            encontrado = 1;
                            }
                            break;
                        }
                    
                    }
            case 3:
            if(np>0){
            printf("Lista de pacientes registrados:\n");
                    for (int i = 0; i < np; i++) {
                        printf("- %s\n", pac[i].n);
                    }
                } else {
                    printf("No hay pacientes registrados.\n");
                }
                break;
            }
    } while (resp != 0 || resp>4);

    return 0;
}
    