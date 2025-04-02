#include <stdio.h>

int main() {
    int inicio, fin;
    int primos[100], count;
    
    printf("Ingrese el intervalo (donde inicia y cual es el fin): ");
    scanf("%d %d", &inicio, &fin);


    if (inicio > fin) {
        int temp = inicio;
        inicio = fin;
        fin = temp;
    }

    count = 0;
    int i = inicio;

    while (count <= 100) {
        int esPrimo = 1;
        if (i < 2) esPrimo = 0;
        for (int j = 2; j * j <= i && esPrimo; j++) {
            if (i % j == 0) esPrimo = 0;
        }

        if (esPrimo) {
            primos[count++] = i;
        }

        i++;
     
        if (i > fin) break;
    }

    if (count > 100) {
        printf("Demasiados números primos en el intervalo. Intente de nuevo.\n");
    } else {
        printf("Números primos encontrados: \n");
        
        int i = 0;
      
        while (i < count) {
            for (int j = 0; j < 20 && i < count; j++, i++) {
                printf("%d ", primos[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
