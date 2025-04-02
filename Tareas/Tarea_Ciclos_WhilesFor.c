#include <stdio.h>
#include <math.h>

int main() {
    float x_inicio, x_fin, paso, x;

    
    printf("Ingrese el valor inicial de x: ");
    scanf("%f", &x_inicio);
    printf("Ingrese el valor final de x: ");
    scanf("%f", &x_fin);
    printf("Ingrese el espaciado: ");
    scanf("%f", &paso);

    
    printf("x, exp(x), log(x), sin(x), cos(x), sqrt(x)\n");
  
    
    for (x = x_inicio; x <= x_fin; x += paso) {
        if (x > 0) 
            printf("%f %f %f %f %f %f\n", x, exp(x), log(x), sin(x), cos(x), sqrt(x));
        else
            printf("%.2f %.2f %s %.2f %.2f %s\n", x, exp(x), "N/A", sin(x), cos(x), "N/A");
    }

    return 0;
}

