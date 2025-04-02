#include<stdio.h>

int main ()
{
	int num;
	
	do
		{
			printf("Ingrese un numero entero\n");
			scanf("%i",&num);	

			if(num<=0)
			{
				printf("Numero no valido. Intentelo de nuevo. \n");
			}	
		}
	while(num<=0);
			printf("Numero valido: %i\n");

return(0);
}
