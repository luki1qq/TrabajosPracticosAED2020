#include<stdio.h>
#include<stdlib.h>

int cuadrado (int x, int cc);

main()
{
int x,n,cont=0,cc;

 printf("\ningrese la cantidad de numeros con los que quiere trabajar:  \n");
 scanf ("%d",&n);
 while (cont<n)
 {
 
 printf("\ningrese x  \n");
 scanf ("%d",&x);
 cc=cuadrado (x, cc);
 
 printf ("\n\nel cuadrado del numero es %d\n\n",cc);
 
 cont=cont+1;	
 }


system("pause");
}

int cuadrado (int x,int cc)
{
int  ci=0,c=0;
int i=1;

	while (c!=x)
	{

  		if(x % i!=0)
		{
		ci=ci+x;
		c=c+1;
		}
	i=i+1;
	}	
	
return ci;
}






