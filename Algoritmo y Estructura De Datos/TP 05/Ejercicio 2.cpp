#include <stdio.h>
#include <stdlib.h>

void leer (int m1,int n1,float vector [100][100]);
void mostrar (int m1,int n1,float vector[100][100]);
int cambiarElemento (int m1,int n1,float vector[100][100]);
void filaX (int m1,int n1,float vector[100][100]);
void filaY (int m1,int n1,float vector[100][100]);

main()
{
	int m1,n1;
	float vector[100][100],elemento,FILA;
	printf ("Ingresar la cantidad de filas: ");
	scanf ("%d", &m1);
	printf ("Ingresar la cantidad de columnas: ");
	scanf ("%d", &n1);
	leer(m1,n1,vector);
	mostrar (m1,n1,vector);
	elemento = cambiarElemento (m1,n1,vector);
	mostrar (m1,n1,vector);
	filaX (m1,n1,vector);
	filaY (m1,n1,vector);
}

void leer(int m1,int n1,float vector[100][100])
{
	for (int i = 0;i<m1;i++)
	{
		for (int j = 0;j<n1;j++)
		{
			printf ("vector [%d][%d] = ",i,j);
			scanf ("%f", &vector[i][j]);
			if (vector[i][j] > 0)
			{
				vector[i][j] = vector[i][j];
			}
			else
			{
				printf ("El valor ingresado no es valido ");
				j = j - 1;
			}

		}
	}
}

void mostrar (int m1,int n1,float vector[100][100])
{
	printf ("\nLa matriz de los vectores cargados es \n");
	for (int i = 0;i<m1;i++)
	{
		printf ("\n");
		for (int j = 0;j<n1;j++)
		{
			printf ("vector[%d][%d] = %2.f ",i,j,vector[i][j]);
			
		}
	}
}

int cambiarElemento (int m1,int n1,float vector[100][100])
{
	printf ("\nIngrese la posicion de la matriz que desea cambiar: ");
	scanf ("%d", &m1);
	printf ("Ingrese la posicion de la matriz que desea cambiar: ");
	scanf ("%d", &n1);
	int i,j;
	i = m1;
	j = n1;
	for (i;i==m1;i++)
	{
		for (j;j==n1;j++)
		{
			vector[i][j] = 0;
		}
	}
}

void filaX (int m1,int n1,float vector[100][100])
{
	int i,j;
	printf ("\nIngrese la fila a la cual desea ver sus elementos\n");
	scanf ("%d", &i);
	m1 = i;
	for (i;i==m1;i++)
	{
		printf ("\n");
		for (j = 0;j<n1;j++)
		{
			printf ("vector[%d][%d] = %2.f ",i,j,vector[i][j]);	
		}
	}
}

void filaY (int m1,int n1,float vector[100][100])
{
	int i,j;
	printf ("\nIngrese la columna a la cual desea ver sus elementos\n");
	scanf("%d", &j);
	n1 = j;
	for (j;j==n1;j++)
	{

		for (i=0;i<m1;i++)
		{
			printf ("\n");
			printf ("vector[%d][%d] = %2.f ",i,j,vector[i][j]);	
		}
	}
}

