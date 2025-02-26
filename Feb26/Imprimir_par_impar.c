#include<stdio.h>

int main()
{
	int numero,residuo;
	char respuesta[2];
	printf("Ingresa los numeros que quieras saber si son par o impar\n");
	scanf("%d", &numero);
	residuo=numero%2;
	if(residuo==0)
	{
	printf("%d es par\n",numero);
	}
	else
	{
	printf("%d es impar\n",numero);
	}
	printf("Quieres imprimir otro numero?\n");
	scanf("%s",respuesta);
	if(respuesta=='si')
	{
	printf("No puedo realizar esta acción por ahora\n");	
	}
	else
	{
	printf("Estas saliendo del programa...\n");
	}

return(0);
}