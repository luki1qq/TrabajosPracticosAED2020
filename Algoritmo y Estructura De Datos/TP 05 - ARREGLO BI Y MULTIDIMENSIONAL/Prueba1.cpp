#include <stdio.h>
float menor (int ingreso,float vector[10]);

void cargar (int ingreso,float vector[10]);

main()
{
	int ingreso;
	float s,vector[10],menorvalor;
	printf ("Ingrese un valor ");
	scanf ("%d", &ingreso);
	cargar (ingreso,vector);
	menorvalor = menor(ingreso,vector);
	printf ("el menor valor es %f", menorvalor);
	

}

void cargar (int ingreso,float vector[10])
{
		for (int i = 0;i<ingreso;i++)
	{
		printf ("Ingrese valores al vector: ");
		scanf ("%f", &vector[i]);
	}
}

float menor (int ingreso,float vector[10])
{
	float menorvalor;
	float s;
	menorvalor = vector[0];
	for (int i = 0;i<ingreso;i++)
	{
		s = 0;
		s = s + vector[i];
		if (s<=menorvalor)
		{
			menorvalor = s;
		}
	}
	return menorvalor;
}
