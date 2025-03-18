#include <stdio.h>
#include <math.h>

int main() {
    int op;
    float x, y, z;
    float r, theta, phi;
    float rc, thetac, zeta;
    float valor;
    float temp, resultado;

    printf("Seleccione una opción:\n");
    printf("1. Transformación de coordenadas\n");
    printf("2. Transformación de unidades del SI al sistema inglés\n");
    printf("3. Conversión de temperaturas\n");
    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Seleccione la conversión:\n");
            printf("1. Cartesianas a esféricas\n");
            printf("2. Esféricas a cartesianas\n");
            printf("3. Cartesianas a cilíndricas\n");
            printf("4. Cilíndricas a cartesianas\n");
            scanf("%d", &op);

            switch (op) {
                case 1: 
                    printf("Introduce las coordenadas cartesianas (x, y, z):\n");
                    scanf("%f %f %f", &x, &y, &z);

                    r = sqrt((x*x) + (y*y) + (z*z));
                    theta = atan2(y, x);
                    phi = acos(z / sqrt((x*x) + (y*y) + (z*z)));

                    printf("Coordenadas esféricas: r = %f, θ = %f, φ = %f\n", r, theta, phi);
                    break;

                case 2:
                    printf("Introduce las coordenadas esféricas (r, θ, φ):\n");
                    scanf("%f %f %f", &r, &theta, &phi);

                    x = r * sin(phi) * cos(theta);
                    y = r * sin(phi) * sin(theta);
                    z = r * cos(phi);

                    printf("Coordenadas cartesianas: x = %f, y = %f, z = %f\n", x, y, z);
                    break;

                case 3:
                    printf("Introduce las coordenadas cartesianas (x, y, z):\n");
                    scanf("%f %f %f", &x, &y, &z);

                    rc = sqrt(x*x + y*y);
                    thetac = atan2(y, x);
                    zeta = z;

                    printf("Coordenadas cilíndricas: rc = %f, θ = %f, z = %f\n", rc, thetac, zeta);
                    break;

                case 4:
                    printf("Introduce las coordenadas cilíndricas (rc, θ, z):\n");
                    scanf("%f %f %f", &rc, &thetac, &zeta);

                    x = rc * cos(thetac);
                    y = rc * sin(thetac);
                    z = zeta;

                    printf("Coordenadas cartesianas: x = %f, y = %f, z = %f\n", x, y, z);
                    break;

                default:
                    printf("Opción inválida\n");
            }
            break;

        case 2:
            printf("Selecciona una cantidad a convertir:\n");
            printf("1. Metros a pies\n");
            printf("2. Kilogramos a libras\n");
            printf("3. Litros a galones\n");
            printf("4. Celsius a Fahrenheit\n");
            scanf("%d", &op);

            printf("Introduce el valor: ");
            scanf("%f", &valor);

            switch (op) {
                case 1:
                    printf("%f metros = %f pies\n", valor, valor * 3.28084);
                    break;
                case 2:
                    printf("%f kg = %f libras\n", valor, valor * 2.20462);
                    break;
                case 3:
                    printf("%f litros = %f galones\n", valor, valor * 0.264172);
                    break;
                case 4:
                    printf("%f °C = %f °F\n", valor, (valor * 9.0 / 5.0) + 32);
                    break;
                default:
                    printf("Opción inválida.\n");
            }   
            break;

        case 3:
            printf("\nTransformación de temperaturas:");
            printf("\n1. Celsius a Kelvin");
            printf("\n2. Kelvin a Celsius");
            printf("\nSeleccione una opción: ");
            scanf("%d", &op);

            printf("Ingrese la temperatura: ");
            scanf("%f", &temp);

            if (op == 1) {
                resultado = temp + 273.15;
                printf("Resultado: %.2lf K\n", resultado);
            } else if (op == 2) {
                resultado = temp - 273.15;
                printf("Resultado: %.2lf °C\n", resultado);
            } else {
                printf("Opción inválida.\n");
            }
            break;

        default:
            printf("Opción inválida.\n");
    }

    return 0;
}

