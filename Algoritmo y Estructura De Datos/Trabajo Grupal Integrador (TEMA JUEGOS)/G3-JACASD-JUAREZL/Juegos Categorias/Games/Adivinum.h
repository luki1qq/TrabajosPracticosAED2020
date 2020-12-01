#include<stdio.h> 

#include<stdlib.h> 

#include<conio.h> 

#include<time.h> 



 
 
 
//Prototipos

int NumeroAleatorio(); 
int CifrasDiferentes(int v[],int z); 
int Ingreso(int v[],int aleatorio); 
int CantOtraPos(int n1,int aleatorio); 
int Puntaje (int i);
int Adivinum ();
 //principal 

 int Adivinum()
 {
 	int intentos[10]; 

	int aleatorio = 0,numero_a_retornar; 

	aleatorio = NumeroAleatorio();  

	Ingreso(intentos,aleatorio); 
 
 }

//Funciones
int NumeroAleatorio() 

{
 	int numero_a_retornar;
 	int limite_inferior=1000, limite_superior=9999; 
 	int num[1]; 
	int inicializacion=1; 
	srand(time(NULL)); 

	while(inicializacion==1)
	{ 

	num[0]=limite_inferior+rand()%(limite_superior+1-limite_inferior); 	

	int i=0; 

	inicializacion=CifrasDiferentes(num,i); 

	} 

	numero_a_retornar=num[0]; 

	return numero_a_retornar; 

} 

 

int CifrasDiferentes(int v[],int z) 

{ 

	int VectorAuxiliar=v[z]; 

	int cifra[4]; 

	int cantidad_cifras_iguales=0; 

 

	for(int i=0;i<4	;i++) 

		{ 

		cifra[i]=VectorAuxiliar%10; 
	
		VectorAuxiliar=VectorAuxiliar/10; 

		} 

 

	for(int i=0;i<4;i++) 

	{ 

		for(int x=0;x<4;x++) 

	{ 

		if(cifra[i]==cifra[x]) 

		{ 

		cantidad_cifras_iguales++; 

		} 

			if(i==x) 

		{ 

		cantidad_cifras_iguales--;

		} 

	} 

} 



if(cantidad_cifras_iguales>0) 

	{ 

	return 1; 

	} 

	else 
	{
	return 0; 
	}
	
} 

 

int Ingreso(int v[],int aleatorio) 

{ 

		int win=0,valor_cifras=0; 

		int auxotrapos; 

		int auxotrapos2; 

 

 
int i;
while(win==0 && i!=10)

	{ 

		for(i=1;i<=10;i++) 

	{ 

		
		printf ("==========================\n",i);
		printf ("======| Intento %d |======\n",i);
		printf ("==========================\n\n",i);
		scanf("%d",&v[i]);

		auxotrapos=v[i]; 

		auxotrapos2=CantOtraPos(auxotrapos,aleatorio); 

		valor_cifras=CifrasDiferentes(v,i); 

		if(v[i]>=1000 and v[i]<=9999) 

		{ 

			if(valor_cifras>=1)

				{

					i--;printf("\n Ninguna cifra debe ser igual.\n");

					}

						else

							{

								if(auxotrapos2==4)

									{

										system("CLS");
										printf("============================================================================\n");
										printf("=========Felicitaciones! Acertaste el numero. Puntaje obtenido: %d =========\n",10-i);
										printf("============================================================================\n");

										win=1;
										break;
										Puntaje(i);
										i=10;
										
										

									}
								 	
										else

										{ 

											printf("\nCant. Misma Posicion: %d - Cant. Otra Posicion: %d\n",auxotrapos2,4-auxotrapos2);

										}
										 if (i == 10)
										 {
										 	system("CLS");
											printf("============================================================================\n");
											printf("=====================Has Perdido! Puntaje Obtenido: 0=======================\n",10-i);
											printf("============================================================================\n");;break;
										 }

							}

		}

			else

				{ 
					i--;
					printf("\nEl numero debe tener 4 cifras. Vuelva a intentarlo.\n"); 

				}

} 
} 
} 

 

int CantOtraPos(int n1,int aleatorio) 

{ 
	int IngAux=n1 , AleAux=aleatorio; 

	int cAleatorio[4] , cIngreso[4]; 

	int cantidad_cifras_iguales=0 ; 

	for(int i=0;i<4;i++) 

	{ 

		cAleatorio[i]=AleAux%10; 

		AleAux=AleAux/10; 

	} 

	for(int i=0;i<4;i++) 

	{ 

		cIngreso[i]=IngAux%10; 

		IngAux=IngAux/10; 

	}  
	for(int i=0;i<4;i++) 

	{ 

		if(cAleatorio[i]==cIngreso[i]) 
		{ 
		cantidad_cifras_iguales++; 
		} 
	}	 
		return cantidad_cifras_iguales; 
} 
