#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion;
    float base, altura, area; 
    int numero, suma, digito;
    
    printf("Seleccione una opción:\n");
    printf("1. Calcular el área de un rectángulo\n");
    printf("2. Convertir grados Celsius a Fahrenheit\n");
    printf("3. Verificar si un número es múltiplo de otro\n");
    printf("4. Sumar los dígitos de un número de dos cifras\n");
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1:
            printf("Ingrese la base y la altura del rectángulo: ");
            scanf("%f %f", &base, &altura);
            area = base * altura;
            printf("El área del rectángulo es: %.2f\n", area);
            break;

        case 2:
            printf("Ingrese la temperatura en grados Celsius: ");
            scanf("%f", &base);
            float TF = (base * 9 / 5) + 32;
            printf("La temperatura en Fahrenheit es: %.2f\n", TF);
            break;

        case 3:
            printf("Ingrese dos números: ");
            scanf("%d %d", &numero, &digito);
            if (digito != 0) { // Evitar división entre 0
                if (numero % digito == 0) {
                    printf("%d es múltiplo de %d.\n", numero, digito);
                } else {
                    printf("%d no es múltiplo de %d.\n", numero, digito);
                }
            } else {
                printf("No se puede dividir por cero.\n");
            }
            break;
            
        case 4:
            printf("Ingrese un número de dos cifras: ");
            scanf("%d", &numero);
            if (numero >= 10 && numero <= 99) {
                suma = (numero / 10) + (numero % 10);
                printf("La suma de los dígitos es: %d\n", suma);
            } else if (numero < 10) {
                printf("El número es de una sola cifra, no se puede realizar la operación\n");
            } else {
                printf("El número tiene más de dos cifras, no se puede realizar la operación\n");
            }
            break;

        default:
            printf("Opción no válida\n");
    }
    
    return 0;
}
