#include<stdio.h>

int main()
{
    int num_de_elementos, cuenta, calorias_por_alimento, calorias_total;
    printf("¿cuántos alimentos ha comido hoy?");
    scanf("%d", &num_de_elementos);
    calorias_total=0;
    cuenta=0;
    printf("introduce el número de calorías de cada uno de los \n");
    printf("%d %s\n", num_de_elementos, "alimentos tomados:");
    while(cuenta++ <=num_de_elementos)
    {
    scanf("%d", &calorias_por_alimento);
    calorias_total += calorias_por_alimento;
    printf("las calorías totales consumidas hoy son=\n");
    printf("%d\n", calorias_total);
    }
    return 0;
}