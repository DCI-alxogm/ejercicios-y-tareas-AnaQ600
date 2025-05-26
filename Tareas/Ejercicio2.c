#include <stdio.h>

int main() {
    int arr[6], i, suma = 0;
    int *ptr;

    
    ptr = arr;

    
    printf("Ingresa 6 números:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", ptr + i);
    }

    
    for (i = 0; i < 6; i++) {
        suma += *(ptr + i);
    }

    printf("La suma es: %d\n", suma);

    return 0;
}

