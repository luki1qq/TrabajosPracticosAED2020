#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *arch;
	float nota;
	/*alta*/
	printf ("NOTAS GUARDADAS");
	arch = fopen("notas.dat", "rb");
	fread(&nota,sizeof(float),1,arch);
	while (!feof(arch))
	{
		printf ("Nota : %.2f", nota);
		fread(&nota,sizeof(float),1,arch);
		
	}
	fclose(arch);
}
