#include <stdio.h>

int main() {
    char not;

    printf("Ingresa tu nota en letras");
    scanf("%c", &not);

    switch(not){
    case 'a': case 'A':
    printf("EXCELENTE");
    break;
    case 'b': case 'B':
    printf("NOTABLE");
    case 'c': case 'C':
    printf("SUFICIENTE");
    case 'd': case 'D': case 'f': case 'F':
    printf("NO APLICABLE");
    }
    return 0;
}
