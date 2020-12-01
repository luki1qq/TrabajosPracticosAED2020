#include <stdio.h>
#include <stdlib.h>

int porcentaje(int x,int t);
int promedio(int a,int b);

main ()

{
	int c = 0,x,n,ci = 0,cp = 0,ppp;
	float ci1, pp;
	printf ("Ingresar el valor de N ");
	scanf ("%d", &n);
	while (c<n)
	{

	printf ("Ingrese su numero");
	scanf ("%d", &x);
	if (x % 2 == 0)
	{
		cp = cp + 1;
    }
	if (x != 0)
	{
		ci = ci + 10;
		ppp = x + x;
	}
	c = c +1;

	}
	ci1 = promedio (ci,ppp);
	pp = porcentaje (cp,n);
	printf ("Su porcentaje de valores pares ingresado es %f\n", pp);
	printf ("El promedio de los valores impares ingresados es %f\n", ci1);
}

int porcentaje (int x,int t)
{
	float y;
	y = x*100/t;
	return y;
}

int promedio (int a,int b)
{
	float z;
	z = a/b;
	
	return z;
}
