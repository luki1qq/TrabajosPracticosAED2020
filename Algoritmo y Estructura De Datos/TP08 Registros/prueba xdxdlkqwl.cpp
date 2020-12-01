#include <stdio.h>
#include <stdlib.h>

struct datosClientes{
	int cod;
	float monCred;
};

main()
{
	datosClientes reg;
	int aux = 0,n;
	scanf ("%d", &n);
	for (int i = 0;i<n;i++)
	{

	printf ("Ingrese el codigo del cliente  \n");
	scanf ("%d", &reg.cod);
	printf ("Ingrese el monto de credito \n");
	scanf ("%f", &reg.monCred);
	
	if (reg.monCred >= 30000)
	{
		aux = aux + 1;
	}

	}
		printf ("La cantidad de clientes %d", aux);
}
