int main ()
 {
float f,x;
printf ("\n Elige un valor de x:");
 scanf("%f", &x);

/* seleccion del rango donde se uncuentra x*/

if (x<= 0.0)
f= -pow(x,2)-x;
/*hace la potencia elevada a 2 de x y luego resta x*/
else
f= -pow(x,2) +3*x;
 printf("f(%.1f) = %.3f",x,f);
/*realiza la potencia negativa de x, para luego sumar la multiplicación de 3 por x*/ 
return 0;

}