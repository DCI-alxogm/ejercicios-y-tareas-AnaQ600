#include <stdio.h>
 
int main() {
    float temp_C, temp_K;
    float final, delta;
    int n, i;
    char repetir;
 
    do {
        
        printf("Ingrese la temperatura inicial en Celsius: ");
        scanf("%f", &temp_C);
        printf("Ingrese la temperatura final en Celsius: ");
        scanf("%f", &final);
        printf("Ingrese el número de pasos: ");
        scanf("%d", &n);
 
        
        delta = (final - temp_C) / n;
 
        
        for (i = 0; i <= n; i++) {
            temp_K = temp_C + 273.15;
            printf("%f °C  %f K\n", temp_C, temp_K);
            temp_C += delta;
        }
 
        
        printf("¿Desea ejecutar nuevamente? (s/n): ");
        scanf(" %c", &repetir);
 
    } while (repetir == 's' || repetir == 'S');
 
    return 0;
}