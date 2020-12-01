#include <stdio.h>
#include <stdlib.h>

void cargar(int m1,int n1,int p1,float vector[10][10][10]);
float menor(int m1,int n1,int p1,float vector[10][10][10]);
float Comprobar (float &menorvalor,float vector[10][10][10]);
main()
{
	int m,n,p;
	float vector[10][10][10],menorvalor,parimpar;
	printf ("Ingrese la cantidad de filas : ");
	scanf ("%d", &m);
	printf ("Ingrese la cantidad de columas : ");
	scanf ("%d", &n);
	printf ("Ingrese la cantidad de planos : ");
	scanf ("%d", &p);
	cargar(m,n,p,vector);
	menorvalor = menor(m,n,p,vector);
	printf ("el menor valor es %.2f", menorvalor);
	parimpar = Comprobar(menorvalor,vector);

}

void cargar(int m1,int n1,int p1,float vector[10][10][10])
{
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
				printf ("vector[%d][%d][%d] = ",i,j,k);
				scanf ("%f",&vector[i][j][k]);
			}
		}
	}
}

float menor (int m1,int n1,int p1,float vector[10][10][10])
{
	float s,menorvalor;
	menorvalor = vector[0][0][0];
	for (int k = 0;k<p1;k++)
	{
		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;j<n1;j++)
			{
				s = 0;
				s = s + vector[i][j][k];
				if (s<=menorvalor)
				{
					menorvalor = s;
				}
			}
		}
	}
	return menorvalor;
}

float Comprobar (float &menorvalor,float vector[10][10][10])
{
	int numero;
	numero = menorvalor;
	if (numero % 2 == 0)
	{
		printf ("\nEl menor valor encontrado es par");
	}
	else
	{
		printf ("\nEl menor valor encontrado es impar");
	}
}
