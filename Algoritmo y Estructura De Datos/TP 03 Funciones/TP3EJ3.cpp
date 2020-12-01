#include <stdio.h>
#include <stdlib.h>

void CalMayMen (int &May,int &Men);
void AreaCuad (int May, int &SupCua);
void AreaCilin (int Men, int &SupCil);
main()
{
	int a,b,s;
	printf ("Ingrese dos valores para el cuadrado \n\n");
	scanf ("%d", &a);
	scanf ("%d", &b);
    CalMayMen (a,b);
    AreaCuad (a,b);
    printf ("El area del cuadrado es %d\n", b);
    AreaCilin (a,b);
    printf ("El area del cilindro es %d\n", b);
    
  system ("Pause");
}

void CalMayMen (int &May,int &Men)
{	

     if (May=Men);
     {
     May = May;
     Men = Men;
     }
     if (May>Men)
    {
	Men = Men;
    May = May;
    }
     else
     {
     Men = May;
     May = Men;
	 }
}

void AreaCuad (int May,int &SupCua)
{
	SupCua = May*May;
}
void AreaCilin (int Men, int &SupCil)
{
	SupCil = 2 *3.14*Men*Men;
}
