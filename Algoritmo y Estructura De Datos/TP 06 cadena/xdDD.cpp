#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char apellido[30], nombre [30], apeynom[30];
	printf ("\ningrese un apellido : ");
	gets (apellido);
	printf ("\nIngrese un nombre : ");
	gets (nombre);
	
	printf ("\napellido : %s", apellido);
	printf ("\nnombre : %s", nombre);
}
