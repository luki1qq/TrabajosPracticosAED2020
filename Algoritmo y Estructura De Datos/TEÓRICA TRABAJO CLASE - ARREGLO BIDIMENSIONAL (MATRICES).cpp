#include <stdio.h>
#include <stdlib.h>

void leer (int m1,int n1,float a[100][100]);
void sucursal (int m1,int n1,float a1[100][100]);
float total (int m1,int n1,float a1[100][100]);
void deporte (int m1,int n1,float a1[100][100]);
void mostrar (int m1,int n1,float a1[100][100]);

main(){
	int n, m;
	float a[100][100], mt;
	
	printf ("Ingrese la cantidad de filas: ");
	scanf ("%d", &m);
	printf ("Ingrese la cantidad de columnas: ");
	scanf ("%d", &n);
	
	leer (m,n,a);

	
}

void leer (int m1,int n1,float a[100][100])
{
	int i,j;
	for (i= 0;i<m1;i++)
	{
		printf ("\n");
		for (j = 0;j<n1;j++)
		{
			printf("v[%d][%d] - ",i,j);
			scanf ("%f", &a[i][j]);
		}
	}
}

void sucursal (int m1,int n1,float a1[100][100])
{
	int i,j,suc;
	float mayf,s;
	
	mayf = 0;
	suc = 0;
	
	for (i=0;i<m1;i++)
	{
		s = 0;
		for (j = 0;j<n1;j++)
		{
			s = s + a1[i][j];
		}
		if (s > mayf)
		{
			mayf = s;
			suc = i;
		}
	}
	printf ("\n\n La sucursal con mayor venta es : %d ", suc);
}

float total (int m1,int n1,float a1[100][100])
{
	int i,j;
	float s;
	
	s = 0;
	for (i = 0;i<m1;i++)
	{
		for (j = 0;j<n1;j++){
			s = s + a1[i][j];
		}
	}
	return s;
}

void deporte (int m1,int n1,float a1[100][100])
{
	int i,j,dep;
	float mayc,s;
	
	mayc = 0;
	dep = 0;
	
	for (j = 0;j < n1; j++)
	{
		s = 0;
		for (i = 0; i < m1; i++)
		{
			s = s + a1 [i][j];
		}
		if (s < mayc)
		{
			mayc = s;
			dep = j;
		}
	}
	printf ("\nDeporte con mayor monto de venta es : %d ", dep);

}

void mostrar (int m1,int n1,float a1[100][100])
{
	int i,j;
	
	printf ("\nLa matriz del los vectores cargados es \n");
	for (i = 0;i<m1;i++)
	{
		printf ("\n");
		for (j=0;j<n1;j++)
		{
			printf ("v[%d][%d] = %2.f ",i,j,a1[i][j]);
				
		}
	}
}
