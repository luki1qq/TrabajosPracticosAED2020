#include <stdio.h>

void cargar (int m1,int a [100][100]);

main()
{
	int m;
	int a[100][100];
	printf ("Ingrese la cantidad de filas: ");
	scanf ("%d", &m);
	
	cargar (m,a);
	mostrar (m,a);
	ordenar (m,a);
	
}

void cargar (int m1,int a[100][100])
{
	
}
