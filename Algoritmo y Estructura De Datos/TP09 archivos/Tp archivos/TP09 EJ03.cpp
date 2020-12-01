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
struct fecha{
	int dia;
	int mes;
	int anio;
};

struct ventas{
	int nroVen;
	char apynom[40];
	int nroFact;
	float impVenta;
	int forVenta;
	bool borrado;
	fecha fecVenta;
};

/*------------------------*/
int menuPrincipal();
void registrarVenta(FILE *archVenta);
void ventaDeUnMes(FILE *archVenta);
int contado(FILE *archVenta,int &credito,int &mes);
int vendedor (FILE *archVenta);
void listado(FILE *archVenta);
void modificar(FILE *archVenta);
void baja(FILE *archVenta);
void listadoLogico(FILE *archVenta);
void ordenar (FILE *archVenta);
main(){
	int opc;
	FILE *archVenta = fopen("Venta.dat","r+b");
	if(archVenta == NULL){
		fclose(archVenta);
		archVenta= fopen("Venta.dat","w+b");
	}
	do{
		opc = menuPrincipal();
		switch(opc){
			case 1:
				registrarVenta(archVenta);
				break;
			case 2:
				ventaDeUnMes(archVenta);
				system("PAUSE");
				break;
			case 3:
				int contadoo,credito,mescobro;
				contadoo = contado(archVenta,credito,mescobro);
				printf ("en el mes %d se realizaron %d cobro de contado y %d cobro a credito\n",mescobro,contadoo,credito);
				system("PAUSE");
				break;
		
			case 4:{
				int importe;
				importe = vendedor(archVenta);
				if (importe > 0)
				printf ("el importe de venta solicitado del vendedor es %d\n", importe);
				else
				printf ("No existe importe de venta para el empleado solicitado\n");
				system ("PAUSE");
			}
			case 5:{
				listado(archVenta);
				system("PAUSE");
				break;
			}
			case 6:{
				modificar(archVenta);
				system("PAUSE");
				break;
			}
			case 7:{
				baja(archVenta);
				system("PAUSE");
				break;
			}
			case 8:{
				listadoLogico(archVenta);
				system("PAUSE");
				break;
			}
			case 9:{
				ordenar(archVenta);
				break;
			}
			case 10:{
			printf("Saliendo del sistema.....\n");
			system("PAUSE");
			break;
			}
			default:{
				printf("\n\n El valor ingresado no es valido...\n");
				system("PAUSE");
				break;
				}
		}
		
	}while(opc != 10);
	fclose(archVenta);
}

/*--------------------------*/
int menuPrincipal(){
	int op;
	system("CLS");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t           MENU PRINCIPAL               ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t    1- Ingrese de Venta                 ");
	printf("\n\t\t\t    2- Monto registrado en un Mes       ");
	printf("\n\t\t\t    3- Ventas Realizadas en contado y credito en determinado mes");
	printf("\n\t\t\t    4- importe de venta del vendedor en un determinado mes");
	printf("\n\t\t\t    5- Listado de todos los datos del archivo");
	printf("\n\t\t\t    6- modificar                ");
	printf("\n\t\t\t    7- baja                ");
	printf("\n\t\t\t    8- listadoLogico                ");
	printf("\n\t\t\t    9- Salir del sistema                ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t\t Ingrese o Selecione opcion: "); 
	scanf("%d", &op);
	return op;
}

