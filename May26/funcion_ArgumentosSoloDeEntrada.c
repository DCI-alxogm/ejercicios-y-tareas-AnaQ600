#include <stdio.h>

void cuadrado (float _x);
int main (){
	float x;
	printf("Introduce un numero\n");
	scanf("%f", &x);
	cuadrado(x);
	return (0);
}

void cuadrado (float _x){
	float x2;
	x2=x*_x;
	printf("El cuadrado de %f es %f \n", x,x2);
}