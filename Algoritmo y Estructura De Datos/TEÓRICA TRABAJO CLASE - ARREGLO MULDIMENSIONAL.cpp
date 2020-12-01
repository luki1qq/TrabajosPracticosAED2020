#include <stdio.h>

void cargar(int m1,int n1,int p1,int vector[10][10][10]);
int total (int m1,int n1,int p1,int vector[10][10][10]);
void hotel (int m1,int n1,int p1,int vector[10][10][10]);
main()
{
	int m,n,p,vector[10][10][10],t;
	printf ("Ingrese la cantidad de filas : ");
	scanf ("%d", &m);
	printf ("Ingrese la cantidad de columnas : ");	
	scanf ("%d", &n);
	printf ("Ingrese la cantidad de planos : ");
	scanf ("%d", &p);
	cargar (m,n,p,vector);	
	t = total(m,n,p,vector);
	printf ("La cantidad total de personas: %d", t);
	hotel(m,n,p,vector);
}

void cargar (int m1,int n1,int p1,int vector[10][10][10])
{	
	int i,j,k;
	
	for (k= 0;k<p1;k++)
	{
		for (i=0;i<m1;i++)
		{
			for (j=0;j<n1;j++)
			{
				printf ("Vector[%d][%d][%d] = ",i,j,k);
				scanf ("%d", &vector[i][j][k]);
			}
		}
	}
}

int total(int m1,int n1,int p1,int vector[10][10][10])
{
	int i,j,k,s;
	
	s = 0;
	for (k=0;k<p1;k++)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				s = s+vector[i][j][k];
			}
		}
	}
	return s;
}

void hotel (int m1,int n1,int p1,int vector[10][10][10])
{
	int i,j,k,s,mayh,hotel1;
	
	mayh = 0;
	hotel1 = 0;
	for (k = 0;k<p1;k++)
	{
		s = 0;
		for (i = 0;i<m1;i++)
		{
			for (j = 0;j<n1;j++)
			{
				s = s + vector[i][j][k];
			}
		}
		if (s>mayh)
		{
			mayh = s;
			hotel1 = k;
		}
	}
	printf ("\nEl hotel con mayor cantidad de personas alojadas: %d \n", hotel1);
}

