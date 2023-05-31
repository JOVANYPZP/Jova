/*Jovany Pérez Pérez
31 de mayo de 2023
programa n5
operadores de incremento*/
#include<stdio.h>

int main()
{
   int n=5, t;
t=++n * --n;
printf("n=%d, t=%d\n", n, t);
printf("%d %d %d\n", ++n, ++n, ++n);
    return 0;
}