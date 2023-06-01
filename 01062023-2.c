#include<stdio.h>

int main()
{
    int kw, consact, tot;
    int cons_ant=1500;
    printf("Ingresa los kilowatts gastados: ");
    scanf("%i", &kw);
   
    if(kw < 1000)
    {
    consact=kw*1.2;
    if(cons_ant>consact){
        printf("La tarifa es de 1.2\n");
        printf("el total a pagar es:%d\n", consact);
    }
    else{}
 if(kw >= 1000 && kw < 1850)
    {
    consact=kw*1.8;
        printf("La tarifa es de 1.8\n");
        printf("el total a pagar es:%d\n", consact);
    }
    else{}
    if(kw >= 1850)
    {
    consact=kw*2.1;
        printf("La tarifa es de 2.1\n");
        printf("el total a pagar es:%d\n", consact);
    }
    tot=cons_ant-consact;
    if(tot<1){
    printf("ERROR");}
    return 0;
}
