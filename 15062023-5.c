#include <stdio.h>

int dividir(int n1, int n2) {
printf("Ingrese el primer número: ");
    scanf("%d", &n1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &n2);
    if (n2 % n1==0) {
      printf("VERDADERO");
    } else{
    printf("FALSO");
    }
}

int main() {
    int n1, n2;

    dividir(n1, n2);

    

    return 0;
}
