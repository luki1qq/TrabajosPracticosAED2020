#include <stdio.h>
#include <stdlib.h>

void cargar(int matrizA[10][10][10],int P,int M,int N);
void obtenerSumaPlano(int matrizA[10][10][10],int P,int M,int N, int vectorSuma[10]);
void mostrarVector(int vectorSuma[10], int P);

main(){
	int P,M,N;
	int matrizA[10][10][10];
	int vectorSuma[10];
	
	printf("Ingresar la Cantidad de Plano: ");
	scanf("%d",&P);
	printf("Ingresar la Cantidad de Filas: ");
	scanf("%d",&M);
	printf("Ingresar la Cantidad de columnas: ");
	scanf("%d",&N);
	
	cargar(matrizA, P, M, N);
	obtenerSumaPlano( matrizA, P, M, N, vectorSuma);
	mostrarVector(vectorSuma, P);
}

void cargar(int matrizA[10][10][10],int P,int M,int N){
	for(int k=0; k < P; k++){
		printf("Plano %d\n", k);
		
		for(int j=0; j<M; j++){
			printf("\t fila %d\n", j);
		
			for(int i=0; i<N; i++){
				printf("\t\tColumna %d: ", i);
				scanf("%d", &matrizA[k][j][i]);
			}
		}
	}
}

void obtenerSumaPlano(int matrizA[10][10][10],int P,int M,int N, int vectorSuma[10]){
	int suma=0;
	
	for(int k=0; k < P; k++){
		suma = 0;
		for(int j=0; j<M; j++){
		
			for(int i=0; i<N; i++){
				suma = suma + 	matrizA[k][j][i];
			}
		}
		vectorSuma[k]= suma;
	}
}

void mostrarVector(int vectorSuma[10], int P){
	for(int i=0; i<P; i++){
		printf("%d - ", vectorSuma[i]);
	}
}


