#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MatrizA (int m1,int n1,int vector[100][100]);
void MatrizB (int m1,int n1,int vector[100][100]);
void mostrar (int m1,int n1,int vector[100][100]);

main()
{
	int vector[100][100],m,n;
	printf ("Ingrese la cantidad de filas : ");
	scanf ("%d", &m);
	printf ("Ingrese la cantidad de columnas : ");
	scanf ("%d", &n);
	MatrizA (m,n,vector);
	mostrar (m,n,vector);
	printf ("\nLa Matriz Transpuesta de A es \n");
	MatrizB (m,n,vector);
	printf ("\nLa matriz A es \n");
	mostrar (m,n,vector);
	printf ("\nLa matriz B es \n");
	MatrizB (m,n,vector);
}

void MatrizA (int m1,int n1,int vector[100][100])
{
	for (int i = 0;i<m1;i++)
	{
		for (int j = 0;j<n1;j++)
		{
			printf ("vector[%d][%d] = ",i,j);
			scanf ("%d", &vector[i][j]);
		}
	}
}

void mostrar (int m1,int n1,int vector[100][100])
{
	for (int i = 0;i<m1;i++)
	{
		printf ("\n");
		for (int j = 0;j<n1;j++)
		{
			printf ("vector[%d][%d] = %d ",i,j,vector[i][j]);
		}
	}
}

void MatrizB (int m1,int n1,int vector[100][100])
{
	
	for (int j = 0;j<n1;j++)
	{
		printf ("\n");
		for (int i = 0;i<m1;i++)
		{
			printf ("vector [%d][%d] = %d ",i,j,vector[i][j]);
		}
	}
}