/*--------------------------*/
void registrarVenta(FILE *archVenta){
	system("CLS");
	ventas regVenta;
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t         REGISTRAR VENTAS               ");
	printf("\n\t\t\t =======================================");
	printf("Nro de Vendedor: "); 
	regVenta.borrado = false;
	bool band= false;
	do{
		scanf("%d", &regVenta.nroVen);
		if(regVenta.nroVen >= 1 && regVenta.nroVen <=3)
			band = true;
		else
		{
			band = false;
			printf ("\nEl numero ingresado no es valido, ingrese el numero de venta nuevamente... ");
		}
	}while(!band); 
	printf("Apellido y Nombre: "); 
	_flushall();
	gets(regVenta.apynom);
	printf("Numero Factura: "); 
	scanf("%d", &regVenta.nroFact);
	printf("Importe de Venta: ");
	scanf("%f", &regVenta.impVenta);
	printf("Forma de Venta (1)Contado-(2)Credito: "); 
	
	scanf("%d", &regVenta.forVenta);
	
	printf("Fecha de Venta: dd/mm/aaaa: "); 
	scanf("%2d",&regVenta.fecVenta.dia);
	scanf("%2d",&regVenta.fecVenta.mes);
	scanf("%4d",&regVenta.fecVenta.anio);
	
	fseek(archVenta,0,2);
	fwrite(&regVenta, sizeof(ventas), 1, archVenta);
}

/*--------------------------*/
void ventaDeUnMes(FILE *archVenta){
	int mes;
	float sumMonto;
	system("CLS");
	printf("Que mes desea saber los monto de venta : ");
	scanf("%d", &mes);
	
	ventas regVenta;
	
	rewind(archVenta);
	fread(&regVenta, sizeof(ventas), 1, archVenta);
	while(!feof(archVenta)){
		if(regVenta.fecVenta.mes == mes)
			sumMonto = regVenta.impVenta;
		fread(&regVenta, sizeof(ventas), 1, archVenta);
	}
	printf("\n\n\n EL monto de venta que se realizo en el mes %d es de %f\n\n",mes,sumMonto);
	
}

