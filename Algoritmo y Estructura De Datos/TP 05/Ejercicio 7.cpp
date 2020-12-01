#include <stdio.h>
#include <stdlib.h>
void cargar (int m1,int n1,int p1,int vector[10][10][10]);
int pais(int m1,int n1,int p1,int vector[10][10][10]);
void sucursal (int m1,int n1,int p1,int vector[10][10][10]);
main()
{
	int vector[10][10][10],m,n,p,numPais;
	p = 3; //paises
	n = 4; //productos
	m = 2; //sucursales.
	cargar (m,n,p,vector);
	numPais = pais(m,n,p,vector);
	printf("El pais que mas vendio fue %d ",numPais);
	sucursal (m,n,p,vector);
}
void cargar (int m1,int n1,int p1,int vector[10][10][10])
{
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
				printf ("vector[%d][%d][%d] = ",i,j,k);
				scanf ("%d", &vector[i][j][k]);
			}
		}
	}
}

int pais(int m1,int n1,int p1,int vector[10][10][10])
{
	int paisMayor,s,numPais;
	paisMayor = 0;
	numPais = 0;
	for (int k = 0;k<p1;k++)
	{
		s = 0;
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
				s = s + vector[i][j][k];
			}
		}
		if (s > paisMayor)
		{
			paisMayor = s;
			numPais = k;
		}
	}
	return numPais;
}

void sucursal (int m1,int n1,int p1,int vector[10][10][10])
{
	int s[10][10];
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
				s[i][k] = s[j][k] + vector[i][j][k];
			}
		}
	}
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
				printf ("\nEn la sucursal [%d][%d] = %d",k,i,s[i][k]);

		}
	}

}
