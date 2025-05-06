#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    FILE *input, *output;
    int n;
    double lower, upper;

    
    input = fopen("entrada.txt", "r");
    if (input == NULL) {
        perror("Error al abrir archivo de entrada");
        return 1;
    }

   
    fscanf(input, "%d %lf %lf", &n, &lower, &upper);
    fclose(input);

   
    output = fopen("parabola.txt", "w");
    if (output == NULL) {
        perror("Error al abrir archivo de salida");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        double x = lower + i * (upper - lower) / (n - 1);
        double y = x * x + 1;
        fprintf(output, "x = %.4f, f(x) = %.4f\n", x, y);
    }

    fclose(output);
    return 0;
}

