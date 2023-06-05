#include <stdio.h>

int main (){

int opcion;
puts("ingresé un número");
scanf("%i", &opcion);
switch (opcion){

case 0:
 puts("Cero"); 
break; 
case 1:
puts("Uno"); 
break; 
case 2:
puts("Dos"); 
break; 
case 3:
puts("Tres");
break; 
default:
puts("Fuera de rango");
}
}