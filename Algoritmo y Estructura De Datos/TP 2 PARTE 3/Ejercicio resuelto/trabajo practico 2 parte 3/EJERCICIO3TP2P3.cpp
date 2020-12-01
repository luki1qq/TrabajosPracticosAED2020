#include <stdio.h>
#include <math.h>


float X1,X2,Y1,Y2,DF;
main()

{
	printf	("Ingresar el valor de X1\n");
	scanf ("%f", &X1);
	printf	("Ingresar el valor de X2\n");
	scanf ("%f", &X2);
	printf	("Ingresar el valor de Y1\n");
	scanf ("%f", &Y1);
	printf	("Ingresar el valor de Y2\n");
	scanf ("%f", &Y2);
	
    DF = sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
	
	printf("La distancia entro los dos puntos sera %f", DF);


}
