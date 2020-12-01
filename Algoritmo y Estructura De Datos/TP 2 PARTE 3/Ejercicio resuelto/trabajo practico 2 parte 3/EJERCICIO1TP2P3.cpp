# include <stdio.h>
# include <stdlib.h>
main()
{
    float P1 , P2, PF, EF, TF, CF;
    printf(" Ingrese los valores para parcial 1 \n\n:"); scanf("%f", &P1);
    
    printf(" Ingrese el valor de parcial 2\n\n: "); scanf("%f", &P2);
    
    printf(" Ingrese los valores para el examen final \n "); scanf("%f", &EF); 
    
    printf(" Ingrese el valor de trabajo final \n "); scanf("%f", &TF);
    
    P1 = P1 * 0.25;
    
    P2 = P2 * 0.25;
    
    PF = P1+P2;
    
	EF = EF * 0.3;
	
	TF = TF * 0.2;
	
	CF = EF+PF+TF;
	
	printf (" 'Su calificacion final es %f", CF);
   
system ("pause");
    
}
