#include <stdio.h>
 
#define MAX_DATOS 100
 
int main() {

    int n, i;

    float x[MAX_DATOS], y[MAX_DATOS];

    float suma_x = 0, suma_y = 0, suma_xy = 0, suma_x2 = 0;

    float pendiente, interseccion;
 
    

    printf("Ingrese el número de datos (máximo %d): ", MAX_DATOS);

    scanf("%d", &n);
 
    if (n <= 1 || n > MAX_DATOS) {

        printf("Número inválido de datos.\n");

        return 0;

    }
 
    

    printf("Ingrese los pares de datos (x y):\n");

    for (i = 0; i < n; i++) {

        printf("Dato %d:\n", i + 1);

        printf("x[%d] = ", i);

        scanf("%f", &x[i]);

        printf("y[%d] = ", i);

        scanf("%f", &y[i]);
 
       

        suma_x += x[i];

        suma_y += y[i];

        suma_xy += x[i] * y[i];

        suma_x2 += x[i] * x[i];

    }
 
   

    float denominador = n * suma_x2 - suma_x * suma_x;
 
    if (denominador == 0) {

        printf("Error: división por cero. No se puede ajustar una recta.\n");

        return 0;

    }
 
    pendiente = (n * suma_xy - suma_x * suma_y) / denominador;

    interseccion = (suma_y - pendiente * suma_x) / n;
 
    

    printf("\nLa recta ajustada es: y = %.2fx + %.2f\n", pendiente, interseccion);
 
    return 0;

}

 
