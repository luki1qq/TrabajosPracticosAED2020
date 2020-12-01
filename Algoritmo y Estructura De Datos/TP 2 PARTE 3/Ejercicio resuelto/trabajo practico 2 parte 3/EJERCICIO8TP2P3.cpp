#include<stdio.h>
#include<stdlib.h>

int IS,IM,IE,N,L,s,C,PIS,PIM,PIE;

main()
{
IS=0;
IM=0;
IE=0;
printf("ingrese a cantidad de alumnos que egresaron\n");
scanf ("%d",& N);
for(s=0;s<N;s=s+1)
 {
 	system("cls");
  printf("Ingrese el numero de legajo academico\n\n ");
  scanf ("%d",&L);
  
  printf("Ingrese la carrera del estudiante 1=ISI, 2=Mecanica, 3=Electrica \n\n  ");
  scanf ("%d",&C);
  
  if(C==1)
  {
  	IS=IS+1;
  } else 
  {
  	 if (C==2)
     {
  	   IM=IM+1;
     }
     else
     IE=IE+1;
  	
  }
  
 
  
 }


PIS=(IS*100)/N;
PIM=(IM*100)/N;
PIE=(IE*100)/N;

printf("\nla cantidad de estudiantes que egresaron de IS son %d\n\n",IS);
printf("\nla cantidad de estudiantes que egresaron de IM son %d\n\n",IM);
printf("\nla cantidad de estudiantes que egresaron de IE son %d\n\n",IE);

printf("\nEl porcentaje de estudiantes que egresaron de IS son %d\n\n",PIS);
printf("\nEl porcentaje de estudiantes que egresaron de IM son %d\n\n",PIM);
printf("\nEl porcentaje de estudiantes que egresaron de IE son %d\n\n",PIE);



system ("pause");
}

