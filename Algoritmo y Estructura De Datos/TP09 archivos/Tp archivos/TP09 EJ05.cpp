/*
En un archivo se tienen registradas las ventas que realiza un comercio. Cada registro
 contiene los siguientes datos:
	- Numero de vendedor (Son tres los vendedores 1, 2, 3)
	- Apellido y Nombre del vendedor
	- Numero Factura.
	- Importe facturado por esa venta.
	- Forma de venta (1: Contado, 2: Crédito)
	- Fecha de Venta (DD MM AAAA) (Año se registra 4 dígitos) campo jerar-quizado.
Desarrolle un programa que permita realizar, al encargado del negocio, por medio de 
un menú las siguientes operaciones que deben ser realizadas en función diferente:
	a. Carga de los datos al archivo, tener en cuenta que cada vez
		que se habrá el archivo o se realice una nueva carga NO debe perder lo que ya se 
		tiene re-gistrado.Y verificar que se ingresen valores válidos para los miembros 
		número de vendedor y forma de venta.
	b. Cantidad total de venta registrada en un mes determinado. (El mes debe ser 
		solicitado por teclado).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*------------------------*/
struct reg1{
	char nombre[40];
	char apellido[40];
	char carrera[40];
	float promedio;
};
void ingresarEstudiantes (FILE *tex);
void listado(FILE *tex);
int menuPrincipal();
int apellidos(FILE *tex);
main(){
	FILE *tex;
	tex = fopen("texto1.txt", "r+");
	if (tex == NULL){
		fclose(tex);
		tex = fopen("texto1.txt", "w+");
	}
	int opc;
	do{
		opc = menuPrincipal();
		switch(opc){
			case 1:{
				ingresarEstudiantes(tex);
				break;
			}
			case 2:{
				listado(tex);
				system("PAUSE");
				break;
			}
			case 3:{
				int ap = apellidos(tex);
				printf ("La cantidad de apellidos iguales es %d ", ap);
				system("PAUSE");
				break;
			}
		}
	}while(opc!=6);
	fclose(tex);
}

/*--------------------------*/
int menuPrincipal(){
	int op;
	system("CLS");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t           MENU PRINCIPAL               ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t    1- Carga de estudiantes             ");
	printf("\n\t\t\t    2- Carga de estudiantes             ");
	printf("\n\t\t\t    3- Carga de estudiantes             ");
	printf("\n\t\t\t    6- Salir del sistema                ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t\t Ingrese o Selecione opcion: "); 
	scanf("%d", &op);
	return op;
}

void ingresarEstudiantes (FILE *tex)
{
	reg1 reg;
	int n;
	
	printf ("Ingrese la cantidad de estudiantes : ");
	scanf ("%d", &n);
	for (int i = 0;i<n;i++)
	{
		printf ("Ingrese el nombre: ");
		_flushall();
		gets(reg.nombre);
		printf ("\nIngrese el apellido : ");
		gets(reg.apellido);
		printf ("Ingrese la carrera : ");
		gets(reg.carrera);
		fprintf(tex,reg.carrera);
		fprintf(tex,strcat(reg.nombre,";"));
	}
}

void listado(FILE *tex)
{
	reg1 reg;
	printf ("LISTADO \n");
	while (!feof(tex))
	{
		fgets(reg.carrera,40,tex);
		printf ("%s", reg.carrera);
		fgets(reg.nombre,40,tex);
		printf ("%s", reg.nombre);
	}
}
int apellidos(FILE *tex)
{
	reg1 reg;
	char buscar[40];
	int contap;
	printf ("Ingrese el apellido que desea buscar : ");
	_flushall();
	gets (buscar);
	while (!feof(tex))
	{
		fgets(reg.apellido,40,tex);
		if (strcmp(reg.apellido,buscar) == 0)
		{
			contap++;
		}
	}
	return contap;
}
