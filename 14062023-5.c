#include<stdio.h>

int esprimo(int num) {
if(num<=1){
return 0;
}
for(int i=2; i*i<=num; i++ ){
if(num % i==0){
return 0;
}
}
return 1;
}
int main(){
int bandera=1 ;
int repeticiones=0;
int numero;
while(bandera){
printf("ingresé un número(-1 para salir)");
scanf("%d", &numero);
if(numero= -1){
bandera=0; }
else{
if(esprimo(numero)){
printf("%d es primo", numero ); }
else{
printf("%d no es primo", numero);
}
repeticiones++;
}
}
printf("se realizarán %d repeticiones", repeticiones);


    return 0;
}