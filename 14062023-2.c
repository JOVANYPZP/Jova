#include<stdio.h>

int main()
{
    int i, suma;
    suma=0;
    for(i=1; i<=50; i++){
    suma+=i;
    }
   printf("la suma de los primeros 50 números es:%i\n", suma);
    return 0;
}