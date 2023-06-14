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
int numero, repeticiones;
printf("ingresé un número");
scanf("%d", &numero);
printf("ingresa el número de repeticiones");
scanf("%d", &repeticiones);
while(repeticiones-->0){
if(esprimo(numero))
printf("%d es primo\n", numero);
else
printf("%d no es primo", numero);
}
    return 0;
}