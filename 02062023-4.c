#include<stdio.h>

int main()
{
int a,b;
    puts("ingresa 2 números");
    scanf("%i %i", &a, &b);
    if(a>b){
    puts("el numero 1 es mayor que el 2");
    }
    if(b>a){
    puts("el numero 2 es mayor que el 1");
    }
    return 0;
}