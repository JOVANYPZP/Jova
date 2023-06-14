#include<stdio.h>

void fun(int num_elementos, int indice, float total){
    printf("\n \t introduce %d números reales", num_elementos);
    
    for ( indice = 0; indice < num_elementos; indice++){
        float x;
        scanf("%f", &x);
        total += x;
    }
    
    printf("%f", total);
}

int main (){
    int num_elementos = 3;
    int indice;
    float total = 0.0;
    fun(num_elementos, indice, total);
    return 0;
}
