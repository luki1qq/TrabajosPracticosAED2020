#include <stdio.h> 

void leer(int n1,int v1[100]);
int legajo(int n1,int v1[100]);

main()
{
	int l, n, v[100];
	

	printf ("Ingrese el valor de N: \n");
	scanf ("%d", &n);
	
	leer(n,v);
	
	l=legajo(n,v);
	
	printf ("Legajo con mayor promedio: %d", l);
}

void leer(int n1,int v1[100])
{
	int i;
	for (i=0; i<n1; i++)
	{
		printf("v[%d]= ", i);
		scanf ("%d", &v1[i]);
	}
}

int legajo(int n1,int v1[100])
{	
	int i,leg = 0,may = 0;
	
	for (i=0; i<n1; i++)
	{
		if (v1[i]>may)
		{
			may=v1[i];
			leg=i;
		}
	}
	return leg;
}
