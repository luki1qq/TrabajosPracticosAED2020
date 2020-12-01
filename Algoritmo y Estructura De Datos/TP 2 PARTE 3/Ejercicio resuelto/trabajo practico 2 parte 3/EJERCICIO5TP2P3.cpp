#include<stdio.h>
#include<stdlib.h>

main()
{
    int S,E, P,Preg=1, C=0, MGA=0, F=0;
    float PF;

   for (Preg==1)
	{
        C++;
        printf("Cual es la edad del paciente?\n");
        scanf("%d",&E);
        printf("Cual es el sexo del paciente?(1-Maculino 2-Femenino)\n");
        scanf("%d",&S);
        printf("Cual es su patologia?(0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonía, 3 = Bronquitis)\n");
        scanf("%d", &P);
        if(S==1){
            if(P==1){
                MGA=MGA+1;
            }
        }else if(S==2){
            F=F+1;
        }else{
            printf("Ese sexo no existe");
        }
        printf("Desea ingresar los datos de otro paciente?(1-si 2-no)\n");
        scanf("%d", &Preg);
    }
    PF=(F*100)/C;
    printf("Hay %d pacientes masculinos con gripe A y un %.2f porciento de pacientes en el hospital son femeninos\n",MGA,PF);
}
