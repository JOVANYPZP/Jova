#include<stdio.h>
/*hace un contador del 1-5*/
int main()
{
    int contador=0;/*inicializa la variable*/
    while(contador<5)/*prueba lógica*/
    {
    contador++;/*si verdadero realiza secuencia de instrucciones*/
    printf("contador:%d\n", contador);
    }
    printf("terminado contador: %d\n", contador);
    return 0;
}