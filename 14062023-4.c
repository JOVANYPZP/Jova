#include<stdio.h>

int esprimo(int num) {
if(num<=1)
return 0;
for(int i=2; i*i<=num; i++ )
if(num % i==0)
return 0;
return 1;
}
int main(){
int numero, continuar=1 ;
while(continuar){
printf("ingresé un número");
scanf("%d", &numero);
printf("%d %s primo\n", numero, esprimo(numero)?"es": "no es" );
printf("desea continuar? (1.si. 2.no)\n");
scanf("%i", &continuar);
}
    return 0;
}