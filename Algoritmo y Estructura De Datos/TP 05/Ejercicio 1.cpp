#include <stdio.h>
#include <stdlib.h>

void cargarElementos (int m1,int n1,float vector[5][4]);
void mostrar (int m1,int n1,float vector[5][4]);
float MayorMenor (int m1,int n1,float vector[5][4],float &MayM,float &MenM);

main()
{
	int m = 4;
	int n = 3;
	float vector[5][4],mayM,menM,MayAndMen;
	
	cargarElementos (m,n,vector);
	MayAndMen = MayorMenor (m,n,vector,mayM,menM);
	printf ("El menor elemento de la matriz es %2.f\n", menM);
	printf ("El mayor elemento de la matriz es %2.f\n", mayM);
	mostrar (m,n,vector);
	
}

void cargarElementos (int m1,int n1,float vector[5][4])
{
	
	for (int i = 0;i<m1;i++)
	{
		for (int j = 0;j<n1;j++)
		{
			printf ("Ingrese los elementos del vector[%d][%d] = ",i,j);
			scanf ("%f", &vector[i][j]);
		}
	}
}
void mostrar (int m1,int n1,float vector[5][4])
{
	printf ("Matriz cargada mediante filas y columnas ");
	for (int i = 0;i<m1;i++)
	{
		printf ("\n");
		for (int j = 0;j<n1;j++)
		{
			printf ("v[%d][%d] = %2.f ",i,j,vector[i][j]);
		}
	}
}
float MayorMenor (int m1,int n1,float vector[5][4],float &MayM,float &MenM)
{
	float s;
	float aux;
	aux = 0;
	MayM = 0;
	for (int i = 0;i<m1;i++)
	{
		s = 0;
		aux = 0;
		for (int j = 0;j<n1;j++)
		{
			s = vector[i][j];
			aux = vector[i][j];
		}
		if (s > MayM)
		{
			MayM = s;
		}
		else
		if (aux < s)
		{
			MenM = aux;
		}
	}
	
}
