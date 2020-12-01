#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h> 

// Prototipos MayMen //

int NumSecreto (int ar[11],int N);

void IngresoNum (int ar[11],int N);

int Puntaje (int ar[11],int N);

int MayMen();

// Definiciones 

int MayMen()
{
	
	int ar[11],N;
	
	IngresoNum (ar,N);
		
}

void IngresoNum (int ar[11],int N)
{
	int num,numsecret,lim_sup = 1000,lim_inf=1,aux=0,aux2=0,ganar,lugar;
	
    N = N + 10;
    
    numsecret = NumSecreto (ar,N);
    
	for (int i= 0;i<N;i++)
	{
		printf ("==========================\n",i+1);
		printf ("======| Intento %d |======\n",i+1);
		printf ("==========================\n\n",i+1);scanf ("%i", &num);
		
		if (num>= 1 and num<= 999)
		{		
			ar[i] = num;
			if (numsecret == num)
			{
				lugar = i + 1;
				ganar =	Puntaje (ar,lugar);
				break;
			}
			if (numsecret > num)
			{
				if (i == 0)
				{
				aux = num;
				aux2 = lim_sup;
				
				printf ("El numero secreto es mayor y se encuentra entre %i y %i\n",aux+1,aux2-1);
				}
				else
				{
					aux = num;
					aux2 = aux2;
					printf ("El numero secreto es mayor y se encuentra entre %i y %i\n",aux+1,aux2-1);
				}
			}
			else
			{
				if(i != 0)
				{
					aux=aux;
					aux2 = num;	
					
					printf("El numero secreto es menor y se encuentra entre %i y %i\n",aux+1,aux2-1);
				}
				else
				{
					aux=lim_inf;
					aux2 = num;
					printf ("El numero secreto es menor y se encuentra entre %i y %i\n",aux+1,aux2-1);
				}
				
			}
			
			if (i == 9)
			
		{
			system("CLS");
			printf ("=====================================================\n");
			printf ("======No acertaste! El puntaje obtenido es: 0========\n");
			printf ("==============El numero secreto fue %d  =============\n", numsecret);
			printf ("=====================================================\n");break;
		}
		
		}
		else
		{
			printf ("El numero ingresado no es valido, ingrese nuevamente\n");
			system ("pause");
			i = i - 1;
		}
		
	}
	
}

int NumSecreto (int ar[11],int N)

{
	int lim_inf = 1,lim_sup = 999,num;
	srand(time(NULL));
	num = lim_inf + rand()%(lim_sup+1 - lim_inf);
	return num;
}

int Puntaje (int ar[11],int lugar)
{
	int puntaje,gana;
	
	for (int i = 0;i<10;i++)
	{
		do
		{
			gana = 1;
			for (int i = 0;i<lugar;i++)
			{
				puntaje = 10 - i;
					
				gana = 0;
				
				}		
		}
		while (gana == 1);
	}
	system("CLS");
	printf("=========================================================\n");
	printf("==========Acertaste! El puntaje obtenido es %d ==========\n", puntaje);
	printf("=========================================================\n\n");
}

