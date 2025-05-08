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
 
   

    double *x_values = (double *)malloc(n * sizeof(double));

    double *y_values = (double *)malloc(n * sizeof(double));
 
    if (x_values == NULL || y_values == NULL) {

        perror("Error al asignar memoria");

        return 1;

    }
 
    

    for (int i = 0; i < n; i++) {

        x_values[i] = lower + i * (upper - lower) / (n - 1);

        y_values[i] = x_values[i] * x_values[i] + 1;

    }
 
    output = fopen("parabola.txt", "w");

    if (output == NULL) {

        perror("Error al abrir archivo de salida");

        free(x_values);

        free(y_values);

        return 1;

    }
 
    

    for (int i = 0; i < n; i++) {

        fprintf(output, "x = %.4f, f(x) = %.4f\n", x_values[i], y_values[i]);

    }
 
    

    free(x_values);

    free(y_values);

    fclose(output);
 
    return 0;

}

 
