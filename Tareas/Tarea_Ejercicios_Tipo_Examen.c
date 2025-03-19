#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion, numero;
    float decimal;
    char letra1, letra2, letra3;
    int contador = 0;
    float resultado;  // Corrección del error 2: cambiar a double

    printf("Seleccione una opción:\n");
    printf("1. Calcular el cuadrado de un número\n");
    printf("2. Verificar si un número es par o impar\n");
    printf("3. Calcular la raíz cuadrada de un número decimal\n");
    printf("4. Contar cuántas vocales hay en tres letras ingresadas\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese un número: \n"); 
            scanf("%d", &numero);  // Corrección del error 1: formato correcto
            resultado = pow(numero, 2.0);
            printf("El cuadrado de %d es %f\n", numero, resultado);  // Corrección del error 3: %.2f para double
            break;

        case 2:
            printf("Ingrese un número: \n");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
                printf("El número es par.\n");  // Corrección del error 4: agregar \n
            } else {
                printf("El número es impar.\n");
            }
            break;

        case 3:
            printf("Ingrese un número decimal: \n");
            scanf("%f", &decimal);
            if (decimal >= 0) {
                decimal = sqrt(decimal);
                printf("La raíz cuadrada es: %f\n", decimal);
            } else {
                printf("No se puede calcular la raíz cuadrada de un número negativo.\n");
            }
            break;

        case 4:
            contador = 0;  // Corrección del error 9: inicializar contador dentro del case
            printf("Ingrese tres letras separadas por espacios: \n");
            scanf(" %c %c %c", &letra1, &letra2, &letra3);  // Corrección del error 7: espacio antes de %c
            
            if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u' ||
                letra1 == 'A' || letra1 == 'E' || letra1 == 'I' || letra1 == 'O' || letra1 == 'U') {
                contador++;
            }
            if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u' ||
                letra2 == 'A' || letra2 == 'E' || letra2 == 'I' || letra2 == 'O' || letra2 == 'U') {
                contador++;
            }
            if (letra3 == 'a' || letra3 == 'e' || letra3 == 'i' || letra3 == 'o' || letra3 == 'u' ||
                letra3 == 'A' || letra3 == 'E' || letra3 == 'I' || letra3 == 'O' || letra3 == 'U') {
                contador++;
            }
            printf("Se ingresaron %d vocales.\n", contador);
            break;

        default:
            printf("Opción no válida\n");  // Corrección del error 10: agregar \n
    }
    return 0;
}
