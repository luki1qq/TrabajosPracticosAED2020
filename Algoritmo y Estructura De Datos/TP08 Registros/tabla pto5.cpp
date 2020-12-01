#include <stdio.h>
#include <windows.h>  
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
main()
{
	int dni = 43845723,num;
	char viernes[8] = {'v','i','e','r','n','e','s','\0'},lunes[6] = {'l','u','n','e','s','\0'},martes[7] = {'m','a','r','t','e','s','\0'},miercoles[10]={'m','i','e','r','c','o','l','e','s','\0'},jueves[7]={'j','u','e','v','e','s','\0'};
	char documento[10] ={'d','o','c','u','m','e','n','t','o','\0'}, Apellidoynombre[18] = {'A','p','e','l','l','i','d','o','y','N','o','m','b','r','e'},total[10] = {'T','o','t','a','l','\n'};
	char nombreyape[40];
	printf ("%10s", documento);
	printf ("%20s", Apellidoynombre);
	printf ("%15s", lunes);
	printf ("%10s", martes);
	printf ("%10s", miercoles);
	printf ("%10s", jueves);
	printf ("%10s", viernes);
	printf ("%10s", total);
	printf ("==========================================================================================\n");
	int i = 6;
	gotoxy(90,2);
	printf ("%d", dni);
	;gotoxy(15,2);
	_flushall();
	gets(nombreyape);
	
}
