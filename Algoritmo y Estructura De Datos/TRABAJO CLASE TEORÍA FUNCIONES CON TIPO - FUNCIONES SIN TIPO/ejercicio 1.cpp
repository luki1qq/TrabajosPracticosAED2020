#include <stdio.h>
#include <stdlib.h>

void Sueldo(float VH,float CH,float &S);


main()
{
	float Valorhoras,Cantidadhoras,SueldoFinal;
	
	printf ("Ingresar el valor de horas");
	scanf("%f", &Valorhoras);
	printf ("Ingresar la cantidad de horas trabajadas");
	scanf("%f", &Cantidadhoras);
	Sueldo (Valorhoras,Cantidadhoras,SueldoFinal);
    	if (Cantidadhoras == 0)
	{
	printf ("No trabajo");
	}
	
	printf ("El valor del sueldo es %f", SueldoFinal);
	
	system ("pause");
}

void Sueldo(float VH,float CH,float &S)
{
	S=VH*CH;
	
	     if(CH>=60)
	    {
		S = S*1.05;
		}
		else 
		{
			S = S*0.86;
		}
		
}
