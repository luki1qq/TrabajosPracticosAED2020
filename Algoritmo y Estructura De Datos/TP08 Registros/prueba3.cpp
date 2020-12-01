#include <stdio.h>
#include <string.h>

typedef char nombres[100];

main()
{
	nombres dias[10];
	char dias[][0] = {'h','o','l','a'};

	
	for (int i = 0;i<4;i++)
	{
		printf ("%s", dias[i]);
	}
}
