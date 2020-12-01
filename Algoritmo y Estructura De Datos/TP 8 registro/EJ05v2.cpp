#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
typedef char nombres[100];

struct empleados{
	nombres ApeyNom[80];
	int dni[100];
	float venta[5][20];
};

struct fecha{
	int dia;
	int mes;
	int anio;
	empleados operario;
};

float registroventas(fecha reg,int N,float variable[10][10],float total[6]);
void semana(fecha reg);
void listar(fecha reg,int N,float variable[10][10],float total[6]);
void gotoxy(int x,int y){

      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

main()
{
	fecha reg;
	int num,N;
	float v,var[10][10],t[10];
	do
	{
	printf ("\nBienvenidos al menu de la empresa, ingrese un numero para acceder. \n");
	printf ("1. Registrar empleados \n");
	printf ("\n2. Registrar el total de ventas del dia.  \n");
	printf ("\n3. Listar por pantalla el monto de ventas de la semana \n");
	printf ("\n4. Modificar los datos de ventas  \n");
	printf ("\n0. Salir  \n");
	scanf ("%d", &num);
	if (num == 1)
	{
		do{

		printf ("¿Que cantidad de empleados desea ingresar? Recuerde que el minimo es 5 \n");
		scanf ("%d", &N);
		if (N >= 5)
		for (int i = 0;i<N;i++)
		{
			printf ("\nIngrese el nombre del empleado : ");
			_flushall();
		    gets(reg.operario.ApeyNom[i]);
		    printf ("\nIngrese el DNI del empleado : ");
		    scanf ("%d", &reg.operario.dni[i]);
		}
		else
		{
			
			printf ("El numero Ingresado No es valido, Ingrese nuevamente\n");
		}
		}while (N < 5);
	}
	else
	if (num == 2)
	{	
		system ("CLS");
		v = registroventas(reg,N,var,t);
	}
	else
	if (num == 3)
	{
		system ("CLS");
		listar(reg,N,var,t);
		printf ("\n");
		system ("pause");
	}
	}while(num != 0 and num <5);
}

float registroventas(fecha reg,int N,float variable[10][10],float total[6])
{
	char buscar[80];
	int valor[2],num;
	printf ("Ingrese el nombre y apellido del empleado \n");
	_flushall();
	gets (buscar);
		for (int i = 0 ;i<N;i++)  
	{
		if(strcmp(buscar,reg.operario.ApeyNom[i]) == 0)
		{
			valor[0] = 0;
		}
		else
		{
			valor[1] = 1;
		}
    }
		if (valor[0] == 0)
		{
			printf ("Cual es el numero de empleado?");
			scanf ("%d", &num);
			for (int j = 0;j<N;j++)
			{
				printf ("Ingrese los valores de ventas :[%d][%d] ",num,j);
				scanf ("%f", &reg.operario.venta[num][j]);
				variable[num][j] = reg.operario.venta[num][j];
				total[0] = total[0] + variable[num][j];
			}
		}
		else
		{
			printf ("El valor ingresado no es valido, Ingrese el nombre nuevamente\n");
		}
	
}

void listar(fecha reg,int N,float variable[10][10],float total[6])
{
	char viernes[8] = {'v','i','e','r','n','e','s','\0'},lunes[6] = {'l','u','n','e','s','\0'},martes[7] = {'m','a','r','t','e','s','\0'},miercoles[10]={'m','i','e','r','c','o','l','e','s','\0'},jueves[7]={'j','u','e','v','e','s','\0'};
	char documento[10] ={'d','o','c','u','m','e','n','t','o','\0'}, Apellidoynombre[18] = {'A','p','e','l','l','i','d','o','y','N','o','m','b','r','e'},total1[10] = {'T','o','t','a','l','\n'};
	char nombreyape[40];
	int num=2;
	printf ("%10s", documento);
	printf ("%20s", Apellidoynombre);
	printf ("%15s", lunes);
	printf ("%10s", martes);
	printf ("%10s", miercoles);
	printf ("%10s", jueves);
	printf ("%10s", viernes);
	printf ("%10s", total1);
	printf ("==========================================================================================\n");
	for (int i = 0;i<N;i++)
	{
		gotoxy(0,num+i);
		printf ("%d", reg.operario.dni[i]);
	}
	for (int i = 0;i<N;i++)
	{
		gotoxy(15,num+i);
		_flushall();
		puts(reg.operario.ApeyNom[i]);
	}
	for (int j = 2;j<=7;j++)
	{
		for (int i = 0;i<6;i++)
		{
		gotoxy(10*(2+j),(2+i));
		printf ("%f", variable[i][j-2]);
		gotoxy(90,(i+2));
		printf ("%f", total[i]);
		}
	}
	
}
