#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<iostream>
#include<ctype.h>
#include<sstream>
#include<unistd.h>
#include<locale.h>

using namespace std;
int munyeco(int contador);
int Fix=1;

char compilador() // 1 // tilde
{
	Fix=1;
	int i = 0,win,intento,contador = 0,a=1;
	char AuxIngreso[3];
	char ingreso[500];
	char compilador [2];
	char compilador1 [2];
	char compilador2 [2];
	char compilador3 [2];
	char compilador4 [2];
	char compilador5 [2];
	char compilador6 [2];
	char compilador7 [2];
	char compilador8 [2];
	char compilador9 [2];
	char compiladorFinal [20] = {'C','O','M','P','I','L','A','D','O','R','\0'};
	compilador[0] = 'C';
	compilador[1] = '\0';
	compilador1[0] = 'O';
	compilador1[1] = '\0';
	compilador2[0] = 'M';
	compilador2[1] = '\0';
	compilador3[0] = 'P';
	compilador3[1] = '\0';
	compilador4[0] = 'I';
	compilador4[1] = '\0';
	compilador5[0] = 'L';
	compilador5[1] = '\0';
	compilador6[0] = 'A';
	compilador6[1] = '\0';
	compilador7[0] = 'D';
	compilador7[1] = '\0';	
	compilador8[0] = 'O';
	compilador8[1] = '\0';	
	compilador9[0] = 'R';
	compilador9[1] = '\0';	


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '_';
	palabraAdivinada[10] = '\0';
	
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,compilador) == 0)
		{
		    palabraAdivinada[0] = compilador[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,compilador1) == 0)
		{
			palabraAdivinada[1] = compilador1[0];
			palabraAdivinada[8] = compilador8[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,compilador2) == 0)
		{
			palabraAdivinada[2] = compilador2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,compilador3) == 0)
		{
			palabraAdivinada[3] = compilador3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,compilador4) == 0)
		{
			palabraAdivinada[4] = compilador4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,compilador5) == 0)
		{
			palabraAdivinada[5] = compilador5[0];	
		}
		else
		if (strcmp(AuxIngreso,compilador6) == 0)
		{
			palabraAdivinada[6] = compilador6[0];
		}
		else
		if (strcmp(AuxIngreso,compilador7) == 0)
		{
			palabraAdivinada[7] = compilador7[0];
		}
		else
		if (strcmp(AuxIngreso,compilador9) == 0)
		{
			palabraAdivinada[9] = compilador9[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,compiladorFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", compiladorFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

int munyeco(int contador) 
{
		if (contador == 0)
		{
			printf ("Estado del muñeco: cabeza -\n");
			
			return contador;
		}
		else
		if (contador == 1)
		{
			printf ("Estado del muñeco: cabeza - tronco\n");
			return contador;
		}
		else
		if (contador == 2)
		{
			printf ("Estado del muñeco: cabeza - tronco - brazo derecho\n");
			return contador;
		}
		if (contador == 3)
		{
			printf ("Estado del muñeco: cabeza - tronco - brazo derecho - brazo izquierdo\n");
			return contador;
		}
		else
		if (contador == 4)
		{
			printf ("Estado del muñeco: cabeza - tronco - brazo derecho - brazo izquierdo - pierna derecha\n");
			return contador;
		}
		else
		if (contador == 5)
		{
			printf ("Estado del muñeco: cabeza - tronco - brazo derecho - brazo izquierdo - pierna derecha - pierna izquierda\n");
			return contador;
		}
		else
		if (contador == 6)
		{
			printf ("Estado del muñeco: cabeza - tronco - brazo derecho - brazo izquierdo - pierna derecha - pierna izquierda - pie derecho\n");
			return contador;
		}
		else
		if (contador == 7)
		{
			printf ("Estado del muñeco: cabeza - tronco - brazo derecho - brazo izquierdo - pierna derecha - pierna izquierda - pie derecho - pie izquierdo\n");
			return contador;
		}
		if (contador <0 and contador>7)
		{
			system ("CLS");
 			return 0;
		}
}

char Entorno() // 2 // tilde
{
	
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Entorno [2];
	char Entorno1 [2];
	char Entorno2 [2];
	char Entorno3 [2];
	char Entorno4 [2];
	char Entorno5 [2];
	char Entorno6 [2];
	char EntornoFinal [20] = {'E','N','T','O','R','N','O','\0'};
	Entorno[0] = 'E';
	Entorno[1] = '\0';
	Entorno1[0] = 'N';
	Entorno1[1] = '\0';
	Entorno2[0] = 'T';
	Entorno2[1] = '\0';
	Entorno3[0] = 'O';
	Entorno3[1] = '\0';
	Entorno4[0] = 'R';
	Entorno4[1] = '\0';
	Entorno5[0] = 'N';
	Entorno5[1] = '\0';
	Entorno6[0] = 'O';
	Entorno6[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,Entorno) == 0)
		{
		    palabraAdivinada[0] = Entorno[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Entorno1) == 0)
		{
			palabraAdivinada[1] = Entorno1[0];
			palabraAdivinada[5] = Entorno5[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,Entorno2) == 0)
		{
			palabraAdivinada[2] = Entorno2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Entorno3) == 0)
		{
			palabraAdivinada[3] = Entorno3[0];
			palabraAdivinada[6] = Entorno6[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Entorno4) == 0)
		{
			palabraAdivinada[4] = Entorno4[0];
			i++;
		}	
		else
		{
			if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
		 	munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,EntornoFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", EntornoFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char computadora() // 3 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char computadora [2];
	char computadora1 [2];
	char computadora2 [2];
	char computadora3 [2];
	char computadora4 [2];
	char computadora5 [2];
	char computadora6 [2];
	char computadora7 [2];
	char computadora8 [2];
	char computadora9 [2];
	char computadora10 [2];
	char computadoraFinal [20] = {'C','O','M','P','U','T','A','D','O','R','A','\0'};
	computadora[0] = 'C';
	computadora[1] = '\0';
	computadora1[0] = 'O';
	computadora1[1] = '\0';
	computadora2[0] = 'M';
	computadora2[1] = '\0';
	computadora3[0] = 'P';
	computadora3[1] = '\0';
	computadora4[0] = 'U';
	computadora4[1] = '\0';
	computadora5[0] = 'T';
	computadora5[1] = '\0';
	computadora6[0] = 'A';
	computadora6[1] = '\0';
	computadora7[0] = 'D';
	computadora7[1] = '\0';	
	computadora8[0] = 'O';
	computadora8[1] = '\0';	
	computadora9[0] = 'R';
	computadora9[1] = '\0';	
	computadora10[0] = 'A';
	computadora10[1] = '\0';	
	


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '_';
	palabraAdivinada[10] = '_';
	palabraAdivinada[11] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,computadora) == 0)
		{
		    palabraAdivinada[0] = computadora[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,computadora1) == 0)
		{
			palabraAdivinada[1] = computadora1[0];
			palabraAdivinada[8] = computadora8[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,computadora2) == 0)
		{
			palabraAdivinada[2] = computadora2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,computadora3) == 0)
		{
			palabraAdivinada[3] = computadora3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,computadora4) == 0)
		{
			palabraAdivinada[4] = computadora4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,computadora5) == 0)
		{
			palabraAdivinada[5] = computadora5[0];	
		}
		else
		if (strcmp(AuxIngreso,computadora6) == 0)
		{
			palabraAdivinada[6] = computadora6[0];
			palabraAdivinada[10] = computadora10[0];
		}
		else
		if (strcmp(AuxIngreso,computadora7) == 0)
		{
			palabraAdivinada[7] = computadora7[0];
		}
		else
		if (strcmp(AuxIngreso,computadora9) == 0)
		{
			palabraAdivinada[9] = computadora9[0];
		}
		else
		{
			if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,computadoraFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", computadoraFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Estructura() // 4 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Estructura [2];
	char Estructura1 [2];
	char Estructura2 [2];
	char Estructura3 [2];
	char Estructura4 [2];
	char Estructura5 [2];
	char Estructura6 [2];
	char Estructura7 [2];
	char Estructura8 [2];
	char Estructura9 [2];
	char Estructura10 [2];
	char EstructuraFinal [20] = {'E','S','T','R','U','C','T','U','R','A','\0'};
	Estructura[0] = 'E';
	Estructura[1] = '\0';
	Estructura1[0] = 'S';
	Estructura1[1] = '\0';
	Estructura2[0] = 'T';
	Estructura2[1] = '\0';
	Estructura3[0] = 'R';
	Estructura3[1] = '\0';
	Estructura4[0] = 'U';
	Estructura4[1] = '\0';
	Estructura5[0] = 'C';
	Estructura5[1] = '\0';
	Estructura6[0] = 'T';
	Estructura6[1] = '\0';
	Estructura7[0] = 'U';
	Estructura7[1] = '\0';	
	Estructura8[0] = 'R';
	Estructura8[1] = '\0';	
	Estructura9[0] = 'A';
	Estructura9[1] = '\0';	


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '_';
	palabraAdivinada[10] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,Estructura) == 0)
		{
		    palabraAdivinada[0] = Estructura[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Estructura1) == 0)
		{
			palabraAdivinada[1] = Estructura1[0];
	
			i++;
		}
		else
		if (strcmp(AuxIngreso,Estructura2) == 0)
		{
			palabraAdivinada[2] = Estructura2[0];
			palabraAdivinada[6] = Estructura6[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Estructura3) == 0)
		{
			palabraAdivinada[3] = Estructura3[0];
			palabraAdivinada[8] = Estructura8[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Estructura4) == 0)
		{
			palabraAdivinada[4] = Estructura4[0];
			palabraAdivinada[7] = Estructura7[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,Estructura5) == 0)
		{
			palabraAdivinada[5] = Estructura5[0];	
		}
		else
		if (strcmp(AuxIngreso,Estructura9) == 0)
		{
			palabraAdivinada[9] = Estructura9[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,EstructuraFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", EstructuraFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Seleccion() // 5 //  tilde 
{
	Fix=1;
	
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Seleccion [2];
	char Seleccion1 [2];
	char Seleccion2 [2];
	char Seleccion3 [2];
	char Seleccion4 [2];
	char Seleccion5 [2];
	char Seleccion6 [2];
	char Seleccion7 [2];
	char Seleccion8 [2];
	char Seleccion9 [2];
	char Seleccion10 [2];
	char SeleccionFinal [20] = {'S','E','L','E','C','C','I','O','N','\0'};
	Seleccion[0] = 'S';
	Seleccion[1] = '\0';
	Seleccion1[0] = 'E';
	Seleccion1[1] = '\0';
	Seleccion2[0] = 'L';
	Seleccion2[1] = '\0';
	Seleccion3[0] = 'E';
	Seleccion3[1] = '\0';
	Seleccion4[0] = 'C';
	Seleccion4[1] = '\0';
	Seleccion5[0] = 'C';
	Seleccion5[1] = '\0';
	Seleccion6[0] = 'I';
	Seleccion6[1] = '\0';
	Seleccion7[0] = 'O';
	Seleccion7[1] = '\0';	
	Seleccion8[0] = 'N';
	Seleccion8[1] = '\0';	


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,Seleccion) == 0)
		{
		    palabraAdivinada[0] = Seleccion[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Seleccion1) == 0)
		{
			palabraAdivinada[1] = Seleccion1[0];
			palabraAdivinada[3] = Seleccion3[0];		
			i++;
		}
		else
		if (strcmp(AuxIngreso,Seleccion2) == 0)
		{
			palabraAdivinada[2] = Seleccion2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Seleccion4) == 0)
		{
			palabraAdivinada[4] = Seleccion4[0];
			palabraAdivinada[5] = Seleccion5[0];		
			i++;
		}	
		else
		if (strcmp(AuxIngreso,Seleccion6) == 0)
		{
			palabraAdivinada[6] = Seleccion6[0];
		}
		else
		if (strcmp(AuxIngreso,Seleccion7) == 0)
		{
			palabraAdivinada[7] = Seleccion7[0];
		}
		else
		if (strcmp(AuxIngreso,Seleccion8) == 0)
		{
			palabraAdivinada[8] = Seleccion8[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,SeleccionFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", SeleccionFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Repeticion() // 6 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Repeticion [2];
	char Repeticion1 [2];
	char Repeticion2 [2];
	char Repeticion3 [2];
	char Repeticion4 [2];
	char Repeticion5 [2];
	char Repeticion6 [2];
	char Repeticion7 [2];
	char Repeticion8 [2];
	char Repeticion9 [2];
	char Repeticion10 [2];
	char RepeticionFinal [20] = {'R','E','P','E','T','I','C','I','O','N','\0'};
	Repeticion[0] = 'R';
	Repeticion[1] = '\0';
	Repeticion1[0] = 'E';
	Repeticion1[1] = '\0';
	Repeticion2[0] = 'P';
	Repeticion2[1] = '\0';
	Repeticion3[0] = 'E';
	Repeticion3[1] = '\0';
	Repeticion4[0] = 'T';
	Repeticion4[1] = '\0';
	Repeticion5[0] = 'I';
	Repeticion5[1] = '\0';
	Repeticion6[0] = 'C';
	Repeticion6[1] = '\0';
	Repeticion7[0] = 'I';
	Repeticion7[1] = '\0';	
	Repeticion8[0] = 'O';
	Repeticion8[1] = '\0';	
	Repeticion9[0] = 'N';
	Repeticion9[1] = '\0';	


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '_';
	palabraAdivinada[10] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,Repeticion) == 0)
		{
		    palabraAdivinada[0] = Repeticion[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Repeticion1) == 0)
		{
			palabraAdivinada[1] = Repeticion1[0];
			palabraAdivinada[3] = Repeticion3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Repeticion2) == 0)
		{
			palabraAdivinada[2] = Repeticion2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Repeticion4) == 0)
		{
			palabraAdivinada[4] = Repeticion4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,Repeticion5) == 0)
		{
			palabraAdivinada[5] = Repeticion5[0];
			palabraAdivinada[7] = Repeticion7[0];	
		}
		else
		if (strcmp(AuxIngreso,Repeticion6) == 0)
		{
			palabraAdivinada[6] = Repeticion6[0];
		}
		else
		if (strcmp(AuxIngreso,Repeticion8) == 0)
		{		
			palabraAdivinada[8] = Repeticion8[0];	
		}
		else
		if (strcmp(AuxIngreso,Repeticion9) == 0)
		{
			palabraAdivinada[9] = Repeticion9[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,RepeticionFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", RepeticionFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Directiva() // 7 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Directiva [2];
	char Directiva1 [2];
	char Directiva2 [2];
	char Directiva3 [2];
	char Directiva4 [2];
	char Directiva5 [2];
	char Directiva6 [2];
	char Directiva7 [2];
	char Directiva8 [2];
	char Directiva9 [2];
	char Directiva10 [2];
	char DirectivaFinal [20] = {'D','I','R','E','C','T','I','V','A','\0'};
	Directiva[0] = 'D';
	Directiva[1] = '\0';
	Directiva1[0] = 'I';
	Directiva1[1] = '\0';
	Directiva2[0] = 'R';
	Directiva2[1] = '\0';
	Directiva3[0] = 'E';
	Directiva3[1] = '\0';
	Directiva4[0] = 'C';
	Directiva4[1] = '\0';
	Directiva5[0] = 'T';
	Directiva5[1] = '\0';
	Directiva6[0] = 'I';
	Directiva6[1] = '\0';
	Directiva7[0] = 'V';
	Directiva7[1] = '\0';	
	Directiva8[0] = 'A';
	Directiva8[1] = '\0';	



	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,Directiva) == 0)
		{
		    palabraAdivinada[0] = Directiva[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Directiva1) == 0)
		{
			palabraAdivinada[1] = Directiva1[0];
			palabraAdivinada[6] = Directiva6[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Directiva2) == 0)
		{
			palabraAdivinada[2] = Directiva2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Directiva3) == 0)
		{
			palabraAdivinada[3] = Directiva3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Directiva4) == 0)
		{
			palabraAdivinada[4] = Directiva4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,Directiva5) == 0)
		{
			palabraAdivinada[5] = Directiva5[0];	
		}
		else
		if (strcmp(AuxIngreso,Directiva7) == 0)
		{
			palabraAdivinada[7] = Directiva7[0];
		}
		else
		if (strcmp(AuxIngreso,Directiva8) == 0)
		{
			palabraAdivinada[8] = Directiva8[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,DirectivaFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", DirectivaFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}
char Algoritmo() // 8 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Algoritmo [2];
	char Algoritmo1 [2];
	char Algoritmo2 [2];
	char Algoritmo3 [2];
	char Algoritmo4 [2];
	char Algoritmo5 [2];
	char Algoritmo6 [2];
	char Algoritmo7 [2];
	char Algoritmo8 [2];
	char Algoritmo9 [2];
	char Algoritmo10 [2];
	char AlgoritmoFinal [20] = {'A','L','G','O','R','I','T','M','O','\0'};
	Algoritmo[0] = 'A';
	Algoritmo[1] = '\0';
	Algoritmo1[0] = 'L';
	Algoritmo1[1] = '\0';
	Algoritmo2[0] = 'G';
	Algoritmo2[1] = '\0';
	Algoritmo3[0] = 'O';
	Algoritmo3[1] = '\0';
	Algoritmo4[0] = 'R';
	Algoritmo4[1] = '\0';
	Algoritmo5[0] = 'I';
	Algoritmo5[1] = '\0';
	Algoritmo6[0] = 'T';
	Algoritmo6[1] = '\0';
	Algoritmo7[0] = 'M';
	Algoritmo7[1] = '\0';	
	Algoritmo8[0] = 'O';
	Algoritmo8[1] = '\0';	



	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,Algoritmo) == 0)
		{
		    palabraAdivinada[0] = Algoritmo[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Algoritmo1) == 0)
		{
			palabraAdivinada[1] = Algoritmo1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Algoritmo2) == 0)
		{
			palabraAdivinada[2] = Algoritmo2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Algoritmo3) == 0)
		{
			palabraAdivinada[3] = Algoritmo3[0];
			palabraAdivinada[8] = Algoritmo8[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,Algoritmo4) == 0)
		{
			palabraAdivinada[4] = Algoritmo4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,Algoritmo5) == 0)
		{
			palabraAdivinada[5] = Algoritmo5[0];	
		}
		else
		if (strcmp(AuxIngreso,Algoritmo6) == 0)
		{
			palabraAdivinada[6] = Algoritmo6[0];
		}
		else
		if (strcmp(AuxIngreso,Algoritmo7) == 0)
		{
			palabraAdivinada[7] = Algoritmo7[0];
		}
		else
		{

		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,AlgoritmoFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", AlgoritmoFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}
char Program() // 9 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Program [2];
	char Program1 [2];
	char Program2 [2];
	char Program3 [2];
	char Program4 [2];
	char Program5 [2];
	char Program6 [2];
	char Program7 [2];
	char Program8 [2];
	char Program9 [2];
	char Program10 [2];
	char ProgramFinal [20] = {'P','R','O','G','R','A','M','\0'};
	Program[0] = 'P';
	Program[1] = '\0';
	Program1[0] = 'R';
	Program1[1] = '\0';
	Program2[0] = 'O';
	Program2[1] = '\0';
	Program3[0] = 'G';
	Program3[1] = '\0';
	Program4[0] = 'R';
	Program4[1] = '\0';
	Program5[0] = 'A';
	Program5[1] = '\0';
	Program6[0] = 'M';
	Program6[1] = '\0';



	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,Program) == 0)
		{
		    palabraAdivinada[0] = Program[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Program1) == 0)
		{
			palabraAdivinada[1] = Program1[0];
			palabraAdivinada[4] = Program4[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Program2) == 0)
		{
			palabraAdivinada[2] = Program2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Program3) == 0)
		{
			palabraAdivinada[3] = Program3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Program5) == 0)
		{
			palabraAdivinada[5] = Program5[0];	
		}
		else
		if (strcmp(AuxIngreso,Program6) == 0)
		{
			palabraAdivinada[6] = Program6[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,ProgramFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", ProgramFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}
char Ejecucion() // 10 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Ejecucion [2];
	char Ejecucion1 [2];
	char Ejecucion2 [2];
	char Ejecucion3 [2];
	char Ejecucion4 [2];
	char Ejecucion5 [2];
	char Ejecucion6 [2];
	char Ejecucion7 [2];
	char Ejecucion8 [2];
	char Ejecucion9 [2];
	char Ejecucion10 [2];
	char EjecucionFinal [20] = {'E','J','E','C','U','C','I','O','N','\0'};
	Ejecucion[0] = 'E';
	Ejecucion[1] = '\0';
	Ejecucion1[0] = 'J';
	Ejecucion1[1] = '\0';
	Ejecucion2[0] = 'E';
	Ejecucion2[1] = '\0';
	Ejecucion3[0] = 'C';
	Ejecucion3[1] = '\0';
	Ejecucion4[0] = 'U';
	Ejecucion4[1] = '\0';
	Ejecucion5[0] = 'C';
	Ejecucion5[1] = '\0';
	Ejecucion6[0] = 'I';
	Ejecucion6[1] = '\0';
	Ejecucion7[0] = 'O';
	Ejecucion7[1] = '\0';
	Ejecucion8[0] = 'N';
	Ejecucion8[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '_';
	palabraAdivinada[8] = '_';
	palabraAdivinada[9] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,Ejecucion) == 0)
		{
		    palabraAdivinada[0] = Ejecucion[0];
		    palabraAdivinada[2] = Ejecucion2[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Ejecucion1) == 0)
		{
			palabraAdivinada[1] = Ejecucion1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,Ejecucion3) == 0)
		{
			palabraAdivinada[3] = Ejecucion3[0];
			palabraAdivinada[5] = Ejecucion5[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,Ejecucion4) == 0)
		{
			palabraAdivinada[4] = Ejecucion4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,Ejecucion6) == 0)
		{
			palabraAdivinada[6] = Ejecucion6[0];
		}
		else
		if (strcmp(AuxIngreso,Ejecucion7) == 0)
		{
			palabraAdivinada[7] = Ejecucion7[0];
		}
		else
		if (strcmp(AuxIngreso,Ejecucion8) == 0)
		{
			palabraAdivinada[8] = Ejecucion8[0];
		}
		else
		if (strcmp(AuxIngreso,Ejecucion9) == 0)
		{
			palabraAdivinada[9] = Ejecucion9[0];
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,EjecucionFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", EjecucionFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}
char Int() // 11 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char Int [2];
	char Int1 [2];
	char Int2 [2];
	char IntFinal [20] = {'I','N','T','\0'};
	Int[0] = 'I';
	Int[1] = '\0';
	Int1[0] = 'N';
	Int1[1] = '\0';
	Int2[0] = 'T';
	Int2[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,Int) == 0)
		{
		    palabraAdivinada[0] = Int[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,Int1) == 0)
		{
			palabraAdivinada[1] = Int1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,Int2) == 0)
		{
			palabraAdivinada[2] = Int2[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,IntFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", IntFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Float() // 12 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char FLOAT [2];
	char FLOAT1 [2];
	char FLOAT2 [2];
	char FLOAT3 [2];
	char FLOAT4 [2];
	char FLOATFinal [20] = {'F','L','O','A','T','\0'};
	FLOAT[0] = 'F';
	FLOAT[1] = '\0';
	FLOAT1[0] = 'L';
	FLOAT1[1] = '\0';
	FLOAT2[0] = 'O';
	FLOAT2[1] = '\0';
	FLOAT3[0] = 'A';
	FLOAT3[1] = '\0';
	FLOAT4[0] = 'T';
	FLOAT4[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '\0';
	
	do
	{
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,FLOAT) == 0)
		{
		    palabraAdivinada[0] = FLOAT[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,FLOAT1) == 0)
		{
			palabraAdivinada[1] = FLOAT1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,FLOAT2) == 0)
		{
			palabraAdivinada[2] = FLOAT2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,FLOAT3) == 0)
		{
			palabraAdivinada[3] = FLOAT3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,FLOAT4) == 0)
		{
			palabraAdivinada[4] = FLOAT4[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
		}
	if(strcmp(palabraAdivinada,FLOATFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", FLOATFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Char() // 13 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char CHAR [2];
	char CHAR1 [2];
	char CHAR2 [2];
	char CHAR3 [2];
	char CHARFinal [20] = {'C','H','A','R','\0'};
	CHAR[0] = 'C';
	CHAR[1] = '\0';
	CHAR1[0] = 'H';
	CHAR1[1] = '\0';
	CHAR2[0] = 'A';
	CHAR2[1] = '\0';
	CHAR3[0] = 'R';
	CHAR3[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,CHAR) == 0)
		{
		    palabraAdivinada[0] = CHAR[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,CHAR1) == 0)
		{
			palabraAdivinada[1] = CHAR1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,CHAR2) == 0)
		{
			palabraAdivinada[2] = CHAR2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,CHAR3) == 0)
		{
			palabraAdivinada[3] = CHAR3[0];
			i++;
		}
			
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,CHARFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", CHARFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Double() // 14 // tilde
{
	
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char DOUBLE [2];
	char DOUBLE1 [2];
	char DOUBLE2 [2];
	char DOUBLE3 [2];
	char DOUBLE4 [2];
	char DOUBLE5 [2];
	char DOUBLE6 [2];
	char DOUBLEFinal [20] = {'D','O','U','B','L','E','\0'};
	DOUBLE[0] = 'D';
	DOUBLE[1] = '\0';
	DOUBLE1[0] = 'O';
	DOUBLE1[1] = '\0';
	DOUBLE2[0] = 'U';
	DOUBLE2[1] = '\0';
	DOUBLE3[0] = 'B';
	DOUBLE3[1] = '\0';
	DOUBLE4[0] = 'L';
	DOUBLE4[1] = '\0';
	DOUBLE5[0] = 'E';
	DOUBLE5[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,DOUBLE) == 0)
		{
		    palabraAdivinada[0] = DOUBLE[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,DOUBLE1) == 0)
		{
			palabraAdivinada[1] = DOUBLE1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,DOUBLE2) == 0)
		{
			palabraAdivinada[2] = DOUBLE2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,DOUBLE3) == 0)
		{
			palabraAdivinada[3] = DOUBLE3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,DOUBLE4) == 0)
		{
			palabraAdivinada[4] = DOUBLE4[0];
			i++;
		}	
		else
		if (strcmp(AuxIngreso,DOUBLE5) == 0)
		{
			palabraAdivinada[5] = DOUBLE5[0];
			i++;
		}	
		else		
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,DOUBLEFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", DOUBLEFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Long() // 15 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador;
	char ingreso[500];
	char AuxIngreso[3];
	char LONG [2];
	char LONG1 [2];
	char LONG2 [2];
	char LONG3 [2];
	char LONG4 [2];
	char LONG5 [2];
	char LONG6 [2];
	char LONG7 [2];
	char LONG8 [2];
	char LONG9 [2];
	char LONG10 [2];
	char LONGFinal [20] = {'L','O','N','G','\0'};
	LONG[0] = 'L';
	LONG[1] = '\0';
	LONG1[0] = 'O';
	LONG1[1] = '\0';
	LONG2[0] = 'N';
	LONG2[1] = '\0';
	LONG3[0] = 'G';
	LONG3[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[11] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d=========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,LONG) == 0)
		{
		    palabraAdivinada[0] = LONG[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,LONG1) == 0)
		{
			palabraAdivinada[1] = LONG1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,LONG2) == 0)
		{
			palabraAdivinada[2] = LONG2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,LONG3) == 0)
		{
			palabraAdivinada[3] = LONG3[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,LONGFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", LONGFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
	}
	}while( win!= 1 && contador!=8);
	
}

