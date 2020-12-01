#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct reg1{
	char frase1[100];
	char frase2[100];
};
int menuprincipal();
void ingresarFrase (FILE *tex);
void ingresarFraseMaria (FILE *tex1);
void combinarArchivos(FILE *tex,FILE *tex1,FILE *tex2);
void convertirMinuscula(FILE *tex);
void convertirMayuscula(FILE *tex1);
void convertirFrase(FILE *tex2);

main()
{
	FILE *tex,*tex1,*tex2;
	int opc;
	tex= fopen("Archivo1.txt", "r+"); 
	if (tex == NULL)
	{
		fclose(tex);
		tex = fopen("Archivo1.txt", "w+");
	}
	tex1 = fopen("Archivo2.txt", "r+");
	if (tex1 == NULL)
	{
		fclose(tex1);
		tex1 = fopen("Archivo2.txt", "w+");
	}
	tex2 = fopen("Frases.txt", "r+");
	if(tex2 == NULL)
	{
		fclose(tex2);
		tex2 = fopen("Frases.txt","w+");
	}
	do{
		opc = menuprincipal();
		switch(opc){
			case 1:{
				ingresarFrase(tex);
				break;
			}
			case 2:{
				ingresarFraseMaria(tex1);
				break;
			}
			case 3:{
				combinarArchivos(tex,tex1,tex2);
				system("PAUSE");
				break;
			}
			case 4:{
				convertirMinuscula(tex);
				system("PAUSE");
				break;
			}
			case 5:{
				convertirMayuscula(tex1);
				system("PAUSE");
				break;
			}
			case 6:{
				convertirFrase(tex2);
				system("PAUSE");
				break;
			}
			case 7:{
				remove("Archivo1.txt");
				remove("Archivo2.txt");
				system("PAUSE");
				exit(1);
				break;
			}
		}
	}while(opc!=8);
		
	fclose(tex);
	fclose(tex1);
	fclose(tex2);
}

int menuprincipal()
{
	int op;
	system("CLS");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t           MENU PRINCIPAL               ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t    1- Ingresar la frase de Jose Luis                 ");
	printf("\n\t\t\t    2- Ingresar la frase de Maria Emilia        ");
	printf("\n\t\t\t    3- Guardar en un fichero lo realizado en el dia ");
	printf("\n\t\t\t    4- Frase de Luis en minuscula ");
	printf("\n\t\t\t    5- Frase de Maria en mayuscula ");
	printf("\n\t\t\t    6- Mostramos la frase combinado ");
	printf("\n\t\t\t    7- Al salir del sistema se borrara el archivo 1 y 2 ");
	printf("\n\t\t\t    8- Salir del sistema ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t\t Ingrese o Selecione opcion: "); 
	scanf("%d", &op);
	return op;	
}

void ingresarFrase (FILE *tex)
{
	reg1 reg;
	int n;
	
	printf ("Ingrese la cantidad de frases que escribira jose : ");
	scanf ("%d", &n);
	printf ("\nJose Luis, Ingrese sus frases : ");
	for(int i = 0;i<n;i++)
	{
		_flushall();
		gets(reg.frase1);
		if (i<n-1)
	    	fprintf(tex, strcat(reg.frase1,"\n"));
		else
			fprintf(tex,reg.frase1);		
	}
}

void ingresarFraseMaria (FILE *tex1)
{
	int n;
	reg1 reg;
	printf ("Ingrese la cantidad de frases que escribira Maria Emilia : ");
	scanf ("%d", &n);
	printf ("Maria Emilia, Ingrese sus frases : ");
	for(int i = 0;i<n;i++)
	{
		_flushall();
		gets(reg.frase2);
		if (i<n-1)
	    	fprintf(tex1, strcat(reg.frase2,"\n"));
		else
			fprintf(tex1,reg.frase2);		
	}
}

void combinarArchivos(FILE *tex,FILE *tex1,FILE *tex2){
	int n,j;
	reg1 reg;
	printf ("COMBINAR ARCHIVOS ");
	while (!feof(tex) and !feof(tex1))
	{
		fgets(reg.frase1,100,tex);
		printf ("%s", reg.frase1);
		fprintf(tex2, strcat(reg.frase1,"\n"));
		fgets(reg.frase2,100,tex1);
		printf ("%s", reg.frase2);
		fprintf(tex2, strcat(reg.frase2,"\n"));
	}
}

void convertirMinuscula(FILE *tex)
{
	reg1 reg;
	printf ("Frases de Jose Luis en minuscula :\n");
	while (!feof(tex))
	{
		fgets(reg.frase1,100,tex);
		strlwr(reg.frase1);
		printf ("%s\n", reg.frase1);
	}
}

void convertirMayuscula(FILE *tex1)
{
	reg1 reg;
	printf ("Frase de Maria Emilia en Mayuscula : \n");
	while(!feof(tex1))
	{
		fgets(reg.frase2,100,tex1);
		strupr(reg.frase2);
		printf ("%s\n", reg.frase2);
	}
}

void convertirFrase(FILE *tex2)
{
	reg1 reg;
	char frases[100];
	printf ("Archivo combinado empezando con Mayuscula : \n");
	while (!feof(tex2))
	{
		fgets(frases,100,tex2);
		for (char *palabra = strtok(frases, " "); palabra; palabra = strtok(NULL, " "))
    	{
        	for (int i = 0; palabra[i]; ++i)
            printf("%c", i ? tolower(palabra[i]) : toupper(palabra[i]));
            printf(" ");
   		}
	}
}
