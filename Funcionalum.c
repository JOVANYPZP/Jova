#include <stdio.h>

int ingr(int cali[][5], int alumn, int mate) {
    for (int i = 0; i < alumn; ++i) {
        printf("Ingrese las calificaciones del alumno %d:\n", i+1);
        for (int j = 0; j < mate; ++j) {
            printf("Calificación: ");
            scanf("%d", &cali[i][j]);
        }
    }
}

int promes(float prom[], int cali[][5], int alumn, int mate) {
    for (int i = 0; i < alumn; ++i) {
        int sum = 0;
        for (int j = 0; j < mate; ++j) {
            sum += cali[i][j];
        }
        prom[i] = (float)sum / mate;
    }
}

int res(int cali[][5], float prom[], int alumn, int mate) {

    for (int i = 0; i < alumn; ++i) {
        printf("Alumno %i: ", i+1);
        for (int j = 0; j < mate; ++j) {
            printf("%d ", cali[i][j]);
        }
        printf("El promedio: %.2f\n", prom[i]);
    }
}

int main() {
    int alumn = 5;
    int mate = 5;
    int cali[5][5];
    float prom[5];

    ingr(cali, alumn, mate);
    promes(prom, cali, alumn, mate);
    res(cali, prom, alumn, mate);

    return 0;
}
