#include<stdio.h>

int main()
{
int tp, bl, cmb;
    printf("¿Que tipo de auto es?\n 1.auto 2.autobus 3.moto");
    scanf("%i", &tp);
    switch(tp){
    case 1:
    printf("Tipo de auto: AUTOMOVIL\n");
    printf("el importe a pagar es de 500\n");
    printf("ingresé el valor del billete\n");
    scanf("%i", &bl);
    cmb=bl-500;
    printf("su cambio es de:%d\n", cmb);
    break;
    case 2:
    printf("Tipo de auto: AUTOBUS\n");
    printf("el importe a pagar es de 600\n");
    printf("ingresé el valor del billete\n");
    scanf("%i", &bl);
    cmb=bl-600;
    printf("su cambio es de %d\n", cmb);
    break;
    case 3:
    printf("Tipo de auto: MOTOCICLETA\n");
    printf("el importe a pagar es de 100\n");
    printf("ingresé el valor del billete\n");
    scanf("%i", &bl);
    cmb=bl-100;
    printf("su cambio es de %d\n", cmb);
    break;
    }
    return 0;
}