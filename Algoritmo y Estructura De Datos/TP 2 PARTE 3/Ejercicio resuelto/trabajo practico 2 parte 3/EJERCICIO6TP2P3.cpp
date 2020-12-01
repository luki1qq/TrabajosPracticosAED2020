#include<stdio.h>
#include<stdlib.h>

main(){
    int NS=1,E,D,S,SM=0,SF=0,SFUT=0;
    int S16=0;


    printf("Cual es el numero del siguiente socio ?\n");
    scanf("%d",&NS);

    while(NS!=0){

        printf("Cual es la edad del socio N %d ?\n",NS);
        scanf("%d",&E);
        printf("cual es el deporte que realiza el socio N %d ?(1-Futbol 2-Natacion 3-Jockey)\n",NS);
        scanf("%d",&D);
        printf("Cual es el sexo del socio N %d ?(1-Maculino 2-Femenino)\n",NS);
        scanf("%d",&S);
        if((E<=50 and E>=30) and D==1){
            SFUT=SFUT+1;
        }else if(E<16){
            S16=S16+1;
        }

        if(S==1){
            SM=SM+1;
        }else if(S==2){
            SF=SF+1;
        }

        printf("Cual es el numero del siguiente socio ?\n");
        scanf("%d",&NS);
    }

    printf("Hay %d socios mujeres y %d socios varones\n",SF,SM);
    printf("Hay %d socios entre 30 y 50 años que juegan al futbol\n",SFUT);
    printf("Hay %d socios menores a 16 años\n\n",S16);

    system ("pause");
}
