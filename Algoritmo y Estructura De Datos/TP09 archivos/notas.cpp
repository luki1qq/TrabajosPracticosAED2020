#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *arch;
	int n,i;
	float nota;
	
	/*alta*/
	printf ("Ingrese la cantidad de empleados : ");
	scanf ("%d", &n);
	
	arch = fopen("notas.dat","w+b");
	printf ("Ingrese las notas: ");
	for (i = 0;i<n;i++)
	{
		printf ("Nota : ");
		scanf ("%f", &nota);
			
		fwrite(&nota,sizeof(float),1,arch);
	}
	fclose(arch);
}
