#include <stdio.h>
#include <math.h>

int main() {
    double radio, perimetro;
    int nLados;

    printf("Ingrese el radio del poligono: ");
    scanf("%lf", &radio);

    printf("Ingrese el numero de lados del poligono: ");
    scanf("%d", &nLados);

    perimetro = 2 * nLados * radio * sin(M_PI / nLados);

    printf("El perimetro del poligono regular es: %lf\n", perimetro);

    return 0;
}
