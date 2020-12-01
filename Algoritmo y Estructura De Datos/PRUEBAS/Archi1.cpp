#include <stdio.h>
#include <stdlib.h>

struct entero{
    char usuario[50];
    char contrase[50];
    char nombre[50];
};

main(){
    FILE *arch = fopen("usuario.dat", "w+b");
    entero reg;

    printf ("Ingrese el usuario : ");
    gets (reg.usuario);
    printf ("Ingrese la contraseña : ");
    gets (reg.contrase);
    printf ("Ingrese el nombre del usuario : ");
    gets (reg.nombre);
    fwrite(&reg,sizeof (entero),1,arch);

    printf("\nEjecutando Modulo de archi2...\n");
	system("start Archi2.exe");		
}

