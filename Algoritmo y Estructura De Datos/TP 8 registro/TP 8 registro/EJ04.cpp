#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente{
	int doc;
	char ApeNom[40];
};

struct fechaNac{
	int dia;
	int mes;
	int anio;
	cliente datos;
};

struct Notas{
	int primerse;
	int segundose;
	int tercerse;
	int promAnual;
	fechaNac fecha;
};

main()
{
	Notas reg;
	int n,contador=0;
	printf ("Ingrese la cantidad de alumnos \n");
	scanf ("%d", &n);
	for (int i = 0;i<n;i++)
	{
		printf ("Ingrese el numero de documento del alumno : ");
		scanf ("%d", &reg.fecha.datos.doc);
		printf ("Ingrese el nombre y apellido : ");
		_flushall();
		gets(reg.fecha.datos.ApeNom);
		printf ("Ingrese su fecha de nacimiento : \n");
		printf ("\tDia : ");
		scanf ("%d", &reg.fecha.dia);
		printf ("\tMes : ");
		scanf ("%d", &reg.fecha.mes);
		printf ("\tAnio : ");
		scanf ("%d", &reg.fecha.anio);
		printf ("Ingresar el promedio del alumno");
		printf ("\tPrimer semestre : ");
		scanf ("%d", &reg.primerse);
		printf ("\tSegundo semestre : ");
		scanf ("%d", &reg.segundose);
		printf ("\tTercer semestre : ");
		scanf ("%d", &reg.tercerse);
		reg.promAnual = (reg.primerse+reg.segundose+reg.tercerse)/3;
		
		if (reg.promAnual >= 8)
		{
			contador = contador + 1;
		}
	}
	printf ("Los alumnos que se encuentra por arriba del promedio de 8 es %d\n", contador);
}
