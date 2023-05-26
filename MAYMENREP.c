#include <stdio.h>

int main() {
    int numsecret=9;
    int a, resp;
    do{
    printf("Ingresa un número:");
    scanf("%i", &a);
    if(a==numsecret){
    printf("CORECTO, el número ingresado es el número correcto\n");
    }
    else
   {
       if(a>numsecret){
       printf("el número ingresado es mayor al secreto\n");
       }
       else{
       printf("el número es menor que el secreto\n");
    }
    printf("¿desea volver a intentar?\n");
    printf("presione 1 para salir.\n 2 para volver a intentar");
    scanf("%i", &resp);
    }
    }
    while(resp==2);
    
    return 0;
    
    }