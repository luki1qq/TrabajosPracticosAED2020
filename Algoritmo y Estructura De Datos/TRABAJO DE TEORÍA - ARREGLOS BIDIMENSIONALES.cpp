#include<stdio.h>
#include<conio.h>

void cargar(int m1, int a[100][100]);
void mostrar(int m1, int a[100][100]);
void ordenar(int m1, int a[100][100]);
int suma(int m1, int a[100][100]);

main()
{
	int m,s;
	int a[100][100];
	printf("ingrese la cantidad de filas: ");
	scanf("%d",&m);
	
	cargar(m,a);
	
	printf("\nMATRIZ INGRESADA\n");
	mostrar(m,a);
	
	s=suma(m,a);
	printf("\nSuma de los valores : %d",s);
	
	ordenar(m,a);
	printf("\nMATRIZ ORDENADA\n");
	mostrar(m,a);
	

	
}

void cargar(int m1, int a[100][100])
{
	int i,j;
	
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{
			if (i<=j)
			{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
			else
			{
				a[i][j]=-a[j][i];
			}
		}
	}
	
}


void mostrar(int m1, int a[100][100])
{
	int i,j;
	
	for(i=0;i<m1;i++)
	{
		for(j=0;j<m1;j++)
		{
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	}
}

void ordenar(int m1, int a[100][100])
{
	int i,j,b,aux;
	
	do
	{
		b=0;
		for(i=0;i<m1;i++)
		{
			for(j=0;j<m1-1;j++)
			{
				
				if (a[i][j]>a[i][j+1])
				{
						aux=a[i][j];
						a[i][j]=a[i][j+1];
						a[i][j+1]=aux;
						b=1;
				}
			}		
			if (i<m1-1)
			{
					if (a[i][m1-1]>a[i+1][0])
					{
						aux=a[i][m1-1];
						a[i][m1-1]=a[i+1][0];
						a[i+1][0]=aux;
						b=1;
					}
			}
		}	
	}
	while (b==1);
}

int suma(int m1, int a[100][100])
{
	int s=0,i,j;
	
	for(j=0;j<m1;j++)
	{
		s=s+a[0][j];
	}
	
	for(j=0;j<m1;j++)
	{
		s=s+a[m1-1][j];
	}
	
	for(i=1;i<m1-1;i++)
	{
		s=s+a[i][0];
	}
	for(i=1;i<m1-1;i++)
	{
		s=s+a[i][m1-1];
	}

	return s;	
}
