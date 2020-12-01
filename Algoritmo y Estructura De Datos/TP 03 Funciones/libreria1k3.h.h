#include<stdio.h>
#include<stdlib.h>

float suma(float a,float b)
{
 float s;
 s=a+b;
return s;
}

float resta(float a,float b)
{
 float r;
 r=a-b;
return r;	
}

float division(float a,float b)
{
 float d;
 	if(b!=0)
 	{
  	 d=a/b;	
 	}
 	else
 	{
 	 d=a;	
 	}
return d;	
}

float producto(float a, float b)
{
 float p;
 p=a*b;
 return p;
}


float MayValor (float a,float b,float c)
{
	if (a > b and a > c)
	{
		return a;
	}
	else
	if (b > a and b > c)
	{
		return b;
	}
	else
	if (c > b and c > a)
	{
		return c;
	}
}

float menor (float a,float b,float c)
{
	if (a < b and a < c)
	{
		return a;
	}
	else
	if (b < a and b < c)
	{
		return b;
	}
	else
	if (c < b and c < a)
	{
		return c;
	}
}

float promedio(float a,float b,float c)
{
	float prom;
	prom= (a+b+c)/3;
	return prom;
}






