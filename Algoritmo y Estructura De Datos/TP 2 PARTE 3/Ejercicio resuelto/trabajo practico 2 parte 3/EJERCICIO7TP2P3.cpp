#include<stdio.h>
#include<stdlib.h>


int n,ntc,uc,s;

main()
{
printf("\ningrese la cantidad de numeros enteros con los que quiere trabajar:  \n\n");
scanf ("%d",&n);
for(s=0;s<n;s=s+1)
{
printf("\ningrese un numero de tres cifras\n");
scanf("%d",&ntc);
 
 if(ntc>99 and ntc<1000)
  {
  	uc=ntc%10;
  }
  else 
  {
  	
  printf("\nel numero ingresado no tiene 3 cifrfas");
  }
  
  
printf("\n\nLa ultima cifra del numero ingresado es: %d\n",uc);
			
}


system ("pause");
}

