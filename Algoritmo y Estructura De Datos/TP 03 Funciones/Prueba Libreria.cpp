#include <stdlib.h>
#include <stdio.h>
#include <libreria1k3.h>

float a,b,c;

main ()
{
	float res,res1,res2,res3,res4,res5,res6;
	printf ("Ingrese el valor");
	scanf ("%f", &a);
	printf ("Ingrese el valor");
	scanf ("%f", &b);
	printf ("Ingrese el valor");
	scanf ("%f", &c);
	
	res = suma (a,b);
	res1 = resta (a,b);
	res2 = division(a,b);
	res3 = producto(a,b);
	res4 = MayValor (a,b,c);
	res6 = menor (a,b,c);
	res5 = promedio (a,b,c);
	
	printf ("\n El resultado de la suma es %f\n", res);
	printf ("\n El resultado de la resta es %f\n", res1);
	printf ("\n El resultado de la division es %f\n", res2);
	printf ("\n El resultado del producto es %f\n", res3);
	printf ("\n El resultado del Mayor Valor es %f\n", res4);
	printf ("\n El resultado del promedio es %f\n", res5);
	printf ("\n El resultado del menor valor es %f\n", res6);
	
}

