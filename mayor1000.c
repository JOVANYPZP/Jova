#include<stdio.h>

int main()
{
    int a [10]= {10,1,2,-3,-100,1000,-200,7,1,0};
    int r=0;
    int mayor=0;
    for (int i=0; i<10; i++){
    if (a[i]>a[mayor]){
    mayor=i;
    }
    }
    printf("\n %i", a [mayor]);
    printf("\n \n \n: %i", r);
    printf("\nla posición del número mayor es:%i", mayor+1);
    
    return 0;
}