int contado(FILE *archVenta,int &credito,int &mes)
{
	int contado;
	credito = 0;
	contado = 0;
	printf ("Ingrese el mes ");
	scanf ("%d",&mes);
	ventas regVenta;
	rewind(archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	while(!feof(archVenta)){
		if (regVenta.fecVenta.mes == mes)
		{
			if (regVenta.forVenta == 1)
			{
				contado = contado + 1;
			}
			else
			if(regVenta.forVenta == 2)
			{
				credito = credito + 1;
			}
		}
		fread(&regVenta,sizeof(ventas),1,archVenta);
	}
	return contado;
}

int vendedor (FILE *archVenta)
{
	int importe,mes;
	char vendedor[40];
	printf ("Ingrese el Apellido y Nombre del Vendedor : ");
	_flushall();
	gets(vendedor);
	printf ("Ingrese el mes para determinar el importe total : ");
	scanf ("%d",&mes);
	ventas regVenta;
	rewind(archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	while(!feof(archVenta))
	{
		if (regVenta.fecVenta.mes == mes)
		{
			if (strcmp(vendedor,regVenta.apynom))
			{
				importe = regVenta.impVenta;
			}
		}
		fread(&regVenta,sizeof(ventas),1,archVenta);
	}
	return importe;
}

void listado(FILE *archVenta)

{
	printf ("Los datos ingresados fueron \n");
	ventas regVenta;
	rewind(archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	while (!feof(archVenta))
	{
		puts(regVenta.apynom);
		printf("\nNumero Factura: %d\n", regVenta.nroFact);
		printf("Importe de Venta: %f\n", regVenta.impVenta);
		printf("Forma de Venta : %d\n", regVenta.forVenta);
		printf("Fecha de Venta: dd/mm/aaaa: %2d,%2d,%4d\n",regVenta.fecVenta.dia,regVenta.fecVenta.mes,regVenta.fecVenta.anio);
		fread(&regVenta,sizeof(ventas),1,archVenta);
	}
}

void modificar(FILE *archVenta)
{
	system("CLS");
	int factura;
	bool band;
	printf ("Ingrese la factura que desea modificar \n");
	scanf("%d",&factura);
	ventas regVenta;
	rewind(archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	band = false;
	while(feof(archVenta)==0 && band==false)
	{
		if (regVenta.nroFact == factura && regVenta.borrado==false)
		{
			if (regVenta.forVenta == 1)
			{
				
			}
			printf ("La anterior forma de venta fue (%d)Contado", regVenta.forVenta);
			printf ("Ingrese su nueva Forma de Venta (1)Contado-(2)Credito: ");
			scanf ("%d", &regVenta.forVenta);
			fseek(archVenta,- sizeof(ventas),SEEK_CUR);
			fwrite(&regVenta,sizeof(ventas),1,archVenta);
			printf ("Registro dado de baja");
			band = true;
		}
		else
		{
			fread(&regVenta,sizeof(ventas),1,archVenta);
		}
	}
	rewind (archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	
	while (!feof(archVenta))
	{
		if (regVenta.borrado==false)
		{
			puts(regVenta.apynom);
			printf("\nNumero Factura: %d\n", regVenta.nroFact);
			printf("Importe de Venta: %f\n", regVenta.impVenta);
			printf("Forma de Venta : %d\n", regVenta.forVenta);
			printf("Fecha de Venta: dd/mm/aaaa: %2d,%2d,%4d\n",regVenta.fecVenta.dia,regVenta.fecVenta.mes,regVenta.fecVenta.anio);
		}
		fread(&regVenta,sizeof(ventas),1,archVenta);
	}
	
}

void baja(FILE *archVenta)
{
	system("CLS");
	bool band;
	int factura,opc;
	printf ("Ingrese la factura que desea dar de baja : ");
	scanf ("%d", &factura);
	ventas regVenta;
	rewind (archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	band = false;
	while (feof(archVenta)==0 && band==false)
	{
		if (regVenta.nroFact == factura &&regVenta.borrado == false)
		{
			printf ("\nLOS DATOS DE EL ARCHIVO ES \n");
			puts(regVenta.apynom);
			printf("\nNumero Factura: %d\n", regVenta.nroFact);
			printf("Importe de Venta: %f\n", regVenta.impVenta);
			printf("Forma de Venta : %d\n", regVenta.forVenta);
			printf("Fecha de Venta: dd/mm/aaaa: %2d,%2d,%4d\n",regVenta.fecVenta.dia,regVenta.fecVenta.mes,regVenta.fecVenta.anio);			
			printf ("\n ¿Desea Eliminarlos? 1- SI , 2- NO \n");
			scanf ("%d", &opc);
			if (opc==1)
			{
			regVenta.borrado = true;
			fseek(archVenta,- sizeof(ventas),SEEK_CUR);
			fwrite(&regVenta,sizeof(ventas),1,archVenta);
			printf ("Registro dado de baja");
			band = true;
			}
			else
			{
				printf ("El archivo no fue eliminado \n");
				band = true;
			}
		}
		else
		{
			fread(&regVenta,sizeof(ventas),1,archVenta);
		}
	}
}

void listadoLogico(FILE *archVenta)
{
	system("CLS");
	bool band;
	ventas regVenta;
	rewind (archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	band = false;
	while (!feof(archVenta) )
		if (regVenta.borrado == true)
		{	
		puts(regVenta.apynom);
		printf("\nNumero Factura: %d\n", regVenta.nroFact);
		printf("Importe de Venta: %f\n", regVenta.impVenta);
		printf("Forma de Venta : %d\n", regVenta.forVenta);
		printf("Fecha de Venta: dd/mm/aaaa: %2d,%2d,%4d\n",regVenta.fecVenta.dia,regVenta.fecVenta.mes,regVenta.fecVenta.anio);
		fread(&regVenta,sizeof(ventas),1,archVenta);
		}
}

void ordenar (FILE *archVenta)
{
	system("CLS");
	ventas regVenta;
	rewind (archVenta);
	fread(&regVenta,sizeof(ventas),1,archVenta);
	int mayor = 50000;
	while (!feof(archVenta))
	{
	}
}


