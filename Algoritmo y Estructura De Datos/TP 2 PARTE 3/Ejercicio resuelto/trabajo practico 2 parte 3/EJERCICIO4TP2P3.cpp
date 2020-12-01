#include <stdio.h>
#include <conio.h>

float TV,TG,HB,TF;
int c;

main()
{
    c=0;
    
    while (c<=6)
    { 
      printf("Ingrese total de ventas "); scanf("%f", &TV);
      printf("Ingrese total de gastos "); scanf ("%f", &TG);
      
    TV = TV*0.75;
    TF = TV-TG;
    if (TF>0)
    {
     HB= HB + TF;
     printf ("Hubo ganacia %f", HB);
	}
    else
    {
    	HB = HB-TF;
    	printf ("No hubo ganancia", HB);
	}
	c = c+1;
	}
	if (HB>0)
	printf ("Hubo ganancia en el semestre");
	else
	printf ("No hubo ganancia en el semestre");
	
	getch();
}
