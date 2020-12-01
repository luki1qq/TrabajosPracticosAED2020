#include <stdio.h>
#include <stdlib.h>


main()
{
	int i,j,n1,m1,b,aux;
	float vector[100][100];
	b = 0;
	printf ("Ingrese la cantidad de filas");
	scanf ("%d", &m1);
	printf ("Ingrese la cantidad de columnas");
	scanf ("%d", &n1);
	
	for (i = 0;i<m1;i++)
	{
		for (j = 0;j<n1;j++)
		{
			printf ("Ingrese el elemento v[%d][%d] = ",i,j);
			scanf ("%f", &vector[i][j]);
		}
	}
	printf ("Que comience el ordenamiento");
	
	do
	{

		for (int i = 0;i<m1;i++)
		{
			for (int j = 0;i<n1;j++)
			{
				if (vector[i][j]>vector[i][j+1])
				{
					aux = vector [i][j];
					vector[i][j] = vector[i][j+1];
					vector[i][j+1] = aux;
					b = 1;
				}
			}
			if (i<m1-1)
			{
				if (vector[i][n1-1]>vector[i+1][0])
				{
					aux = vector[i][n1-1];
					vector[i][n1-1] = vector[i+1][0];
					vector[i+1][0] = aux;
					b = 1;
				}
			}
		}
	}
	while (b == 1);
	
	printf("La matriz ordenada es:\n\n");
	
		for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
	{
		printf("Elemento a[%d][%d] = %d\n",i,j,vector[i][j]);
	}
}

}
