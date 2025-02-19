/*Tarea del 17 de febrero 2025 de jerarquía de operaciones con enteros y flotantes*/

#include <stdio.h>

int main ()
{

	float a,b,c,d;
	float e1, e2, e3, e4;

	printf("Ingresa 4 valores para poder realizar las operaciones y mostrarte los resultados");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	e1=(a+b) * c/d;
	e2=( (a+b)*c)/d;
	e3=(a+b) * (c/d);
	e4=a+b*c/d;


	printf("e=(a+b) * c/d=%f \n", e1);
	printf("e=( (a+b)*c)/d=%f \n", e2);
	printf("e=(a+b) * (c/d)=%f \n", e3);
	printf("e=a+b*c/d=%f \n", e4);
}