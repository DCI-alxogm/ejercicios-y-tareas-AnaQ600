#include <stdio.h>
#include <math.h>

int main() 
{
    	float x1, x2, x3;
    	int a, b, c;
    	
   	x1 = 5 + 3 * (pow(2, 3) - 4);

	x2 = (6 + 2 * 3) / sqrt(16 + 2);
	
  	printf("Ingrese los valores de a, b y c: ");
  	scanf("%d %d %d", &a, &b, &c);
	x3 = (sin(a + pow(b, 2)) + cos(c / 2.0) * b) / (1 + exp(-a) + sqrt(fabs(b - c)));
	
    printf("Resultado de la primera operación: %.2f\n", x1);
    printf("Resultado de la segunda operación: %.2f\n", x2);
    printf("Resultado de la tercera operación con valores ingresados: %.2f\n", x3);

    return 0;
}

