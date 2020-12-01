#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*PROTOTIPOS*/
void carganum(FILE *arch);
int menuprincipal();
int parImpar(FILE *arch,int &par);
void listar(FILE *arch);
int rango(FILE *arch,int &can2);
void carganumNUEVO(FILE *arch);
int buscar(FILE *arch);

main()
{
	int opc;
	int num;
	FILE *arch;
	arch = fopen("numeros.dat","a+b");
	if (arch==NULL){
	printf ("Su archivo no se abrio, consulte con su administrador \n");
	system("PAUSE");
	exit(1);
	}
	do
	{
		opc = menuprincipal();
		switch(opc){
			case 1:{
					int par,impar,total;
					impar = parImpar(arch,par);
					printf ("La cantidad de valores pares %d y impares %d ",par,impar);
					system("PAUSE");
					break;
				}
			case 2:{
				listar(arch);
				break;
			}
			case 3:{
				carganumNUEVO(arch);
				break;
			}
			case 4:{
				int valor;
				valor = buscar(arch);
				if (valor >= 1)
				{
					printf ("El numero buscado se ha encontrado y es %d\n", valor);
				}
				else
				{
					printf ("El numero ingrsado no fue encontrado\n");
				}
				system("PAUSE");
				break;
			}
			case 5:{
				int can2,cant1;
				cant1 = rango(arch,can2);
				printf ("la cantidad de numeros que se encuentran entre 125 y 500 es %d \n",can2);
				printf ("La cantidad de numeros que se encuentran entre 500 y 789 es %d \n",cant1);
				system ("PAUSE");
				break;
			}
			default:
					printf ("El valor ingresado no es valido");
					system("PAUSE");
			}						
	}while(opc!=6);
	
	fclose(arch);
}

void carganum(FILE *arch){
	srand(time(NULL));
	int num;
	for (int i = 0;i<276;i++)
	{
		num = 125 + rand()%(125-790);
		fwrite(&num,sizeof(int),1,arch);
	}
}

int menuprincipal()
{
	int opc;
		system("CLS");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t           MENU PRINCIPAL               ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t    1- Determina valores Impar/pares    ");
	printf("\n\t\t\t    2- Lista el archivo                 ");
	printf("\n\t\t\t    3- Ingresa un nuevo dato            ");
	printf("\n\t\t\t    4- Busqueda de un numero            ");
	printf("\n\t\t\t    5- determina cuantos valores hay entre (125.500) y (500.789)");
	printf("\n\t\t\t    6- Salir del sistema                ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t\t Ingrese o Selecione opcion: "); 
	scanf("%d", &opc);
	return opc;
}

int parImpar(FILE *arch,int &par)
{
	int num,impar;
	rewind(arch);
	fread(&num,sizeof(int),1,arch);
	par = 0;
	impar = 0;
	while (!feof(arch))
	{
		if (num % 2 == 0)
		{
			par = par + 1;
		}
		else
		{
			impar = impar + 1 ;
		}
		fread(&num, sizeof(int), 1, arch);
	}
	return impar;
}

void listar(FILE *arch)
{
	int num;
	rewind(arch);
	printf ("Los numeros almacenados son: \n");
	fread(&num,sizeof(int),1,arch);
	while (!feof(arch))
	{
		printf ("%d -", num);
		fread(&num,sizeof(int),1,arch);
	
	}
	system("PAUSE");
}

int rango(FILE *arch,int &can2)
{
	int num;
	rewind (arch);
	fread (&num,sizeof(int),1,arch);
	int cant = 0;
	can2 = 0;
	while (!feof(arch))
	{
		if (num>=125 and num<=500)
		{
			can2 = can2 + 1;
		}
		else
		if (num>=500 and num<=789)
		{
			cant = cant + 1;
		}
		fread (&num,sizeof(int),1,arch);
	}
	return cant;
}

int buscar(FILE *arch)
{
	int num,valor;
	rewind (arch);
	fread (&num,sizeof(num),1,arch);
	printf ("Ingrese el valor que desea buscar");
	scanf ("%d", &valor);
	while(!feof(arch))
	{
		if (valor==num)
		{
			valor = num;
		}
		else
		{
			valor = valor;
		}
		fread(&num,sizeof(int),1,arch);
	}
	return valor;
}

void carganumNUEVO(FILE *arch){
	int num,n;
	printf ("Ingrese la cantidad de datos que desea ingresar : ");
	scanf ("%d", &n);
	for (int i = 0;i<n;i++)
	{
		printf ("Ingrese los datos : ");
		scanf ("%d", &num);
		fwrite(&num,sizeof(int),1,arch);
	}
}
int busqueda(FILE *arch)
{
	int num;
	rewind (arch);
	fread (&num,sizeof(int),1,arch);
	
}
