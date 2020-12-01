#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h> 


// Protitpos WarCoin //

int CanMinYMax (int maximo,int menor);

int numAleatorio (int valor);

int UsuarioOcomputadora (int retornar);

int DescuentoMonedas (int numPila);

int WarCoin();


//	Funciones WarCoin //

int WarCoin()
{
	int valor,mensaje,menor,maximo,numPila,descuento;
	
	descuento = DescuentoMonedas(numPila);
	
}

int numAleatorio (int valor)
{
	int limite_inferior = 10,limite_superior = 50;
	srand (time(NULL));
	valor = limite_inferior + rand()%(limite_superior+1 - limite_inferior);
	return valor;
}

int UsuarioOcomputadora (int UsuarioOpc)
{
	int limite_inferior = 2,limite_superior = 3;
	srand (time(NULL));
	UsuarioOpc = limite_inferior + rand()%(limite_superior+1 - limite_inferior);
	return UsuarioOpc;
}

int DescuentoMonedas (int numPila)
{
	int funcion,valor,menor,maximo,MonedasAEliminar,N,comparacionAuxiliar,pc,UsuarioOpc,MonedasAEliminarpc,comparador = 0;
	
	
	numPila = numAleatorio(valor);
	
	do
	{
	comparacionAuxiliar = 0;
	
	system("CLS");
	
	printf("===============================================================================\n");
	printf("==========INGRESE LA CANTIDAD MINIMA DE MONEDAS QUE SE PUEDEN RETIRAR==========\n");
	printf("===============================================================================\n\n");
	scanf ("%d", &menor);
	
	printf("===============================================================================\n");
	printf("==========INGRESE LA CANTIDAD MAXIMA DE MONEDAS QUE SE PUEDEN RETIRAR==========\n");
	printf("===============================================================================\n\n");
	scanf ("%d", &maximo);
	
	if (maximo < menor)
	{
		printf ("\n\nEl valor Maximo no puede ser Menor al valor Menor...\n");
		system("PAUSE");
		comparacionAuxiliar = 1;
	}
	else
	{
		menor = menor;
		maximo = maximo;

	}
	}

	while (comparacionAuxiliar == 1);
	
	pc = UsuarioOcomputadora(UsuarioOpc);
	
		if (pc == 3)
		{
			system("CLS");
			printf("===============================================================================\n");
			printf("============================| Es el turno de: CPU |============================\n");
			printf("===============================================================================\n\n");
		}
		else
		{
			printf("===============================================================================\n");
			printf("========================== |Es el turno del: Usuario |=========================\n");
			printf("===============================================================================\n\n");
		}
			
	
	printf("===============================================================================\n");
	printf("=============|LA CANTIDAD INICIAL DE MONEDAS EN LA PILA ES: %d  |==============\n",numPila);
	printf("===============================================================================\n\n");
	
	N = 2;
	

				
	for (int i = 1;i<N;i++)
	{
		
	comparador = comparador + 2; 
	
	if (pc == 2)
	
	{

	
	if (N % 2 == 0)
	{
		printf("===============================================================================\n");
		printf("=================| INGRESE LA CANTIDAD DE MONEDAS A ELIMINAR |=================\n");
		printf("===============================================================================\n");
		scanf ("%d", &MonedasAEliminar);

		if (MonedasAEliminar >= menor and MonedasAEliminar <= maximo)
			{
			numPila = numPila - MonedasAEliminar;	
			printf ("\n\n==> Quedan %d monedas\n", numPila);
			if (numPila < menor)
			{
				N = N - 1;
				system("CLS");
				printf("\n===============================================================================\n");
				printf("=======================| GANASTE!! PUNTAJE OBTENIDO: 5 |=======================\n");
				printf("===============================================================================\n\n");
			}
			else
			{
				N = N + 1;
			}	
			}
			else
			{		
				printf ("ERROR: se deben desapilar entre %d y %d monedas. volver a intentar!!!\n",menor,maximo);
					i = i - 1;					
			}
	}
	else
	{

		srand(time(NULL));
		{
			MonedasAEliminarpc = menor +rand()%(maximo+1 - menor);
			
			printf ("\n==> La computadora saco %d monedas de la pila", MonedasAEliminar);
			
			if (MonedasAEliminarpc >= menor and MonedasAEliminarpc <= maximo)
			{
			
			numPila = numPila - MonedasAEliminarpc;	
			
			printf ("\n\n==> Quedan %d monedas\n", numPila);
			
			if (numPila < menor)
			{
				N = N - 1;	
				printf("\n==============================================================================\n");
				printf("=====================| EL CPU GANO!! PUNTAJE OBTENIDO: 0 |=====================\n");
				printf("===============================================================================\n\n");
			}
			else
			{
				N = N + 1;
			}	
			}
			else
			{		
				printf ("\nERROR: se deben desapilar entre %d y %d monedas. volver a intentar!!!",menor,maximo);
				i = i - 1;					
			}
		}
		
	}	
	}
	else
	{
	if (N % 2 == 0)
	{
		
		srand(time(NULL));
	
		{
			MonedasAEliminarpc = menor +rand()%(maximo+1 - menor);
			
			
			if (MonedasAEliminarpc >= menor and MonedasAEliminarpc <= maximo)
			{
			printf ("\n==> La computadora saco %d monedas de la pila", MonedasAEliminarpc);
			
			numPila = numPila - MonedasAEliminarpc;	
			
			printf ("\n==> Quedan %d monedas", numPila);
			if (numPila < menor)
			{
				N = N - 1;
				printf("\n==============================================================================\n");
				printf("=====================| EL CPU GANO!! PUNTAJE OBTENIDO: 0 |=====================\n");
				printf("===============================================================================\n\n");
			}
			else
			{
				N = N + 1;
			}	
			}
			else
			{		
				printf ("\n\nERROR: se deben desapilar entre %d y %d monedas. volver a intentar!!!",menor,maximo);
				i = i - 1;					
			}
		}
	}
	else
	{
		printf ("\n\nIngresa la cantidad de monedas a eliminar: ");
	
		scanf ("%d", &MonedasAEliminar);
		
		if (MonedasAEliminar >= menor and MonedasAEliminar <= maximo)
		{
	
			numPila = numPila - MonedasAEliminar;	
			printf ("\n\n==> Quedan %d monedas", numPila);
			if (numPila < menor)
			{
				N = N - 1;
				printf("\n===============================================================================\n");
				printf("=======================| GANASTE!! PUNTAJE OBTENIDO: 5 |=======================\n");
				printf("===============================================================================\n\n");	
			}
			else
			{
				N = N + 1;
			}	
			}
			else
			{		
				printf ("ERROR: se deben desapilar entre %d y %d monedas. volver a intentar!!!\n",menor,maximo);
				i = i - 1;					
			}
	}
	}
	}
}

