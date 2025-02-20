/*Programa ejercicio del 19 de feb de 2025*/

#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float x,y,z;
	float r,teta,fi;
	float rc,tetaC,zeta;

	printf("Introduce las coordenadas cartesianas: \n");
	scanf("%f %f %f", &x, &y, &z);
	
	r=sqrt((x*x) + (y*y) + (z*z));
	teta=atan(y/x);
	fi=acos(z / sqrt ((x*x) + (y*y) + (z*z)));

	rc=sqrt((x*x)+(y*y));
	tetaC=atan(x/y);
	zeta=z;

	printf("Las coordenadas esfericas son: r=%f, teta=%f y fi=%f\n", r,teta,fi);
	printf("Las coordenadas cilindricas son: rc=%f,tetaC=%f y zeta=%f", rc,tetaC,zeta);

	

}