#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char cadena[30];

struct numexp{
	cadena exp[70];
	cadena nombreprop[60];
	int cantm2[10];
};

struct tipoobra{
	int tipobra;
	numexp casa;
};

struct fecha{
	int dia;
	int mes;
	int anio;
	tipoobra obra;
};

main()
{
	fecha reg;
	for (int i = 0;i<N;i++)
	{

	printf ("Ingrese el numero de expediente ");
	gets (reg.obra.casa.exp[i]);
	printf ("Ingrese el nombre de propietario");
	_flushall();
	gets(reg.obra.casa.nombreprop[i]);
	printf ("Ingrese la cantidad de metros cuadrados construidos");
	scanf ("%d", &reg.obra.casa.cantm2[i]);
	printf ("Ingrese el Tipo de obra (0: vivienda básica, 1: vivienda de Lujo, 2: Edificio, 3: predio especial) : ");
	scanf ("%f", &reg.tipodeobra[i]);
			
	}
}
