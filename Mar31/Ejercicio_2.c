#include <stdio.h>

int main() {
    float x_inicial, x_final, incremento, x;
    
    
    printf("Ingrese el valor inicial de X: ");
    scanf("%f", &x_inicial);
    
    printf("Ingrese el valor final de X: ");
    scanf("%f", &x_final);
    
    printf("Ingrese el valor del incremento: ");
    scanf("%f", &incremento);
    
   
    if (incremento <= 0 || x_inicial > x_final) {
        printf("Error: El incremento debe ser positivo y el valor inicial menor que el final.\n");
        return 1;
    }
    
    x = x_inicial;
    printf("\nResultados:\n");
    printf("X\tX^2\n");
    
    
    do {
        printf("%.2f\t%.2f\n", x, x * x);
        x += incremento;
    } while (x <= x_final);
    
    return 0;
}
