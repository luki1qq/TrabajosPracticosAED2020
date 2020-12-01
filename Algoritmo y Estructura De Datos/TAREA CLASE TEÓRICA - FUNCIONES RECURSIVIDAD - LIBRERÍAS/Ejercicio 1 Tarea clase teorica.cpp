#include <stdio.h>
#include <libreria1.h>

main ()
{
	int c,n,cp=0,c5=0,c6=0,num;
	float pp,p5,p6;
	
	printf ("Ingrese N: ");
	scanf ("%d", &n);
	
	for (c=0; c<n; c++)
	{
		printf ("ingrese numero: ");
		scanf ("%d", &num);
		contador (num, 2, cp);
		contador (num, 5, c5);
		contador (num, 6, c6);
		
	}
	pp=porcentaje(cp,n);
	p5=porcentaje(c5,n);
	p6=porcentaje(c6,n);
	printf ("Cantidad pares: %d\n", cp);
	printf ("cantidad mult.5: %d\n", c5);
	printf ("Cantidad mult.6: %d\n", c6);
	printf ("Porcentaje pares: %.2f\n", pp);
	printf ("Porcentaje mult.5: %.2f\n", p5);
	printf ("Porcentaje mult.6: %.2f\n", p6);
	
	
	
}
