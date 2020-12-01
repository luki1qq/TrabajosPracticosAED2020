#include <stdio.h>
#include <stdlib.h>

void llamada (float x,float &y);

main ()
{
	float ll1,res;
	printf ("Ingrese la cantidad de minutos que duro su llamada\n");
	scanf ("%f", &ll1);
	llamada (ll1,res);
	printf ("El valor de su llamada es %f\n\n", res);
	system ("pause");
}

void llamada (float x,float &y)
{
	if (x <= 3)
	{
	y = x * 0.75;
	}
	if (x > 3)
	{
	x = x - 3;
	x = x * 0.25;
	y = x + 2.25;
	}
}
