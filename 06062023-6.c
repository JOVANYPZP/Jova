#include<stdio.h>

int main()
{
    int contador=1;
    while(contador<25){
    printf("%d\n", contador);
    contador++;
    }
    return 0;
}
/*sin llaves el programa arroja infinitamente el número 1*/
/*colocando las llaves hace una secuencia del 1-24*/