#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion;
    float base, altura, area;
    int numero, suma, digito;
    float temperatura, TF;

    printf("1. Seleccione una opcion: \n");
    printf("2. Calcular el area de un rectangulo \n");
    printf("3. Convertir grados Celsius a Fahrenheit \n");
    printf("4. Verificar si un numero es multiplo de otro \n");
    printf("5. Sumar los digitos de un numero de dos cifras \n");

    scanf("%d", &opcion); 

    switch (opcion) {
        case 2: 
            printf("Ingrese la base y la altura del rectangulo: ");
            scanf("%f %f", &base, &altura);
            area = base * altura;
            printf("El area del rectangulo es: %f \n", area);
            break;

        case 3: 
            printf("Ingrese la temperatura en grados Celsius: ");
            scanf("%f", &temperatura); // Cambié "base" por "temperatura"
            TF = (temperatura * 9 / 5) + 32;
            printf("La temperatura en grados Fahrenheit es: %f \n", TF);
            break;

        case 4: 
            printf("Ingrese dos numeros: ");
            scanf("%d %d", &numero, &digito);
            if (numero % digito == 0) { // Corregimos la comparación
                printf("%d es múltiplo de %d. \n", numero, digito);
            } else {
                printf("%d no es múltiplo de %d. \n", numero, digito);
            }
            break;

        case 5: 
            printf("Ingrese un numero de dos cifras: ");
            scanf("%d", &numero);
            if (numero >= 10 && numero <= 99) {
                suma = (numero / 10) + (numero % 10);
                printf("La suma de los digitos es: %d \n", suma);
            } else if (numero < 10) {
                printf("El numero es de una sola cifra, no se puede realizar la operacion\n");
            }
            break;

        default: 
            printf("Opcion no valida\n");
            break;
    }

    return 0;
}
