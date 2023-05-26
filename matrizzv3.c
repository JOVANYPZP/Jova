#include <stdio.h>

int main() {
    int alumnos = 5;
    int materias = 5;
    int calificaciones[5][5];
    float promedios[5];

    for (int i = 0; i < alumnos; ++i) {
        printf("Ingrese las calificaciones del alumno\n");
        for (int j = 0; j < materias; ++j) {
            printf("Calificación: ");
            scanf("%i", &calificaciones[i][j]);
        }
    }

    for (int i = 0; i < alumnos; ++i) {
        int suma = 0;
        for (int j = 0; j < materias; ++j) {
            suma += calificaciones[i][j];
        }
        promedios[i] = (float)suma / materias;
    }


    for (int i = 0; i < alumnos; ++i) {
        printf("Alumno %d: ", i+1);
        for (int j = 0; j < materias; ++j) {
            printf("%d ", calificaciones[i][j]);
        }
        printf("Promedio: %.2f\n", promedios[i]);
    }

    return 0;
}
    