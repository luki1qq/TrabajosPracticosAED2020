#include <stdio.h>
#include <stdio.h>

void palindromo (int valor, bool &resultado)
    {
    	int pe,ni = 0,r ;
    	pe = valor;
    	
    	while (pe != 0 )
    	{
    		r=pe%10;
    		pe=pe/10;
    		ni=ni*10+r;
		}
		if (ni==valor)
		{
			resultado=true;
		}
		else
		{
			resultado= false;
		}
	}

main()

{
	int X,N, c = 0;
    bool res;
    
    printf ("Ingrese la cantidad de elementos");
    scanf ("%d", &N);
    while (c<N)
    
    {
    	
    	printf ("Ingrese el numero entero de 5 digitos ");
    	scanf ("%d", &X);
    if (X<9999 or X>100000)
    {
    	printf ("El valor ingresado no es valido\n\n");

	}
	else
	
    	if (X>9999 and X<100000)
    	{
    		
    		palindromo(X,res);
    		
    		if (res)
    		{
    			printf ("El numero ingresado es palindromo\n\n");
			}
    		else
    	    {
    	    	printf ("El numero ingresado no es palindromo\n\n");
			}
		
		}
		c++;
	}
	
	
    void palindromo (int valor, bool &resultado);
    {
    	int pe,ni = 0, r, valor;
    	pe = valor;
    	
    	while (pe != 0 )
    	{
    		r=pe%10;
    		pe=pe/10;
    		ni=ni*10+r;
		}
		if (ni==valor)
		{
			res =true;
		}
		else
		{
			res = false;
		}
	}
    
    
}
