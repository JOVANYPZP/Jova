#include<stdio.h>
/*el programa hace una secuencia de números negativos, ya que se inicializa el contador como 1, entonces se va restando infinitamente*/
int main()
{
    int contador=1;
    while(contador<100){
    
    printf("%d\n", contador);
    contador--;
   }
}