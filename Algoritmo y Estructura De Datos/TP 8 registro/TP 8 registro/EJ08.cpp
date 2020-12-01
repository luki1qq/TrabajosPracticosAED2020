#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct fecha{
	int dia;
	int mes;
	int anio;
	
};

struct productos{
	
	int codigo;
 	char articulo[40];
	int cantmin;
	fecha fec;
	int extac;
	float precio;
	
};


int dat(productos producto[10],int dia,int mes, int anio, int vendido, int codbuscar);

void venta(productos producto[10],int codvender,int vendidoventa);

void calc(productos producto[10]);
main(){
	productos producto[10];
	int i;
	int codbuscar,codvender,vendidoventa;
	int vendido;
	int dia,mes,anio;
	int error;
	for(i=0;i<3;i++){
		
		printf("\nINGRESE EL CODIGO DEL PRODUCTO: ");
		
		scanf("%d",&producto[i].codigo);
		
		printf("\nINGRESE EL NOMBRE DEL PRODUCTO:");
		_flushall();
		gets(producto[i].articulo);
		
		printf("\nINGRESE LA CANTIDAD MINIMA QUE PUEDE HABER DEL PRODUCTO: ");
		
		scanf("%d",&producto[i].cantmin);
		
		
		printf("\nFECHA DE ULTIMA COMPRA: ");
		
		printf("\n\t\t\tDIA: ");
		scanf("%d",&producto[i].fec.dia);
		printf("\n\t\t\tMES: ");
		scanf("%d",&producto[i].fec.mes);
		printf("\n\t\t\tANIO: ");
		scanf("%d",&producto[i].fec.anio);
		
		
		printf("\nINGRESE LA CANTIDAD DISPONIBLE DEL PRODUCTO PARA LA VENTA: ");
		
		scanf("%d",&producto[i].extac);
		
		
		
		printf("\nINGRESE EL PRECIO DEL PRODUCTO: ");
		
		scanf("%f",&producto[i].precio);
		
		
	}
	
	system("PAUSE");
	system("CLS");
	
	
	printf("\nCODIGO DEL PRODUCTO A BUSCAR: ");
	scanf("%d",&codbuscar);
	
	printf("\nCUANTAS UNIDADES DEL PRODUCTO SE VENDIERON");
	scanf("%d",&vendido);
	
	printf("\nDIA ");
	scanf("%d",&dia);
	printf("\nMES ");
	scanf("%d",&mes);
	printf("\nANIO ");
	scanf("%d",&anio);
	
	error=dat(producto,dia,mes,anio,vendido, codbuscar);
	
	if(error==0){
		
		
		printf("\nCODIGO NO ENCONTRADO");
		
		
		
		
	}
	printf("\nCODIGO DEL PRODUCTO QUE SE VENDIO: ");
	scanf("%d",&codvender);
	
	printf("\nCUANTAS UNIDADES DEL PRODUCTO SE VENDIERON:");
	scanf("%d",&vendidoventa);
	
	venta(producto,codvender,vendidoventa);
	
	
	system("pause");
	
	system("cls");
	calc(producto);
	
}

int dat(productos producto[10],int dia,int mes, int anio, int vendido, int codbuscar){
	int i;
	int band=0;
	for(i=0;i<10;i++){
		
		if(producto[i].codigo==codbuscar){
			band=1;
			producto[i].extac=producto[i].extac-vendido;
			
			producto[i].fec.dia=dia;
			producto[i].fec.mes=mes;
			producto[i].fec.anio=anio;
			
			
		}
		
		
		
		
		
		
		
	}
	
	
	
	return band;
	
}

void venta(productos producto[10],int codvender,int vendidoventa){
	
	float monto;
	for(int i=0;i<10;i++){
		
		if(producto[i].codigo==codvender){
			
			monto=vendidoventa*producto[i].precio;
			printf("\n\n\tCODIGO \t \tDESCRIPCION\t\t\t PRECIO UNITARIO \t\t CANTIDAD SOLICITADA \t\t MONTO A PAGAR");
			printf("\n\t==================================================================================================================\n");
			printf("\t%d",producto[i].codigo); 	printf("%24s",producto[i].articulo);	printf("%30.2f",producto[i].precio); 	printf("%30d",vendidoventa); 	printf("%30.2f",monto);
			
		
			
		}
		
		
		
		
		
		
		
	}
	
}

void calc(productos producto[10]){
	int c=0;
	for(int i=0;i<3;i++){
		
		if(producto[i].extac<producto[i].cantmin){
			
			
			
			c++;
			
		}
		
		
		
		
	}
	
	
	
	printf("\nLA CANTIDAD DE PRODUCTOS CON LA CANTIDAD ACTUAL MENOR A LA CANTIDAD MINIMA ES:%d",c);
	
	
}


