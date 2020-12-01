#include <stdio.h>
#include <stdlib.h>

int mult(int a,int b);

main()



{
	int n1,n2,t;
	
	printf ("Ingrese el primer valor");
	
	scanf ("%d", &n1);
	
	printf ("Ingrese el segundo valor");
	
	scanf ("%d", &n2);
	
	t = mult (n1,n2);
	
	printf ("El resultado del valor ingresado es %d", t);
}

int mult (int a,int b)

{
	int s;
	
	if (b > 0)
	{
	  	s = a + mult (a, b-1);
	}
	else
	{
	
		s = 0;
		
		return s;
	}
}
