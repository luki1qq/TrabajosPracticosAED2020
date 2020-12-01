#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mostrar (int m1,int n1,int vector[100][100]);
void Carga (int m1,int n1,int vector[100][100]);
int aleatorio (int valor_inicial,int valor_final);
int calcular (int m1,int n1,int vector[100][100]);
main()
{
	int m,n,vector[100][100],mayTaller;
	n = 3;
	printf ("Ingresar la cantidad de talleres que tiene su empresa ");
	scanf ("%d", &m);
	
	Carga (m,n,vector);
	mostrar (m,n,vector);
	mayTaller = calcular(m,n,vector);
	printf ("\nEl taller que tuvo mayor produccion es el taller %d ", mayTaller);
	
}

void Carga (int m1,int n1,int vector[100][100])
{
	srand((unsigned)time(NULL));
	for (int i = 0;i<m1;i++)
	{
		for (int j = 0;j<n1;j++)
		{
			vector[i][j] = 1 + rand();
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
			printf ("vector[%d][%d] = %2.d ",i,j,vector[i][j]);
		}
	}
}

int calcular (int m1,int n1,int vector[100][100])
{
	int s;
	int mayt = 0,taller = 0;
	for (int i = 0;i<m1;i++)
	{
		s = 0;
		for (int j = 0;j<n1;j++)
		{
			s = s + vector[i][j];
		}
		if (s > mayt)
		{
			mayt = s;
			taller = i;
		}
	}
	return taller;
}
