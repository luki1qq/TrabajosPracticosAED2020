#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>

main() 
{
	system("COLOR F0");
	int op;
	op = 0;
     printf("\n----------------------");
     printf("\nBienvenido a la Tienda");
     printf("\n----------------------\n");
	
	while(op != 5)
	{
		                            	
		printf("\n1) Opcion 1\n");
		printf("2) Opcion 2\n");
		printf("3) Opcion 3\n");
		printf("4) Opcion 4\n");
		printf("5) Salida 5\n");
		              printf("                    -----------------\n");
		              printf("                    Digite una opcion\n");
		              printf("                    -----------------\n");
		scanf("%d", &op);
		
		switch(op)
		{
		   case 1: 
		   printf("hola");

		   system("PAUSE");
		   system("CLS");
		   break;
		}
		
	}
	return 0;
	getch();
}
