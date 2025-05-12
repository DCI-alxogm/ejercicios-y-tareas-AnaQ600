#include <stdio.h>
#include <string.h>

int main()
{
    int numero, residuo;
    char opc[3];  // Increased the size to 3 to handle the "si" or "no" input

leernumero:
    printf("Introduce un numero para saber si es par o impar\n");
    scanf("%i", &numero);
    residuo = numero % 2;

    if (residuo == 0)
    {
        printf("El numero %i es par\n", numero);
    }
    else
    {
        printf("El numero %i es impar\n", numero);
    }

    printf("¿Quieres revisar otro numero? (si/no)\n");
    scanf("%s", opc); 
    
    if (strcmp(opc, "si") == 0)
    {
        goto leernumero;
    }
    else if (strcmp(opc, "no") == 0)
    {
        printf("Hasta la proxima\n");
    }
    else
    {
        printf("Solo acepto si o no\n");
    }

    return 0;
}
