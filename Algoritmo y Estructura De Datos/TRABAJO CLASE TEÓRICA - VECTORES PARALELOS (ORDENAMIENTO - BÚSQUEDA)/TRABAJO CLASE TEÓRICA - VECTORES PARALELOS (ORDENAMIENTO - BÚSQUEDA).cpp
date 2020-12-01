#include <stdio.h>

void leer(int n1,int v1[100]);

int legajo(int n1, int v1[100]);

void ordenar(int n1, int v1[100]);

void mostrar(int n1,int v1[100]);

main()
{
    int n,v[100],l;
    
    printf("Ingrese N:");
    scanf("%d",&n);
    
    leer(n,v);
    
    ordenar(n,v);
    printf("\nVector Ordenado:\n");
    mostrar(n,v);
    
    printf("\nPrimer promedio: %d\n",v[0]);
    printf("Segundo promedio: %d\n",v[1]);
    printf("Tercero promedio: %d\n",v[2]);
    
    l=legajo(n,v);
    printf("\nLegajo con mayor promedio: %d",l);
}

 


void leer(int n1,int v1[100])
{
    int i;
    
    for (i=0;i<n1;i++)
    {
        printf("v[%d]= ",i);
        scanf("%d",&v1[i]);
    }
    
}

 


int legajo(int n1, int v1[100])
{
    int i,leg=0,may=0;
    
    for (i=0;i<n1;i++)
    {
        if (v1[i]>may)
        {
            may=v1[i];
            leg=i;
        }
    }
    return leg;    
}

 

void ordenar(int n1, int v1[100])
{
    int i,aux,b;
    
    do
    {
        b=0; 
        for (i=0;i<n1-1;i++)
        {
            if (v1[i]>v1[i+1])
            {
                aux=v1[i];
                v1[i]=v1[i+1];
                v1[i+1]=aux;
                b=1;
                
            }
        }
    }
    while (b==1);
}

 

void mostrar(int n1,int v1[100])
{
    int i;
    
    for (i=0;i<n1;i++)
    {
        printf("v[%d]= %d\n",i,v1[i]);
    }
    
}
