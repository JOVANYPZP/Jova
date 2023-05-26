#include <stdio.h>

int main() {
    int d1, d2;
    printf("Ingrese el tamaño de una dimensión ");
    scanf("%d", &d1);
    printf("Ingrese el tamaño de la otra");
    scanf("%d", &d2);

    int num[d1][d2];

    for (int t = 0; t <d1; ++t) {
        for (int i = 0; i <d2; ++i) {
            num[t][i] = (t *d2) + i + 1;
        }
    }

    
    for (int t = 0; t <d1; ++t) {
        for (int i = 0; i <d2; ++i) {
            printf("%d ", num[t][i]);
        }
        printf("\n");
    }

    return 0;
}
