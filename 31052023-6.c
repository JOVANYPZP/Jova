/*Jovany Pérez Pérez
31 de mayo de 2023
programa n6
las sentencias de asigancion booleana se pueden escribir de modo que den como resultado un valor de tipo int que sea cero o uno*/
#include<stdio.h>

int main()
{
int edad, mayordeedad, juvenil, menordeedad;
scanf("i", &edad);

mayordeedad=(edad>18);
juvenil=(edad>25) && (edad<=18);
menordeedad=(edad<=15) && (edad>0);
printf("\n", mayordeedad);
printf("\n", juvenil);
printf("\n", menordeedad);
    return 0;
}