#include<stdio.h>

int main()
{
   char opcion;
   do {
      puts("hola\n");
      puts("Desea otro tipo de saludo?\n");
      printf("y a continuacion pulse intro\n");
      scanf("%s", &opcion);
      
   } while ((opcion == 'S') || (opcion == 's')); 
   
   puts("adios\n");
   return 0;
}
