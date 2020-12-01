#include <stdio.h>
#include <stdlib.h>

float VH,CH,S;

main()
{
	printf ("Ingresar el valor de horas"); scanf("%f", &VH);
	printf ("Ingresar la cantidad de horas trabajadas"); scanf("%f", &CH);
	S= CH*VH;
	if (CH=0)
	{
	printf ("No trabajo");
	}
	else 
	     if(CH>=60)
	    {
		S = S*1.05;
		}
	
	S = S*0.86;
	
	printf ("El valor del sueldo es %f", S);
	
	system ("pause");
}
