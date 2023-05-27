#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d;
	printf("\ningresa el lado");
	scanf("&i", &a );
	printf("\ningresa el valor del otro lado");
	scanf("%i", &b);
	printf("\ningresa la altura");
	scanf("%i", &c);
	d=sqrt(a*a+b*b+c*c);
	printf("el valor de la diagonal es :""%i", d);
	return 0;
}
