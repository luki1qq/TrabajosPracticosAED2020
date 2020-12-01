#include <stdio.h>
#include <stdlib.h>

struct entero{
    char usuario[50];
    char contrase[50];
};

main(){
    FILE *arch = fopen("aux.dat", "w+b");
    entero reg;

    printf ("Ingrese el usuario : ");
    gets (reg.usuario);
    printf ("Ingrese la contraseña : ");
    gets (reg.contrase);
    
}
