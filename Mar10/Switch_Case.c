#include <stdio.h>
#include <string.h>

int main ()
{
	float tem, resultado;
	char op;
	printf("Seleccione la opcion 'a' si desea convertir la temperatura de grados Celsius a Kelvin o la opcion 'b' si desea de Kelvin a Celcius\n");
	scanf("%c",&op);
	switch(op)
	{
		case 'a': 
			printf("Ingrese la temperatura en grados Celsius para convertirla a Kelvin\n");
			scanf("%f",&tem);
			resultado=tem+273.15;
			printf("La temperatura en grados Kelvin es: %f \n", resultado);
		break;

		case 'b':
			printf("Ingrese la temperatura en grados Kelvin para convertirla a Celsius\n");
			scanf("%f",&tem);
			resultado=tem-273.15;
			printf("La temperatura en grados Celsius es: %f \n", resultado);
		break;
	}
	
	printf("Fin\n");
return(0);

}

