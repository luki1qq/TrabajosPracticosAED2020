#include <stdio.h>
#include <stdlib.h>

struct aux{
    char usuario[50];
    char contrase[50];
};
struct entero{
    char usuario[50];
    char contrase[50];
    char nombre[50];
};
int menuprincipal();
void usuario();
void usuariosaux();

main()
{
	int menu;
	do{
		menu = menuprincipal();
		switch(menu){
			case 1:{
				usuario();
				system("PAUSE");
				break;
			}
			case 2:{
				usuariosaux();
				system("PAUSE");
				break;
			}
		}
	}while(menu!=3);
}

int menuprincipal(){
	int op;
	system("CLS");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t           MENU PRINCIPAL               ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t    1- Usuarios.dat lectura                ");
	printf("\n\t\t\t    2- aux.dat lectura                ");
	printf("\n\t\t\t =======================================");
	printf("\n\t\t\t\t Ingrese o Selecione opcion: "); 
	scanf("%d", &op);
	return op;	
}

void usuario(){

    FILE *arch = fopen("usuario.dat", "r+b");
    entero reg;
    rewind(arch);
    fread(&reg,sizeof(entero),1,arch);
    while (!feof(arch))
    {
        printf ("el usuario : ");
        puts (reg.usuario);
        printf ("la contraseña : ");
        puts (reg.contrase);
        printf (" nombre : ");
        puts (reg.nombre);
      fread(&reg,sizeof(entero),1,arch);        
    }

}

void usuariosaux()
{
    FILE *arch = fopen("aux.dat", "r+b");
    aux reg;
    rewind(arch);
    fread(&reg,sizeof(aux),1,arch);
    while (!feof(arch))
    {
        printf ("Ingrese el usuario : ");
        puts (reg.usuario);
        printf ("Ingrese la contraseña : ");
        puts (reg.contrase);
        fread(&reg,sizeof(aux),1,arch);
    }

}

