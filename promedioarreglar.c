#include<stdio.h>

int main()
{
    float c[5];
    float r=0;
    
    for (int i=0; i<5; i++){
    printf("ingresa la calificion %d:", i+1);
    scanf("%f", &c[i]);
    r+=c[i];
    }
    
    printf("el promedio es de: %.2f\n", r/5);
    return 0;
}