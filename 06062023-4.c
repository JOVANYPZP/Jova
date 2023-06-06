#include<stdio.h>

int main()
{
    int const centinela=-1;
    int suma, cuenta, nota;
    printf("ingresé la primera nota");
    scanf("%d", &nota);
    while(nota!=centinela)
    {
    cuenta++;
    suma +=nota;
printf("ingresa la siguente nota");
    scanf("%d", &nota);
    } /*fin de while*/
    return 0;
}