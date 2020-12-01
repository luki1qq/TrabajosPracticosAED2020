//Menu

/*
	Titulo: Juegos Categorizados
	Grupo: 
	Autores: Jacas Leila, David ; Juarez, Patricio Lucas
*/

#include <stdio.h>//Utilizada para las entradas y salidas
#include <stdlib.h>//Utilizada para los numeros aleatorios y otras
#include <string.h>//Utilizada especialmente para el ahorcado, brinda funciones utiles para las variables de tipo string
#include <time.h>//Utilizada para los numeros aleatorios
#include <conio.h>
#include <iostream>//Funcion de C++, utilicada para cin, cout y otras
#include <windows.h>//Funciones como setlocale o keybd_event

//Librerias de juegos.
#include "games/MayMen.h"
#include "games/Adivinum.h"
#include "games/Ahorcado.h"
#include "games/Warcoin.h"

#pragma comment(lib, "user32")//Utilizada para iniciar el programa en pantalla completa.

using namespace std;//Inicializador en C++

int main()
{
	system ("color F0");//Cambia el color de la pantalla a blanco
	setlocale(LC_ALL, "spanish");//Cambia el idioma a español para poder utilizar caracteres especiales
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);//Utilizada para iniciar el programa en pantalla completa.
	keybd_event(0x7B,0,0,0);//Utilizada para iniciar el programa en pantalla completa.
	int juego1,juego2,juego3,juego4; //valor de retorno de MayMen
	int volver; // volver a jugar.
	int cambiarjuego; // cambiar juego
	int opcion,ejec;
	int error=1,dec;
	int jugador;
	
	//Bienvenida al juego
	printf("==========================================================\n");
	printf("=============| BIENVENIDO AL MENU DEL JUEGO |=============\n");
	printf("=================| ALT + F4 PARA CERRAR |=================\n");
	printf("==========================================================\n\n\n");
	sleep(2);//La funcion sleep deja pasar unos segundos para pasar a la siguiente linea
	
	//Menu
	do
	{
	printf("==========================================================\n");
	printf("====================| ELIGE UN JUEGO |====================\n");
	printf("====================|  1- MAYMEN     |====================\n");
	printf("====================|  2- ADIVINUUM  |====================\n");
	printf("====================|  3- WARCOIN    |====================\n");
	printf("====================|  4- AHORCADO   |====================\n");
	printf("==========================================================\n");
	printf("=======================================================> ");
	cin>>opcion;
	system("CLS");
	
	
	if (opcion == 1) // MayMen
	{
		system("CLS");
		printf("=======================================================\n");
		printf("=================|BIENVENIDO A MAYMEN|=================\n");
		printf("=======================================================\n\n");
		do
		{
			printf("=======================================================\n");
			printf("===========| Deseas leer las instrucciones? |==========\n");
			printf("==================| 1=SI |   | 0=NO |==================\n");
			printf("=======================================================\n\n");
			scanf("%d",&dec);system("CLS");
			if(dec==0)
			{
				error = 0;
				juego1 = MayMen();
				system ("PAUSE");
				system ("CLS");
				printf("=========================================================\n");
				printf("================| DESEA SEGUIR JUGANDO? |================\n");
				printf("===================| 1=SI |   | 0=NO |===================\n");
				printf("=========================================================\n\n");
				scanf ("%d", &volver);system("CLS");
				if (volver == 1)
				{
					error = 0;
				}
				else
				{
					break;
				}
			}
			else 
			if(dec==1)
			{
			printf("\nEste juego consiste en adivinar un número que está entre 1 y 999 denominado número secreto.");sleep(1);
			printf("\nEl jugador ingresa un numero y aparecera un mensaje indicando si el valor es mayor o menor.");sleep(1);
			printf("\nSi el valor ingresado es igual al secreto, entonces el jugador gana la partida.");sleep(1);
			printf("\nEl jugador tendra 10 intentos, al final se revelara el numero.");sleep(1);
			printf("\n\nPuntaje: El puntaje depende de la cantidad de intentos\n\n.");sleep(1);
			system("PAUSE");
			system("CLS");
			
			juego1 = MayMen();
			system ("PAUSE");
			system ("CLS");
			
			printf("=========================================================\n");
			printf("================| DESEA SEGUIR JUGANDO? |================\n");
			printf("===================| 1=SI |   | 0=NO |===================\n");
			printf("=========================================================\n\n");
			scanf ("%d", &volver);system("CLS");
			if (volver == 1)
				{
					error = 0;
				}
				else
				{
					error = 1;
				}
			}
			else
			{
				error = 0;
				printf("\nPor favor introduce un valor correcto.\n");
				system("PAUSE");
				system("CLS");
			}

	}while(error==0);
	}

	if (opcion == 2)//Adivinum
	{
		system("CLS");
		printf("==========================================================\n");
		printf("================| BIENVENIDO A ADIVINUUM |================\n");
		printf("==========================================================\n\n");
		do
		{
			printf("=======================================================\n");
			printf("===========| Deseas leer las instrucciones? |==========\n");
			printf("==================| 1=SI |   | 0=NO |==================\n");
			printf("=======================================================\n\n");
			scanf("%d",&dec);
			system("CLS");
			
			if(dec==0)
			{
				error = 0;
				juego1 = Adivinum();
				system ("PAUSE");
				system ("CLS");
				
				printf("=========================================================\n");
				printf("================| DESEA SEGUIR JUGANDO? |================\n");
				printf("===================| 1=SI |   | 0=NO |===================\n");
				printf("=========================================================\n\n");
				scanf ("%d", &volver);system("CLS");
				
					if (volver == 1)
					{	
						error = 0;
					}
					else
					{
						break;
					}
			}
			else
			if(dec==1)
			{
				
			printf("Adivinuum es un juego en el que se tiene que adivinar un número de 4 cifras, es decir entre 1000 y 9999."); sleep(1);
			printf("\nEl programa escoge este número al principio del partido y estará formado por dígitos del 1 al 9.");sleep(1);
			printf("\nEn el número, cada dígito aparece una vez como máximo.");sleep(1);
			printf("\nEl jugador tendrá 10 intentos, y si no lo descubre se le muestra un mensaje indicando cuál era el número que tenía");sleep(1);
			printf("\nPuntaje: El puntaje obtenido depende de la cantidad de intentos\n\n");
			
			sleep(1);
			
			system("PAUSE");
			system("CLS");
			
			printf("========================================================\n");
			printf("==========|Jugaremos con numeros de 4 cifras|===========\n");
			printf("========================================================\n\n");
			system("PAUSE");
			system("CLS");
			
			juego1 = Adivinum();
			
			system ("PAUSE");
			system ("CLS");
			
			printf("=========================================================\n");
			printf("================| DESEA SEGUIR JUGANDO? |================\n");
			printf("===================| 1=SI |   | 0=NO |===================\n");
			printf("=========================================================\n\n");
			scanf ("%d", &volver);system("CLS");
			if (volver == 1)
			{
				error = 0;
			}
			else
			{
				error = 1;
				printf("Ingresa un valor correcto");
				break;
			}
						
			}
			else
			{
				{
					error = 1;
					printf("Ingresa un valor correcto");
					break;
				}
			}
			
	}while(error==0);			
	}
	
	if (opcion == 3)//WarCoin
	{
		system("CLS");
		printf("========================================================\n");
		printf("=================|BIENVENIDO A WARCOIN|=================\n");
		printf("========================================================\n\n");
		do		
		{
			printf("=======================================================\n");
			printf("===========| Deseas leer las instrucciones? |==========\n");
			printf("==================| 1=SI |   | 0=NO |==================\n");
			printf("=======================================================\n\n");
			scanf("%d",&dec);system("CLS");
			if (dec == 0)
			{
				error = 0;
				juego2 = WarCoin();
				
				system ("PAUSE");
				system ("CLS");
				printf("=========================================================\n");
				printf("================| DESEA SEGUIR JUGANDO? |================\n");
				printf("===================| 1=SI |   | 0=NO |===================\n");
				printf("=========================================================\n\n");
				scanf ("%d", &volver);
				system("CLS");
					if (volver == 1)
					{
						error = 0;
					}
					else
					{
						break;
					}				
			}
			else
			if (dec == 1)
			{
			printf("WarCoin consiste en una pila de monedas.");sleep(1);
			printf("\nEl el jugador y la computadora van sacando monedas.");sleep(1);
			printf("\nEl jugador ingresa la cantidad mínima y la cantidad máxima");
			printf(" de monedas que se puede sacar en cada turno.");sleep(1);
			printf("\nLa computadora elegirá un valor al azar entre 10 y 50, que representará la cantidad inicial de monedas que tendrá la pila.");sleep(1);
			printf("\nUna vez que se ingresa toda la información inicial, el programa deberá decidir en forma aleatoria quién inicia la jugada.");sleep(1);
			printf("\n>Si le toca al jugador, éste elige la cantidad de monedas a retirar de la pila: un valor entre cantidad mínima y cantidad.");sleep(1);
			printf("\n>Si se da alguna de las dos situaciones de fin de juego, el jugador gana el juego.");sleep(1);
			printf("\n>Si aún quedan monedas luego de que el jugador saca la cantidad elegida de la pila, es el turno de la computadora, la cual elige la cantidad a sacar. \nSi se da alguna de las dos situaciones de fin de juego, la computadora gana el juego.");sleep(1);
			printf("\n\nPuntaje: Si gana el jugador obtiene 5 puntos, en caso contrario obtiene 0 puntos.\n\n");sleep(1);
			system("PAUSE");
			system("CLS");
			
			juego2 = WarCoin();
			
			system ("PAUSE");
			system ("CLS");
			printf("=========================================================\n");
			printf("================| DESEA SEGUIR JUGANDO? |================\n");
			printf("===================| 1=SI |   | 0=NO |===================\n");
			printf("=========================================================\n\n");
			scanf ("%d", &volver);system("CLS");
			if (volver == 1)
				{
					error = 0;
				}
				else
				{
					error = 1;
				}			
			}
			else
			{
				error = 0;
				printf("\nPor favor introduce un valor correcto.\n");system("PAUSE");system("CLS");			
			}
	}while(error==0);							
	}
	
	if (opcion == 4)//Ahorcado
	{
		system("CLS");
		printf("========================================================\n");
		printf("==============| BIENVENIDO A EL AHORCADO |==============\n");
		printf("========================================================\n\n");	
		do
		{
			printf("========================================================\n");
			printf("===========| Deseas leer las instrucciones? |===========\n");
			printf("===================| 1=SI |  | 0=NO |===================\n");
			printf("========================================================\n\n");
			scanf("%d",&dec);
			system("CLS");	
			
			if (dec == 0)
			{
			error = 0;
			system("CLS");
			printf("=========================");
			printf("\n==CANTIDAD DE JUGADORES==");
			printf("\n==| 1v1(1) | 1vCPU(0) |==");
			printf("\n=========================\n\n");scanf("%d",&jugador);
			if (jugador == 1)
			{
				Jugador1();
				system ("PAUSE");
				system ("CLS");
				printf("=========================================================\n");
				printf("================| DESEA SEGUIR JUGANDO? |================\n");
				printf("===================| 1=SI |   | 0=NO |===================\n");
				printf("=========================================================\n\n");
				scanf ("%d", &volver);system("CLS");
				if (volver == 1)
				{
					error = 0;
				}	
				else
				{
					error = 1;
				}	
			}
			else
			if (jugador == 0)
			{
				CPU();
				system ("CLS");
				system ("PAUSE");
				printf("=========================================================\n");
				printf("================| DESEA SEGUIR JUGANDO? |================\n");
				printf("===================| 1=SI |   | 0=NO |===================\n");
				printf("=========================================================\n\n");
				scanf ("%d", &volver);system("CLS");
				if (volver == 1)
				{
					error = 0;
				}
				else
				{
					error = 1;
				}
			}

			}
			else
			if (dec == 1)
			{
				printf("\nEl Ahorcado, es un juego que cuenta con una base de palabras asociadas a programacion.");sleep(1);
				printf("\nSe puede optar por jugar de a dos, o contra el CPU.");sleep(1);
				printf("\nSolo se pueden ingresar datos alfabeticos.");sleep(1);
				printf("\nHay 10 intentos asociados a partes del cuerpo.");sleep(1);
				printf("\nSi elegiste jugar de a dos, el jugador 1 debera elegir la palabra y el jugador 2 debera adivinarla");sleep(1);
				printf("\nCada letra es una jugada.");sleep(1);
				printf("\n\nPuntaje: El puntaje es cincuenta menos el doble de la cantidad de partes descubiertas.\n\n");sleep(1);
				system("PAUSE");
				system("CLS");
				printf("=========================");
				printf("\n==CANTIDAD DE JUGADORES==");
				printf("\n==| 1v1(1) | 1vCPU(0) |==");
				printf("\n=========================\n\n");scanf("%d",&jugador);	
				if (jugador == 1)
				{
					Jugador1();
					system ("PAUSE");
					printf("=========================================================\n");
					printf("================| DESEA SEGUIR JUGANDO? |================\n");
					printf("===================| 1=SI |   | 0=NO |===================\n");
					printf("=========================================================\n\n");
					scanf ("%d", &volver);system("CLS");
					if (volver == 1)
					{
						error = 0;
					}	
					else
					{
						error = 1;
					}	
				}
				else
				if (jugador == 0)
				{
					CPU();
					system ("PAUSE");
					printf("=========================================================\n");
					printf("================| DESEA SEGUIR JUGANDO? |================\n");
					printf("===================| 1=SI |   | 0=NO |===================\n");
					printf("=========================================================\n\n");
					scanf ("%d", &volver);system("CLS");
				if (volver == 1)
				{
					error = 0;
				}
				else
				{
					error = 1;
				}
			}							
			}
			else
			{
				error = 0;
				printf("\nPor favor introduce un valor correcto.\n");system("PAUSE");system("CLS");					
			}
		}while (error == 0);
	}
	else
	{
		if (opcion>4 or opcion<1)
		{
			system("CLS");
			printf("=============================================\n");
			printf("========| INGRESE UNA OPCION VALIDA |========\n");
			printf("==========|OPCION INGRESADA:  %d  |==========\n",opcion);
			printf("=============================================\n");
			system("PAUSE");
			system("CLS");
		}
	}
	
	printf("=======================================================\n");
	printf("===============| DESEA VOLVER AL MENU? |===============\n");
	printf("================ | 1=SI |     | 0=NO | ================\n");
	printf("=======================================================\n\n");
	scanf ("%d", &cambiarjuego);
	system ("CLS");
	
	if (cambiarjuego == 1)
	{
		ejec = 1;
	}
	else
	{
		system("CLS");
		printf("========================================================================================================================\n");
		printf("==============================================| MUCHAS GRACIAS POR JUGAR |==============================================\n");
		printf("========================================================================================================================\n\n\n");
		sleep(1);
		printf("========================================================================================================================\n");
		printf("======================================================| CREDITOS |======================================================\n");
		printf("========================================================================================================================\n\n\n");
		sleep(1);
		printf("========================================================================================================================\n");
		printf("======================| LUCAS  PATRICIO  JUAREZ |========================| JACAS  LEILA  DAVID |========================\n");
		printf("========================================================================================================================\n\n\n");		
		break;
	}
	
	}while (ejec == 1);
}	
