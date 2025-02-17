/*Tarea del 17 de febrero 2025 de jerarquía de operaciones con enteros y flotantes*/

#include <stdio.h>

int main ()
{
int a,b,c,d;
int e1, e2, e3, e4;

a =0;
b=0;
c=0;
d=0;
e1=(a+b) * c/d;
e2=( (a+b)*c)/d;
e3=(a+b) * (c/d);
e4=a+b*c/d;
	printf("Ingresa 4 valores para poder realizar las operaciones y mostrarte los resultados");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("e=(a+b) * c/d=%d \n", e1);
	printf("e=( (a+b)*c)/d=%d \n", e2);
	printf("e=(a+b) * (c/d)=%d \n", e3);
	printf("e=a+b*c/d=%d \n", e4);
}