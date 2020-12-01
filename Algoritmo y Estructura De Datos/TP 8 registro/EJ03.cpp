#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha{
	int dia;
	int mes;
	int anio;
};

struct datosCliente{
	char ApeNom[40];
	char dire[60];
	float monVehi;
	fecha fecVenta;
};

void mostrar(struct datosCliente &reg1);

main()
{
	datosCliente reg;
	int n,fecMenDia,fecMenMes,fecMenAnio,men = 99999999;
	printf ("Ingrese la cantidad de ventas realizadas \n");
	scanf ("%d", &n);
	for (int i = 0;i<n;i++)
	{
		printf ("Ingrese el monto del vehiculo : ");
		scanf ("%f", &reg.monVehi);
		printf ("Ingrese su apellido y nombre : ");
		_flushall();
		gets (reg.ApeNom);
		printf ("Ingrese su direccion: ");
		gets (reg.dire);
		printf ("\n\nIngrese la fecha :\n");
		printf ("\tDia : ");
		scanf ("%d", &reg.fecVenta.dia);
		printf ("\tMes : ");
		scanf ("%d", &reg.fecVenta.mes);
		printf ("\tAño : ");
		scanf ("%d", &reg.fecVenta.anio);
		if (reg.monVehi > men)
		{
			reg.monVehi = reg.monVehi;
		}
		else
		{
			men = reg.monVehi;
			fecMenDia = reg.fecVenta.dia;
			fecMenMes = reg.fecVenta.mes;
			fecMenAnio = reg.fecVenta.anio;
		}
	}
	printf ("La fecha en la que se ha vendido menos fue : %d/%d/%d",fecMenDia,fecMenMes,fecMenAnio);	
}

void mostrar(struct datosCliente &reg1)
{
	printf ("LOS DATOS DEL CLIENTE SON \n");
	printf ("%f", reg1.monVehi);
	printf ("la fecha de nacimiento es: %d/%d/%d",reg1.fecVenta.dia,reg1.fecVenta.mes,reg1.fecVenta.anio);
}
