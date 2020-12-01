#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct distancia
{
	float p1x;
	float p1y;
	float p2x;
	float p2y;
};

main()
{
	distancia reg;
	float distanciap1,x,y,dist2puntos;
	printf ("Ingrese el valor de P1x : ");
	scanf ("%f", &reg.p1x);
	printf ("Ingrese el valor de P1y : ");
	scanf ("%f", &reg.p1y);
	printf ("Ingrese el valor de p2x : ");
	scanf("%f", &reg.p2x);
	printf ("Ingrese el valor de p2y : ");
	scanf("%f", &reg.p2y);
	distanciap1 = sqrt((reg.p1x*reg.p1x) + (reg.p1y*reg.p1y));
	x = reg.p2x - reg.p1x;
	y = reg.p2y - reg.p1y; 
	dist2puntos = sqrt((x*x)+(y*y));
	printf ("La distancia en el punto P1 es : %.2f\n", distanciap1);
	printf ("La longitud del segmento de recta que une dos punto es : %.2f", dist2puntos);
}
