#include <stdio.h>
#include <math.h>

// Función para convertir grados Celsius a Kelvin
void celsius_a_kelvin() {
    double celsius, kelvin;
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%lf", &celsius);
    kelvin = celsius + 273.15;
    printf("Temperatura en Kelvin: %.2lf K\n", kelvin);
}

// Función para convertir coordenadas cartesianas a cilíndricas
void cartesianas_a_cilindricas() {
    double x, y, z, r, theta;
    printf("Ingrese las coordenadas cartesianas (x, y, z): ");
    scanf("%lf %lf %lf", &x, &y, &z);

    r = sqrt(x*x + y*y);
    theta = atan2(y, x);  // Ángulo en radianes

    printf("Coordenadas cilíndricas:\n");
    printf("r = %.2lf\n", r);
    printf("θ = %.2lf rad\n", theta);
    printf("z = %.2lf\n", z);
}

// Función para convertir coordenadas cartesianas a esféricas
void cartesianas_a_esfericas() {
    double x, y, z, r, theta, phi;
    printf("Ingrese las coordenadas cartesianas (x, y, z): ");
    scanf("%lf %lf %lf", &x, &y, &z);

    r = sqrt(x*x + y*y + z*z);
    theta = atan2(y, x);       // Ángulo en radianes
    phi = acos(z / r);         // Ángulo en radianes

    printf("Coordenadas esféricas:\n");
    printf("r = %.2lf\n", r);
    printf("θ = %.2lf rad\n", theta);
    printf("φ = %.2lf rad\n", phi);
}

int main() {
    int opcion_principal;
    printf("Seleccione una opción:\n");
    printf("1. Convertir temperatura (Celsius a Kelvin)\n");
    printf("2. Convertir coordenadas cartesianas\n");
    scanf("%d", &opcion_principal);

    if (opcion_principal == 1) {
        celsius_a_kelvin();
    } else if (opcion_principal == 2) {
        int opcion_coordenadas;
        printf("Seleccione el tipo de conversión de coordenadas:\n");
        printf("1. A coordenadas cilíndricas\n");
        printf("2. A coordenadas esféricas\n");
        scanf("%d", &opcion_coordenadas);

        if (opcion_coordenadas == 1) {
            cartesianas_a_cilindricas();
        } else if (opcion_coordenadas == 2) {
            cartesianas_a_esfericas();
        } else {
            printf("Opción no válida.\n");
        }
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}
