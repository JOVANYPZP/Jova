/*Jovany Pérez Pérez
31 de mayo de 2023
programa n1

imprime el tamaño de estas palabras con la función sizeof*/

#include <stdio.h>
int 
main ()
{
int num;
printf("el tamaño de la variable de coma flotante es %1d",sizeof(float));
printf("bytes\n");
printf("el tamaño de la variable de doble precisión es %1d;", sizeof(double));
printf("bytes\n");
return 0;
}