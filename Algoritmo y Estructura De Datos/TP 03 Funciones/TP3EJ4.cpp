#include <stdio.h>
#include <stdlib.h>

float EN(float x,float y,float &z)
{
	z = x*100/y;
}



main()

{
	int m,mq1,mq2,mq3,c = 0,n;
	float res1,res2,res3,res,ep1,ep2,ep3,ept,ed1,ed2,ed3;
    printf ("Ingresar el valor de N");
	scanf ("%d", &n);
	
    while (c<n)
    {
  
	printf ("Ingresar el numero de maquina ");
	scanf ("%d", &m);
	system ("CLS");
	if (m == 1)
	{
	printf ("¿Cuantos envases se producieron?");
	scanf ("%f", &ep1);
	printf ("¿Cuantos envases poseen fallas?");
	scanf ("%f", &ed1);
	
	}
	if (m == 2)
	{
	printf ("¿Cuantos envases se producieron?");
	scanf ("%f", &ep2);
	printf ("¿Cuantos envases poseen fallas?");
	scanf ("%f", &ed2);
	
	}
	if (m == 3)
	{
	printf ("¿Cuantos envases se producieron?");
	scanf ("%f", &ep3);
	printf ("¿Cuantos envases poseen fallas?");
	scanf ("%f", &ed3);
	if (m == 0)
	{
	printf ("Finalizo el programa");
	exit (-1);
	printf ("Gracias");
	return -1;
	}
	} 
   
    ept = ep1+ep2+ep3;
    EN(ed1,ept,res1);
	EN(ed2,ept,res2);
	EN(ed3,ept,res3);	
	c = c + 1;
	
	}
	
	printf ("El total de envases producidos en maquina 1 es %f \n", ep1);
	printf ("El porcentaje de envases desechados en maquina 1 es %f \n", res1);
	printf ("El total de envases producidos en maquina 2 es %f \n", ep2);
	printf ("El porcentaje de envases desechados en maquina 2 es %f \n", res2);
	printf ("El total de envases producidos en maquina 3 es %f \n", ep3);
	printf ("El porcentaje de envases desechados en maquina 3 es %f \n", res3);

system ("pause");
}
