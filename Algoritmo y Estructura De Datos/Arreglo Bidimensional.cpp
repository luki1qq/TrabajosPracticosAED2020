#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void cargaArreglo ();

main()
{
	cargaArreglo();
}

void cargaArreglo ()
{
	
	int deporte,sucursal,i,j,vector[100][100],resultado[100],resultadofinal,comparador;
	
	printf ("Ingrese la cantidad de deportes");
	
	scanf ("%d", &deporte);

	
	printf ("Ingrese la cantidad de sucursales");
	
	scanf ("%d", &sucursal);
	
	for (i = 0; i < sucursal;i++)
	{
		
		for (j = 0;j < deporte; j++)
		{
			printf ("Ingrese el monto de ventas en la primera sucursal vector[%d][%d] : ", i,j);
			
			scanf ("%d", &vector[i][j]);
			
			resultado[i] = resultado[i] + vector [i][j];
			
			resultado[j] = resultado[j] + vector [i][j];

		}

		}

	/*
	for (i = 0; i < sucursal;i++)
	{
		if (resultado[i] > resultado[i+1])
	{
		printf ("la fila con mayor cantidad de ventas es %d ", i);
	}
	
	}
			
	*/
	for (j = 0;j<deporte;j++)
	{
		if (resultado[j] > resultado[j+1])
		{
			j = j;
		}
		else
		{
			j = j + 1;
		}
	}
	printf ("El deporte en el que más se vendio fue %d ", j);
}

