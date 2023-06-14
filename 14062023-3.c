#include<stdio.h>

int main()
{
    int numero;
    int suma=0;
    printf("ingresé los números a sumar(- para terminar:\n)");
    scanf("%d", &numero);
    while(1){
    scanf("%d", &numero);
    if(numero== -1);
    break;
    suma+=numero;
    printf("la suma de los números ingresados es:%d\n", suma);
   }
    return 0;
}