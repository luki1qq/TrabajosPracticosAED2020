#include <stdio.h>
#include <string.h>
typedef char nombre1[40];

main()
{
	nombre1 nombre2[40];
	int valor = 1,N,notas[100];
	char nombre[40];
	printf ("Ingrese cuantos empleados quiere ingresar: \n");
	scanf ("%d", &N);
	printf ("Ingrese nombre de empleados\n");
	for (int i = 0;i<N;i++)
	{
		gets (nombre2[i]);
	}
	printf ("Ingrese el nombre del empleado a comprarar : ");
	_flushall();
	gets (nombre);
	for (int i = 0;i<N;i++)
	{
		valor = strcmp(nombre,nombre2[i]);
	}
	if (valor == 0)
	{
		for (int i = 0;i<N;i++)
		{
			printf ("nota : ");
			scanf ("%d", &notas[i]);
		}
	}
	}

