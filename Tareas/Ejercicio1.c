#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i, suma = 0;

    
    ptr = (int *)malloc(6 * sizeof(int));

    
    if (ptr == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    
    printf("Ingresa 6 números:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &ptr[i]);
    }

   
    for (i = 0; i < 6; i++) {
        suma += ptr[i];
    }

    printf("La suma es: %d\n", suma);

   
    free(ptr);

    return 0;
}

