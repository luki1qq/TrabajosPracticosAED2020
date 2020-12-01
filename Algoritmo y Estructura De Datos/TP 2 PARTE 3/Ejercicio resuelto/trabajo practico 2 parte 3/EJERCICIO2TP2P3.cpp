# include <stdio.h>
# include <stdlib.h>
main()
{
    const float CD = 700;
    const float GxD = 1024;
    float D, AD, CD1, T;
    printf ("Ingrese cuantos gigabyte desea almacenar \n:"); scanf("%f", &D);

    AD = GxD*D ;   

    CD1 = AD/CD ;

    printf (" La cantidad de CD utilizados sera %f\n", CD1);
    
    system ("pause");
}

