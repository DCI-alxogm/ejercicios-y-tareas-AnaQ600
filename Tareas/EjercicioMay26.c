#include <stdio.h>
#include <math.h>

// 1. Función sin argumentos de entrada ni de salida
void mensajeBienvenida() {
    printf("Bienvenido al programa de ejemplo de funciones en C\n");
}

// 2. Función con argumento de entrada pero sin argumento de salida
void imprimeCuadrado(float x) {
    printf("El cuadrado de %.2f es %.2f\n", x, x * x);
}

// 3. Función con argumento de salida pero sin argumento de entrada
int leerEntero() {
    int n;
    printf("Introduce un número entero: ");
    scanf("%d", &n);
    return n;
}

// 4. Función con argumento de entrada y salida
float promedioArreglo(float arr[], int tam) {
    float suma = 0.0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return suma / tam;
}

int main() {
    mensajeBienvenida(); // Llamada a función tipo 1

    float numero;
    printf("Introduce un número para calcular su cuadrado: ");
    scanf("%f", &numero);
    imprimeCuadrado(numero); // Llamada a función tipo 2

    int entero = leerEntero(); // Llamada a función tipo 3
    printf("Número leído: %d\n", entero);

    float datos[5];
    printf("Introduce 5 números reales:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &datos[i]);
    }
    float prom = promedioArreglo(datos, 5); // Llamada a función tipo 4
    printf("El promedio de los números es: %.2f\n", prom);

    return 0;
}

