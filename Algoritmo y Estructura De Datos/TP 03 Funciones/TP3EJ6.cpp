#include <stdio.h>
#include <stdlib.h>

int horas (int x);

int min (int a);

int segundos (int s);

main()

{
	int res1, res2, res3, dias;
	
	printf ("Ingrese el valor de dias");
	scanf ("%d", &dias);
	res1 = horas (dias);
	printf ("La cantidad de horas que tiene el dia es %d\n", res1);
	res2 = min(dias);
	printf ("La cantidad de minutos que tiene el dia es %d\n", res2);
	res3 = segundos(dias);
	printf ("La cantidad de segundos que tiene el dia es %d\n", res3);
	
	system ("pause");
}

int horas (int x)
{
    int res1;    
	
	res1 = x * 24;
	
return res1;
}
int  min (int a)
{
	int res2;
	
	res2 = a * 1440;
	
return res2;
	
}
int segundos (int s)
{
	int res3; 	
	
    res3 = s* 86400;
	
return res3;

}
