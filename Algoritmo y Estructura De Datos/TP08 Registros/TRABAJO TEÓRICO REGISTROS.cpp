#include <stdio.h>
#include <string.h>

struct fecha
{
       int dia,mes,anio;
};

struct registrop
{
       int   cod_pac;
       char  apellido[30],nombre[50];
       fecha fec_nac;
       char resultado;
};

int calculo(int n,registrop v[30]);
void leer(int n,registrop v[30]);
float calculop(int n,registrop v[30]);


main ()
{
    //registrop reg;
    registrop v[30];
    
    int n,i,cp60=0,cp=0;
       
    printf("Ingrese cantidad de pacientes: ");
    scanf("%d",&n);
    
    leer(n,v);
      
    cp60=calculo(n,v);
    printf("\n\nCANTIDAD MAYORES DE 60: %d",cp60);
    
    cp=calculop(n,v);
    printf("\n\nCANTIDAD RESULTADOS POSITIVOS: %d",cp);


}

void leer(int n,registrop v[30])
{
	int i;
	printf("\nIngrese los datos del registro\n\n");
	
    for (i=0;i<n;i++)
	{	     
	     printf("\nCodigo Paciente: ");
	     scanf("%d",&v[i].cod_pac);
	
	     printf("Apellido: ");
	     _flushall();
	     gets(v[i].apellido);
	     
		 printf("Nombre: ");
	     _flushall();
		 gets(v[i].nombre);
	     
	     printf("\nFecha de Nacimiento: \n");
	     printf("Dia: ");
	     scanf("%d",&v[i].fec_nac.dia);
	     printf("Mes: ");
	     scanf("%d",&v[i].fec_nac.mes);
	     printf("Año: ");
	     scanf("%d",&v[i].fec_nac.anio);
	     
	     printf("Resultado test: ");
	     _flushall();
	     scanf("%c",&v[i].resultado);
	}
	
}


int calculo(int n,registrop v[30]) 
{
	int i,edad,c=0;
	
	for (i=0;i<n;i++)
	{
	
		edad=2020-v[i].fec_nac.anio;
		if (edad>60)
		{
			c++;
		}
	}
	return c;
}

float calculop(int n,registrop v[30]) 
{
	int i,p=0;
	float por;
	
	for (i=0;i<n;i++)
	{
	
		if (v[i].resultado=='P')
		{
			p++;
		}
	}
	por=p*100/n;
	return por;
}

