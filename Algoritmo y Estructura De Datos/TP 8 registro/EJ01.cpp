#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datosCliente{
	int codCli; //código del cliente
	char ApeNom[40]; //apellido y nombre
	char dire[60]; //domicilio particular
	float monCred; //Monto máximo del crédito que puede realizar en cada compra.
};
void mostrar(struct datosCliente &reg1);

main()
{
	datosCliente reg;
	int n,contador = 0;
	printf ("Ingrese la cantidad de clientes que desea registrar \n");
	scanf ("%d", &n);
	for (int i = 0;i<n;i++)
	{
		printf ("Ingrese el codigo del cliente \n");
		
		scanf ("%d", &reg.codCli);
		
		printf ("Ingrese el apellido y nombre del cliente \n");
		
		_flushall();
		
		gets (reg.ApeNom);
		
		printf ("Ingrese el domicilio particular del cliente \n");
		
		gets (reg.dire);
		
		printf ("Ingrese el monto maximo del credito que puede realizar en cada compra \n");
		
		scanf ("%f", &reg.monCred);
		
		if (reg.monCred > 30000)
		{
			contador = contador + 1;
		}
		mostrar (reg);
	}
	printf ("La cantidad de clientes que tienen un monto superior es : %d", contador);
}

void mostrar(struct datosCliente &reg1)
{
	printf ("Datos Registrados  \n");
	printf ("Codigo de cliente : %d\n", reg1.codCli);
	_flushall();
	printf ("Apellido y nombre : ");
	puts (reg1.ApeNom);
	printf ("Direccion : ");
	puts (reg1.dire);
	printf ("Monto credito : %2.f\n", reg1.monCred);
}
