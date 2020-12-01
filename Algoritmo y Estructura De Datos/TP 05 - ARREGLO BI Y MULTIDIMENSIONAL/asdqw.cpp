#include <stdio.h>
#include <stdlib.h>

void leer (int m1,int n1,float vector [100][100]);
void mostrar (int m1,int n1,float vector[100][100]);
int cambiarElemento (int m1,int n1,float vector[100][100]);
float filaX (int m1,int n1,float vector[100][100]);
float filaY (int m1,int n1,float vector[100][100]);

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
	FILA = filaX (m1,n1,vector);
	printf ("%f", FILA);
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
	printf ("La matriz de los vectores cargados es ");
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
	printf ("\nIngrese la posicion de la matriz que desea cambiar");
	scanf ("%d", &m1);
	printf ("\nIngrese la posicion de la matriz que desea cambiar\n");
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

float filaX (int m1,int n1,float vector[100][100])

{
	printf ("Ingrese la fila que desea ver sus elementos");
	scanf ("%d", m1);
	float s;
	int i;
	i = m1;
	s = 0;
		for (int j = 0;j<n1;j++)
		{
			s = s + vector[i][j];
		}
		return s;
}


float filaY (int m1,int n1,float vector[100][100])
{
	
}

