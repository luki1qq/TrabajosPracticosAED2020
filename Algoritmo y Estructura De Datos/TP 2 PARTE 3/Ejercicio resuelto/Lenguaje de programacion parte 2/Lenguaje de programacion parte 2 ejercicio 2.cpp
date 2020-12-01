#include <stdio.h>

float x,y,cf;
int c,n;

main()
{
	printf ("Ingrese N");
	scanf ("%d",&n);
	
	for (c=0;c<n;c++);
	{
	printf("Ingrese x");
	scanf("%f",&x);
	printf("Ingrese y");
	scanf("%f",&y);
	
	if (x>=-3 and x<=3 and y>=-3 and y<=3)
	{
		printf("se encuentra dentro\n ");
	}
	else
	{
		printf("se encuentra fuera\n ");
		cf=cf+1;
	}
	}
	printf ("Puntos fuera del cuadrado: %f",cf);
}
