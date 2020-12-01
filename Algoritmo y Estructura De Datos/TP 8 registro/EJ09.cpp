#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct articulos{
	
	int codigo;
	char descripcion[30];
	int stock;
	float precio;
	
	
	
};

void cargar(articulos articulo[20], int n);
int buscar(articulos articulo[20], int n, int codigo);
void ordenardes(articulos articulo[20], int n);
void ordenarcantidad(articulos articulo[20], int n);
int main(){
	int n,t;
	articulos articulo[20];
	int opcion1,opcion;
	int codigo;
	do{
		
	
	printf("\n=======================MENU=====================\n");
	printf("\n\n1- CARGAR ARTICULOS");
	
	printf("\n\n2- BUSCAR UN ARTICULO:");
	
	printf("\n\n3-LISTAR EL INVENTARIO ORDENADO ALFABETICAMENTE");
	
	printf("\n\n4-LISTAR EL INVENTARIO ORDENADO POR CANTIDAD EN STOCK\n");
	printf("\n0-SALIR\n");
		
		printf("\n=================================================\n");
	printf("\nQUE DESEA REALIZAR:");
	scanf("%d",&opcion1);
	switch (opcion1){
		case 1: printf("\nCUANTOS ARTICULOS DESEA CARGAR:");	scanf("%d",&n);
					cargar(articulo, n);  system("PAUSE"); system("CLS"); break;
		case 2: printf("\nINGRESE EL CODIGO DEL ARTICULO QUE DESEA BUSCAR:");
				scanf("%d", &codigo);
			opcion=buscar(articulo,n, codigo); system("PAUSE"); system("CLS");
			
			if(opcion==0){
				
				
				printf("\nCODIGO NO ENCONTRADO\n");
				system("PAUSE");
				system("CLS");
			}
			
			
			 break;
			
		case 3:   
		
		ordenardes(articulo,n);
		
		system("PAUSE");
		 system("CLS");
		
		
		
		break;	
		
		
		case 4: 
		
		ordenarcantidad(articulo,n);
		
		system("PAUSE");
		 system("CLS");
		break;	
	}
	}while(opcion1!=0);
	
	
	return 0;
	
	
	
	
}
void cargar(articulos articulo[20], int n){
		int opcion;
		for(int i=0;i<n;i++){
				printf("\n\nINGRESE EL CODIGO DEL ARTICULO:");
				scanf("%d", &articulo[i].codigo);	
		printf("\n\nINGRESE LA DESCRIPCION DEL ARTICULO:");
		_flushall();
		gets(articulo[i].descripcion);
		printf("\n\nINGRESE LA CANTIDAD DE UNIDADES EN STOCK:");
				scanf("%d", &articulo[i].stock);	
		
			printf("\n\nNGRESE EL PRECIO DEL ARTICULO:");
				scanf("%f", &articulo[i].precio);
					printf("\n=================================================\n");
						printf("\n=================================================\n");		
	
		}
	
	
	
}
int buscar(articulos articulo[20], int n, int codigo){
	int decision;
	int elem;
	int band=0;
	for(int i=0;i<n;i++){
		
		if(articulo[i].codigo==codigo){
			printf("\n\nCODIGO DEL ARTICULO:%d",articulo[i].codigo);
	
		printf("\n\nDESCRIPCION DEL ARTICULO:%s",articulo[i].descripcion);
		
		printf("\n\nCANTIDAD DE UNIDADES EN STOCK:%d",articulo[i].stock);
			
			printf("\n\nPRECIO DEL ARTICULO:%.2f\n\n",articulo[i].precio);
		band=1;	

		}
		
		
	}
	
	
	return band;
	
}
	
	void ordenardes(articulos articulo[20], int n){
		
		int b;
		char aux[30];
		do
     {
         b=0;
         for (int i=0;i<n-1;i++)
         {
             if(strcmp(articulo[i].descripcion,articulo[i+1].descripcion)<0)
             {
                  strcpy(aux,articulo[i].descripcion);
                  strcpy(articulo[i].descripcion,articulo[i+1].descripcion);
                  strcpy(articulo[i+1].descripcion,aux);
                  b=1;
             }
         }         
     }
     while (b==1);
		
		printf("\nVECTOR ORDENADO SEGUN DESCRIPCION\n");
	for (int i=0;i<n;i++)
     {
     	
         printf("Articulo %d: %s\n",i,articulo[i].descripcion);
     }
	
	
	
		
		
	}
	
void ordenarcantidad(articulos articulo[20], int n){
	int vstock[20];
	int b;
	int aux;
	
	for(int i=0;i<n;i++){
		
		do{			
			
				b=0;
					for (i=0;i<n-1;i++)	{
					
						if (articulo[i].stock>articulo[i+1].stock){
							
							aux=articulo[i].stock;
								articulo[i].stock=articulo[i+1].stock;	
									articulo[i+1].stock=aux;
										b=1;
						}
					}
			}
			while (b==1);
		
	}
			
			printf("\nVECTOR ORDENADO SEGUN STOCK\n");	
	
	for (int i=0;i<n;i++)
     {
     	
     	
         printf("\nArticulo %d: %d\n",i,articulo[i].stock);
	
	
	
	
}	
}
	


