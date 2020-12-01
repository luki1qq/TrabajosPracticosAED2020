#include <stdio.h>

int factorial(int x);

main()
{
	int c,n,num,fac;
	
	printf ("Ingrese el valor de N\n");
	scanf ("%d", &n);
	for (c=0; c<n; c++)
	{
		printf ("Ingrese num: ");
		scanf ("%d", &num);
		
		printf ("Factorial: %d\n", factorial(num));
		
	}
}

int factorial (int x)
{
	int f;
	
	if (x!=0)
	{
		f=x*factorial(x-1);
	}
	else
	{
		f=1;
	}
	
	return f;
}
