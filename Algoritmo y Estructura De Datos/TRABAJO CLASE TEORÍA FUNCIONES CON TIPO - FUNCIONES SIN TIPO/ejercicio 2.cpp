#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool VC(int x,int y)
{
	

	if (x >= -3 and x <= 3)
		return true;
		else
		if (y >= -3 and y <= 3)
		{
			return true;
		}
		return false;
}

int main(void)
{
	int x,y,n,c;
	printf ("Ingrese el valor de N\n");
	scanf ("%d", &n);
	
	for (c = 0; c<n ; c++)
	{
	
	printf ("Ingrese el valor de x\n\n"); scanf("%d", &x);
	printf ("INgrese el valor de y\n\n"); scanf("%d", &y);
	system ("CLS");
	if (n == 1)
	    if (VC(x,y))
	    	{
		printf ("Se encuentra dentro del cuadrado");
	}
	else 
	{
		printf ("Se encuentra fuera del cuadrado");
	}
	
	if (n>1)
	    	if (VC(x,y))
	{
		printf ("Se encuentra dentro del cuadrado \n");
	}
	else 
	{
		printf ("Se encuentra fuera del cuadrado \n");
	}
	
	system ("pause");
	}
	

	

	
}



