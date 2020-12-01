#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<iostream>
#include<time.h>
#include"Alib/librahorcado.h"

using namespace std;

void Jugador1()
{
	int peleg=0,error=1;
	char p_elegida[20];
	system("CLS");
	printf("=============================");
	printf("\n==ES EL TURNO DEL JUGADOR 1==");
	printf("\n=============================\n\n");
	system("PAUSE");
	system("CLS");
	printf("\n========================================");
	printf("\n====ELIGE UNA PALABRA DEL DIRECTORIO====");
	printf("\n========================================");
	printf("\n======PAG 1/2======|=======PAG 2/2======");
	printf("\n===01.Compilador   |  ===16.If       ===");
	printf("\n===02.Entorno      |  ===17.Else     ===");
	printf("\n===03.Computadora  |  ===18.For      ===");
	printf("\n===04.Estructura   |  ===19.While    ===");
	printf("\n===05.Seleccion    |  ===20.Return   ===");
	printf("\n===06.Repeticion   |  ===21.Break    ===");
	printf("\n===07.Directiva    |  ===22.Switch   ===");
	printf("\n===08.Algoritmo    |  ===23.Case     ===");
	printf("\n===09.Program      |  ===24.Main     ===");
	printf("\n===10.Ejecucion    |  ===25.Include   ===");
	printf("\n===11.Int          |  ===26.Define   ===");
	printf("\n===12.Float        |  ===27.Struct   ===");
	printf("\n===13.Char         |  ===28.Cin      ===");
	printf("\n===14.Double       |  ===29.Cout     ===");
	printf("\n===15.Long         |  ===30.Endl     ===");
	printf("\n========================================\n\n");
	
	cin>>peleg;
	system("CLS");
	
	if(peleg==1)
	{
		compilador();
	}
	else
	if(peleg==2)
	{
		Entorno();
	}
	else
	if(peleg==3)
	{
		computadora();
	}
	else
	if(peleg==4)
	{
		Estructura();
	}
	else
	if(peleg==5)
	{
		Seleccion();
	}
	else
	if(peleg==6)
	{
		Repeticion();
	}
	else
	if(peleg==7)
	{
		Directiva();
	}
	else
	if(peleg==8)
	{
		Algoritmo();
	}
	else
	if(peleg==9)
	{
		Program();
	}
	else
	if(peleg==10)
	{
		Ejecucion();
	}
	else
	if(peleg==11)
	{
		Int();
	}
	else
	if(peleg==12)
	{
		Float();
	}
	else
	if(peleg==13)
	{
		Char();
	}
	else
	if(peleg==14)
	{
		Double();
	}
	else
	if(peleg==15)
	{
		Long();
	}
	else
	if(peleg==16)
	{
		If();
	}
	else
	if(peleg==17)
	{
		Else();
	}
	else
	if(peleg==18)
	{
		For();
	}
	else
	if(peleg==19)
	{
		While();
	}
	if(peleg==20)
	{
		Return();
	}
	else
	if(peleg==21)
	{
		Break();
	}
	else
	if(peleg==22)
	{
		Switch();
	}
	else
	if(peleg==23)
	{
		Case();
	}
	else
	if(peleg==24)
	{
		Main();
	}
	else
	if(peleg==25)
	{
		Include();
	}
	else
	if(peleg==26)
	{
		Define();
	}
	else
	if(peleg==27)
	{
		Struct();
	}
	else
	if(peleg==28)
	{
		Cin();
	}
	else
	if(peleg==29)
	{
		Cout();
	}
	else
	if(peleg==30)
	{
		Endl();
	}
	
	
	system("PAUSE");
	system("CLS");

	
}

void CPU()
{
	int peleg;
	srand(time(NULL));
	peleg = 1 + rand()%(30 +1- 1);
	
	if(peleg==1)
	{
		compilador();
	}
	else
	if(peleg==2)
	{
		Entorno();
	}
	else
	if(peleg==3)
	{
		computadora();
	}
	else
	if(peleg==4)
	{
		Estructura();
	}
	else
	if(peleg==5)
	{
		Seleccion();
	}
	else
	if(peleg==6)
	{
		Repeticion();
	}
	else
	if(peleg==7)
	{
		Directiva();
	}
	else
	if(peleg==8)
	{
		Algoritmo();
	}
	else
	if(peleg==9)
	{
		Program();
	}
	else
	if(peleg==10)
	{
		Ejecucion();
	}
	else
	if(peleg==11)
	{
		Int();
	}
	else
	if(peleg==12)
	{
		Float();
	}
	else
	if(peleg==13)
	{
		Char();
	}
	else
	if(peleg==14)
	{
		Double();
	}
	else
	if(peleg==15)
	{
		Long();
	}
	else
	if(peleg==16)
	{
		If();
	}
	else
	if(peleg==17)
	{
		Else();
	}
	else
	if(peleg==18)
	{
		For();
	}
	else
	if(peleg==19)
	{
		While();
	}
	if(peleg==20)
	{
		Return();
	}
	else
	if(peleg==21)
	{
		Break();
	}
	else
	if(peleg==22)
	{
		Switch();
	}
	else
	if(peleg==23)
	{
		Case();
	}
	else
	if(peleg==24)
	{
		Main();
	}
	else
	if(peleg==25)
	{
		Include();
	}
	else
	if(peleg==26)
	{
		Define();
	}
	else
	if(peleg==27)
	{
		Struct();
	}
	else
	if(peleg==28)
	{
		Cin();
	}
	else
	if(peleg==29)
	{
		Cout();
	}
	else
	if(peleg==30)
	{
		Endl();
	}
	
	system("PAUSE");
	system("CLS");

}

