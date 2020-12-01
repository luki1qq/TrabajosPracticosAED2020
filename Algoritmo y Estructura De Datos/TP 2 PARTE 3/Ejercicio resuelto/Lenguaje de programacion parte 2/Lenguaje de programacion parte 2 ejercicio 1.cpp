#include <stdio.h>
#include <conio.h>

int C,N;
float VH,S,CH;

main()
{
C = 0;
	
printf("Ingrese la cantidad de empleados\n\n");
scanf("%d", &N);
	
while (C<N)
	{
		printf("Ingrese la cantidad de horas\n\n");
		scanf("%f", &CH);
		
		if (CH>=60)	
		{
		   CH = CH*1.05;
		}  
		
		printf("Ingrese el valor de horas\n\n");
		scanf("%f", &VH);
		
		S = CH*VH;
		
		if (CH=0)
		{
		printf("No trabajo\n\n");
		} 
		
		S = S*0.86;
		
		C = C+1;	
	}
	
printf("El sueldo del empleado sera %f", S);


}