char If() // 16 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char IF [2];
	char IF1 [2];
	char IF2 [2];
	char IF3 [2];
	char IF4 [2];
	char IF5 [2];
	char IF6 [2];
	char IFFinal [20] = {'I','F','\0'};
	IF[0] = 'I';
	IF[1] = '\0';
	IF1[0] = 'F';
	IF1[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		
		printf("\n\n");
				
		if (strcmp(AuxIngreso,IF) == 0)
		{
		    palabraAdivinada[0] = IF[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,IF1) == 0)
		{
			palabraAdivinada[1] = IF1[0];
			i++;
		}	
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,IFFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", IFFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Else() // 17 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char ELSE [2];
	char ELSE1 [2];
	char ELSE2 [2];
	char ELSE3 [2];
	char ELSEFinal [20] = {'E','L','S','E','\0'};
	ELSE[0] = 'E';
	ELSE[1] = '\0';
	ELSE1[0] = 'L';
	ELSE1[1] = '\0';
	ELSE2[0] = 'S';
	ELSE2[1] = '\0';
	ELSE3[0] = 'E';
	ELSE3[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,ELSE) == 0)
		{
		    palabraAdivinada[0] = ELSE[0];
		    palabraAdivinada[3] = ELSE3[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,ELSE1) == 0)
		{
			palabraAdivinada[1] = ELSE1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,ELSE2) == 0)
		{
			palabraAdivinada[2] = ELSE2[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,ELSEFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", ELSEFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char For() // 18 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char FOR [2];
	char FOR1 [2];
	char FOR2 [2];
	char FORFinal [20] = {'F','O','R','\0'};
	FOR[0] = 'F';
	FOR[1] = '\0';
	FOR1[0] = 'O';
	FOR1[1] = '\0';
	FOR2[0] = 'R';
	FOR2[1] = '\0';
	
	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,FOR) == 0)
		{
		    palabraAdivinada[0] = FOR[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,FOR1) == 0)
		{
			palabraAdivinada[1] = FOR1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,FOR2) == 0)
		{
			palabraAdivinada[2] = FOR2[0];
			i++;
		}	
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,FORFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", FORFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char While() // 19 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char WHILE [2];
	char WHILE1 [2];
	char WHILE2 [2];
	char WHILE3 [2];
	char WHILE4 [2];
	char WHILEFinal [20] = {'W','H','I','L','E','\0'};
	WHILE[0] = 'W';
	WHILE[1] = '\0';
	WHILE1[0] = 'H';
	WHILE1[1] = '\0';
	WHILE2[0] = 'I';
	WHILE2[1] = '\0';
	WHILE3[0] = 'L';
	WHILE3[1] = '\0';
	WHILE4[0] = 'E';
	WHILE4[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,WHILE) == 0)
		{
		    palabraAdivinada[0] = WHILE[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,WHILE1) == 0)
		{
			palabraAdivinada[1] = WHILE1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,WHILE2) == 0)
		{
			palabraAdivinada[2] = WHILE2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,WHILE3) == 0)
		{
			palabraAdivinada[3] = WHILE3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,WHILE4) == 0)
		{
			palabraAdivinada[4] = WHILE4[0];
			i++;
		}	
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,WHILEFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", WHILEFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Return() //20 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char RETURN [2];
	char RETURN1 [2];
	char RETURN2 [2];
	char RETURN3 [2];
	char RETURN4 [2];
	char RETURN5 [2];
	char RETURNFinal [20] = {'R','E','T','U','R','N','\0'};
	RETURN[0] = 'R';
	RETURN[1] = '\0';
	RETURN1[0] = 'E';
	RETURN1[1] = '\0';
	RETURN2[0] = 'T';
	RETURN2[1] = '\0';
	RETURN3[0] = 'U';
	RETURN3[1] = '\0';
	RETURN4[0] = 'R';
	RETURN4[1] = '\0';
	RETURN5[0] = 'N';
	RETURN5[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		
		if (strcmp(AuxIngreso,RETURN) == 0)
		{
		    palabraAdivinada[0] = RETURN[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,RETURN1) == 0)
		{
			palabraAdivinada[1] = RETURN1[0];
			palabraAdivinada[4] = RETURN4[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,RETURN2) == 0)
		{
			palabraAdivinada[2] = RETURN2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,RETURN3) == 0)
		{
			palabraAdivinada[3] = RETURN3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,RETURN5) == 0)
		{
			palabraAdivinada[5] = RETURN5[0];
			i++;
		}	
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,RETURNFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", RETURNFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Break() // 21 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador;
	char ingreso[500];
	char AuxIngreso[3];
	char BREAK [2];
	char BREAK1 [2];
	char BREAK2 [2];
	char BREAK3 [2];
	char BREAK4 [2];
	char BREAK5 [2];
	char BREAK6 [2];
	char BREAK7 [2];
	char BREAK8 [2];
	char BREAK9 [2];
	char BREAK10 [2];
	char BREAKFinal [20] = {'B','R','E','A','K','\0'};
	BREAK[0] = 'B';
	BREAK[1] = '\0';
	BREAK1[0] = 'R';
	BREAK1[1] = '\0';
	BREAK2[0] = 'E';
	BREAK2[1] = '\0';
	BREAK3[0] = 'A';
	BREAK3[1] = '\0';
	BREAK4[0] = 'K';
	BREAK4[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d=========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,BREAK) == 0)
		{
		    palabraAdivinada[0] = BREAK[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,BREAK1) == 0)
		{
			palabraAdivinada[1] = BREAK1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,BREAK2) == 0)
		{
			palabraAdivinada[2] = BREAK2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,BREAK3) == 0)
		{
			palabraAdivinada[3] = BREAK3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,BREAK4) == 0)
		{
			palabraAdivinada[4] = BREAK4[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,BREAKFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", BREAKFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
	}
	}while( win!= 1 && contador!=8);
	
}

