#include <stdio.h>
#include <stdlib.h>

void mult (int x,int &mx);
void submult (int z,int &sm);

main ()
{
	int n, c = 0, x,mi,smi;
	printf ("Ingrese la cantidad de numeros enteros que desea agregar");
	scanf ("%d", &n);
	while (c<n)
	{
	printf ("Ingrese su numero tenga en cuenta que debe ser mayor a 0");
	scanf ("%d", &x);
	if (x > 0)
	{
	mult (x,mi);
	submult (x,smi);
	c = c +1;
	}
	else 
	{
		printf ("El valor ingresado no es valido");
	}
	}
	system ("pause");

}

void mult(int x,int &mx)
{
	mx = x * 1;
	printf ("El primer multiplo de x es %d\n\n", mx);
	mx = x * 2;
	printf ("El segundo multiplo de x es %d\n\n", mx);
	mx = x * 3;
	printf ("El tercer multiplo de x es %d\n\n", mx);
	mx = x * 4;
	printf ("El cuarto multiplo de x es %d\n\n", mx);
	mx = x * 5;
	printf ("El quinto multiplo de x es %d\n\n", mx);
	mx = x * 6;
	printf ("El sexto multiplo de x es %d\n\n", mx);
	mx = x * 7;
	printf ("El septimo multiplo de x es %d\n\n", mx);
	mx = x * 8;
	printf ("El octavo multiplo de x es %d\n\n", mx);
	mx = x * 9;
	printf ("El noveno multiplo de x es %d\n\n", mx);
	mx = x * 10;
	printf ("El decimo multiplo de x es %d\n\n", mx);
}

void submult (int z,int &sm)
{
	sm = z / 1;
	printf ("El primer submultiplo de x es %d\n\n", sm);
	sm = z / 2;
	printf ("El segundo submultiplo de x es %d\n\n", sm);
	sm = z / 3;
	printf ("El tercer submultiplo de x es %d\n\n", sm);
	sm = z / 4;
	printf ("El cuarto submultiplo de x es %d\n\n", sm);
	sm = z / 5;
	printf ("El quinto submultiplo de x es %d\n\n", sm);
	sm = z / 6;
	printf ("El sexto submultiplo de x es %d\n\n", sm);
	sm = z / 7;
	printf ("El septimo submultiplo de x es %d\n\n", sm);
	sm = z / 8;
	printf ("El octavo submultiplo de x es %d\n\n", sm);
	sm = z / 9;
	printf ("El noveno submultiplo de x es %d\n\n", sm);
}
