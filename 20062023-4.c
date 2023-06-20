#include <stdio.h>
#include <math.h>

int main() {
    int exponente;
    double d, y;

    printf("\nceil(3.7) = %f \t ceil(3.4) = %f", ceil(3.7), ceil(3.4));
    printf("\nceil(-3.7) = %f \t ceil(-3.4) = %f", ceil(-3.7), ceil(-3.4));

    printf("\nfloor(3.7) = %f \t floor(3.4) = %f", floor(3.7), floor(3.4));
    printf("\nfloor(-3.7) = %f \t floor(-3.4) = %f", floor(-3.7), floor(-3.4));

    printf("\nfmod(5.6, 2.5) = %f \t fmod(-5.6, 2.5) = %f", fmod(5.6, 2.5), fmod(-5.6, 2.5));

    d = frexp(16.0, &exponente);
    printf("\nParte decimal de -17.365 = %f", d);

    d = modf(-17.365, &y);
    printf("\nParte entera de -17.365 = %f", y);

    return 0;
}
