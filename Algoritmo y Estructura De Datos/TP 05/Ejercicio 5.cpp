#include <stdio.h>
#include <stdlib.h>

void cargar (int m1,int n1,int p1,int vector[10][10][10],int suma[10]);
void llenarVector (int m1,int n1,int p1,int vector[10][10][10],int suma[10]);
void listarVector (int m1,int n1,int p1,int vector[10][10][10],int suma[10]);
int promedioVector (int m1,int n1,int p1 ,int vector[10][10][10],int suma[10]);
main()
{
	int vector[10][10][10],m,n,p,suma[10],prom[10],prom1;
	printf ("Ingrese la cantidad de filas: ");
	scanf ("%d", &m);
	printf ("Ingrese la cantidad de columnas: ");
	scanf ("%d", &n);
	printf ("Ingrese la cantidad de planos: ");
	scanf ("%d", &p);
	cargar (m,n,p,vector,suma);
	llenarVector (m,n,p,vector,suma);
	listarVector (m,n,p,vector,suma);
	prom1 = promedioVector(m,n,p,vector,suma);
	printf ("El promedio del vector es : %d",prom1);
}

void cargar (int m1,int n1,int p1,int vector[10][10][10],int suma[10])
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

void llenarVector (int m1,int n1,int p1,int vector[10][10][10],int suma[10])
{
	int s;
	suma[0] = 0;
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
				if (k % 2 == 0)
				{
					suma[k] = suma[k] + vector[i][j][k];
				}
				else
				{
					suma[k] = suma[k] + vector[i][j][k];
				}
			}
		}
	}
	
}

void listarVector (int m1,int n1,int p1,int vector[10][10][10],int suma[10])
{
	for (int i = 0;i<p1;i++)
	{
		printf ("vector[%d] = %d ",i,suma[i]);
	}
}

int promedioVector (int m1,int n1,int p1 ,int vector[10][10][10],int suma[10])
{
	int s;
	suma[0] = 0;
	s = 0;
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
					s = s + vector[i][j][k];
					s = s / (i*j);
			}
		}
	}
	return s;
}
