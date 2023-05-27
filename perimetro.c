#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	int r, lad;
	double p;
	printf("ingrese el radio");
	scanf("%i", &r);
	printf("ingrese el numero de lados");
	scanf("%i", &lad);
	p=2*lad*r*sin(M_PI/lad);
	printf("el valor del perimetro es " "%1f\n", p);
	return 0;
}
