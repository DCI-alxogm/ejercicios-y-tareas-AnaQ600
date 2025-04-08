#include <stdio.h>

int main() {
    
    int n = 20;

    float tempInicial, tempFinal;
    
    
    printf("Ingrese la temperatura inicial en grados Celsius: ");
    scanf("%f", &tempInicial);

    printf("Ingrese la temperatura final en grados Celsius: ");
    scanf("%f", &tempFinal);

    
    float delta = (tempFinal - tempInicial) / n;

    printf("\nTemperaturas de Celsius a Kelvin:\n");
    printf("----------------------------------\n");

    for (int i = 0; i <= n; i++) {
        float tempCelsius = tempInicial + i * delta;
        float tempKelvin = tempCelsius + 273.15;
        printf("Paso %d: %.2f °C = %.2f K\n", i, tempCelsius, tempKelvin);
    }

    return 0;
}

