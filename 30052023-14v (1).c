#include <stdio.h>

int main()
{
    int ventas = 5000;
    int años = 8;
    int sal_min = 1000;
    int IVA = 15;

    if (ventas < (sal_min * 3) && (años >> (10 * IVA)))
    {
        printf("La condición es verdadera");
    }
    else
    {
        printf("La condición es falsa");
    }

    return 0;
}
    