char Switch() // 22 //tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char SWITCH [2];
	char SWITCH1 [2];
	char SWITCH2 [2];
	char SWITCH3 [2];
	char SWITCH4 [2];
	char SWITCH5 [2];
	char SWITCH6 [2];
	char SWITCHFinal [20] = {'S','W','I','T','C','H','\0'};
	SWITCH[0] = 'S';
	SWITCH[1] = '\0';
	SWITCH1[0] = 'W';
	SWITCH1[1] = '\0';
	SWITCH2[0] = 'I';
	SWITCH2[1] = '\0';
	SWITCH3[0] = 'T';
	SWITCH3[1] = '\0';
	SWITCH4[0] = 'C';
	SWITCH4[1] = '\0';
	SWITCH5[0] = 'H';
	SWITCH5[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		
		if (strcmp(AuxIngreso,SWITCH) == 0)
		{
		    palabraAdivinada[0] = SWITCH[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,SWITCH1) == 0)
		{
			palabraAdivinada[1] = SWITCH1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,SWITCH2) == 0)
		{
			palabraAdivinada[2] = SWITCH2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,SWITCH3) == 0)
		{
			palabraAdivinada[3] = SWITCH3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,SWITCH4) == 0)
		{
			palabraAdivinada[4] = SWITCH4[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,SWITCH5) == 0)
		{
			palabraAdivinada[5] = SWITCH5[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,SWITCHFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", SWITCHFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Case() // 23 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char CASE [2];
	char CASE1 [2];
	char CASE2 [2];
	char CASE3 [2];
	char CASE4 [2];
	char CASE5 [2];
	char CASE6 [2];
	char CASEFinal [20] = {'C','A','S','E','\0'};
	CASE[0] = 'C';
	CASE[1] = '\0';
	CASE1[0] = 'A';
	CASE1[1] = '\0';
	CASE2[0] = 'S';
	CASE2[1] = '\0';
	CASE3[0] = 'E';
	CASE3[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,CASE) == 0)
		{
		    palabraAdivinada[0] = CASE[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,CASE1) == 0)
		{
			palabraAdivinada[1] = CASE1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,CASE2) == 0)
		{
			palabraAdivinada[2] = CASE2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,CASE3) == 0)
		{
			palabraAdivinada[3] = CASE3[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,CASEFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", CASEFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Main() // 24 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char MAIN [2];
	char MAIN1 [2];
	char MAIN2 [2];
	char MAIN3 [2];
	char MAINFinal [20] = {'M','A','I','N','\0'};
	MAIN[0] = 'M';
	MAIN[1] = '\0';
	MAIN1[0] = 'A';
	MAIN1[1] = '\0';
	MAIN2[0] = 'I';
	MAIN2[1] = '\0';
	MAIN3[0] = 'N';
	MAIN3[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,MAIN) == 0)
		{
		    palabraAdivinada[0] = MAIN[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,MAIN1) == 0)
		{
			palabraAdivinada[1] = MAIN1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,MAIN2) == 0)
		{
			palabraAdivinada[2] = MAIN2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,MAIN3) == 0)
		{
			palabraAdivinada[3] = MAIN3[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}            
	if(strcmp(palabraAdivinada,MAINFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", MAINFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Include() // 25 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char INCLUDE [2];
	char INCLUDE1 [2];
	char INCLUDE2 [2];
	char INCLUDE3 [2];
	char INCLUDE4 [2];
	char INCLUDE5 [2];
	char INCLUDE6 [2];
	char INCLUDEFinal [20] = {'I','N','C','L','U','D','E','\0'};
	INCLUDE[0] = 'I';
	INCLUDE[1] = '\0';
	INCLUDE1[0] = 'N';
	INCLUDE1[1] = '\0';
	INCLUDE2[0] = 'C';
	INCLUDE2[1] = '\0';
	INCLUDE3[0] = 'L';
	INCLUDE3[1] = '\0';
	INCLUDE4[0] = 'U';
	INCLUDE4[1] = '\0';
	INCLUDE5[0] = 'D';
	INCLUDE5[1] = '\0';
	INCLUDE6[0] = 'E';
	INCLUDE6[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '_';
	palabraAdivinada[7] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,INCLUDE) == 0)
		{
		    palabraAdivinada[0] = INCLUDE[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,INCLUDE1) == 0)
		{
			palabraAdivinada[1] = INCLUDE1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,INCLUDE2) == 0)
		{
			palabraAdivinada[2] = INCLUDE2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,INCLUDE3) == 0)
		{
			palabraAdivinada[3] = INCLUDE3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,INCLUDE4) == 0)
		{
			palabraAdivinada[4] = INCLUDE4[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,INCLUDE5) == 0)
		{
			palabraAdivinada[5] = INCLUDE5[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,INCLUDE6) == 0)
		{
			palabraAdivinada[6] = INCLUDE6[0];
			i++;
		}	
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,INCLUDEFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", INCLUDEFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Define() // 26 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char DEFINE [2];
	char DEFINE1 [2];
	char DEFINE2 [2];
	char DEFINE3 [2];
	char DEFINE4 [2];
	char DEFINE5 [2];
	char DEFINE6 [2];
	char DEFINEFinal [20] = {'D','E','F','I','N','E','\0'};
	DEFINE[0] = 'D';
	DEFINE[1] = '\0';
	DEFINE1[0] = 'E';
	DEFINE1[1] = '\0';
	DEFINE2[0] = 'F';
	DEFINE2[1] = '\0';
	DEFINE3[0] = 'I';
	DEFINE3[1] = '\0';
	DEFINE4[0] = 'N';
	DEFINE4[1] = '\0';
	DEFINE5[0] = 'E';
	DEFINE5[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
		
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,DEFINE) == 0)
		{
		    palabraAdivinada[0] = DEFINE[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,DEFINE1) == 0)
		{
			palabraAdivinada[1] = DEFINE1[0];
			palabraAdivinada[5] = DEFINE5[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,DEFINE2) == 0)
		{
			palabraAdivinada[2] = DEFINE2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,DEFINE3) == 0)
		{
			palabraAdivinada[3] = DEFINE3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,DEFINE4) == 0)
		{
			palabraAdivinada[4] = DEFINE4[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,DEFINEFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", DEFINEFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Struct() // 27 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char STRUCT [2];
	char STRUCT1 [2];
	char STRUCT2 [2];
	char STRUCT3 [2];
	char STRUCT4 [2];
	char STRUCT5 [2];
	char STRUCT6 [2];
	char STRUCTFinal [20] = {'S','T','R','U','C','T','\0'};
	STRUCT[0] = 'S';
	STRUCT[1] = '\0';
	STRUCT1[0] = 'T';
	STRUCT1[1] = '\0';
	STRUCT2[0] = 'R';
	STRUCT2[1] = '\0';
	STRUCT3[0] = 'U';
	STRUCT3[1] = '\0';
	STRUCT4[0] = 'C';
	STRUCT4[1] = '\0';
	STRUCT5[0] = 'T';
	STRUCT5[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '_';
	palabraAdivinada[5] = '_';
	palabraAdivinada[6] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
		
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,STRUCT) == 0)
		{
		    palabraAdivinada[0] = STRUCT[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,STRUCT1) == 0)
		{
			palabraAdivinada[1] = STRUCT1[0];
			palabraAdivinada[5] = STRUCT5[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,STRUCT2) == 0)
		{
			palabraAdivinada[2] = STRUCT2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,STRUCT3) == 0)
		{
			palabraAdivinada[3] = STRUCT3[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,STRUCT4) == 0)
		{
			palabraAdivinada[4] = STRUCT4[0];
			i++;
		}	
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,STRUCTFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", STRUCTFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Cin() // 28 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char CIN [2];
	char CIN1 [2];
	char CIN2 [2];
	char CINFinal [20] = {'C','I','N','\0'};
	CIN[0] = 'C';
	CIN[1] = '\0';
	CIN1[0] = 'I';
	CIN1[1] = '\0';
	CIN2[0] = 'N';
	CIN2[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,CIN) == 0)
		{
		    palabraAdivinada[0] = CIN[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,CIN1) == 0)
		{
			palabraAdivinada[1] = CIN1[0];	
			i++;
		}
		else
		if (strcmp(AuxIngreso,CIN2) == 0)
		{
			palabraAdivinada[2] = CIN2[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,CINFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", CINFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Cout() // 29 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char COUT [2];
	char COUT1 [2];
	char COUT2 [2];
	char COUT3 [2];
	char COUTFinal [20] = {'C','O','U','T','\0'};
	COUT[0] = 'C';
	COUT[1] = '\0';
	COUT1[0] = 'O';
	COUT1[1] = '\0';
	COUT2[0] = 'U';
	COUT2[1] = '\0';
	COUT3[0] = 'T';
	COUT3[1] = '\0';

	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		
		if (strcmp(AuxIngreso,COUT) == 0)
		{
		    palabraAdivinada[0] = COUT[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,COUT1) == 0)
		{
			palabraAdivinada[1] = COUT1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,COUT2) == 0)
		{
			palabraAdivinada[2] = COUT2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,COUT3) == 0)
		{
			palabraAdivinada[3] = COUT3[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,COUTFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", COUTFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}

char Endl() // 30 // tilde
{
	Fix=1;
	int i = 0,win,a,intento,contador = 0;
	char ingreso[500];
	char AuxIngreso[3];
	char ENDL [2];
	char ENDL1 [2];
	char ENDL2 [2];
	char ENDL3 [2];
	char ENDL4 [2];
	char ENDL5 [2];
	char ENDL6 [2];
	char ENDLFinal [20] = {'E','N','D','L','\0'};
	ENDL[0] = 'E';
	ENDL[1] = '\0';
	ENDL1[0] = 'N';
	ENDL1[1] = '\0';
	ENDL2[0] = 'D';
	ENDL2[1] = '\0';
	ENDL3[0] = 'L';
	ENDL3[1] = '\0';


	char palabraAdivinada[11];
	
	palabraAdivinada[0] = '_';
	palabraAdivinada[1] = '_';
	palabraAdivinada[2] = '_';
	palabraAdivinada[3] = '_';
	palabraAdivinada[4] = '\0';
	
	do
	{	
		printf("Palabra a adivinar: %s \n\n", palabraAdivinada);
		printf("==============================\n");
		printf("===========JUGADA #%d==========\n", i+2);
		printf("==============================\n\n");
		printf("===============================\n");
		printf("=======Ingrese una letra=======\n");
		printf("===============================\n");
		printf("============================> ");
		cin.getline (ingreso,500);
	
		if (Fix == 1)
		{
			Fix = 5;system("CLS");
		}
		
		if (strlen(ingreso) == 1 )
		{
		    strupr (ingreso);
		    AuxIngreso[0] = ingreso[0];
			AuxIngreso[1] = '\0';
		}
		else
		{
			if (Fix == 5)
			{
			   	Fix =7 ;system("CLS");
			}
			else printf ("\n\nNo se puede ingresar mas de un caracter, intentelo nuevamente....\n");i--;
			
		}
		printf("\n\n");
		
		if (strcmp(AuxIngreso,ENDL) == 0)
		{
		    palabraAdivinada[0] = ENDL[0];
		 	i++;
		}
		else
		if (strcmp(AuxIngreso,ENDL1) == 0)
		{
			palabraAdivinada[1] = ENDL1[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,ENDL2) == 0)
		{
			palabraAdivinada[2] = ENDL2[0];
			i++;
		}
		else
		if (strcmp(AuxIngreso,ENDL3) == 0)
		{
			palabraAdivinada[3] = ENDL3[0];
			i++;
		}
		else
		{
		 	if (Fix == 7)
		 	{
		 		Fix=8;system("CLS");
			}
			else
			{
			munyeco(contador);
			contador++;
					
			i++;
			}
			if (contador == 8)
			{
				printf ("\n\n\nPerdiste!! Tu puntaje es 0\n\n\n\n\n\n ");
			}
			
		}
	if(strcmp(palabraAdivinada,ENDLFinal) == 0)
	{
		printf ("Palabra a adivinar: %s \n", ENDLFinal);
		printf ("Ganaste!!! Tu puntaje es %d \n",(50-(2*contador)));
		win=1;
		
	}
	}while( win!= 1 && contador!=8);
	
}
