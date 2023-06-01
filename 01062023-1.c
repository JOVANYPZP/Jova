#include<stdio.h>

int main()
{
    int kw;
    printf("Ingresa los kilowatts gastados: ");
    scanf("%i", &kw);
    
    if(kw < 1000)
    {
        printf("La tarifa es de 1.2");
    }
    else{}
 if(kw >= 1000 && kw < 1850)
    {
        printf("La tarifa es de 1.8");
    }
    else{}
    if(kw >= 1850)
    {
        printf("La tarifa es de 2.1");
    }
    
    return 0;
}
