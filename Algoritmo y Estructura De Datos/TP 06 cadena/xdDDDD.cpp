#include <stdio.h>
#include <iostream>

using namespace std;

int main()

{
	char caracter[100];
	printf ("Ingrese un nombre");
	cin.getline (caracter,10);
	
	printf ("nombre : ");
	puts (caracter);
}
