#include <stdio.h>

int main() {
    int n;   
    float delta;      
    float x[100], y[100];

    printf("Ingrese el número de puntos: ");
    scanf("%d", &n);

    if (n > 100) {
        printf("El número máximo de puntos permitido es 100.\n");
        return 1;
    }

    printf("Ingrese la distancia entre los puntos (delta): ");
    scanf("%f", &delta);

   
    for (int i = 0; i < n; i++) {
        x[i] = i * delta; 
        y[i] = i * delta; 
    }

    
    printf("\nCoordenadas generadas:\n");
    for (int i = 0; i < n; i++) {
        printf("(%.2f, %.2f)\n", x[i], y[i]);
    }

    return 0;
}
