#include<stdio.h>
#include<stdlib.h>

int main(){

	int num, i, *ptr;

	printf("Introduce el valor de la variable num");
	scanf("%d", &num);

	ptr= (float *) malloc ( num * sizeof (float));

	printf("Size of local_int: %zu bytes\n", sizeof(float));
	printf("Sise of local_int: %zu bytes\n", sizeof(ptr));

	printf ("Introduce la secuencia de %d numeros\n", num);

	for (i=0;i<num;i++){

		scanf("%d",ptr+i);
		}

	printf("Los numeros ingresados y almacenados en la dirección de la memoria\n");

	for(i=0;i<num;i++){

		printf("%p : \t %f\n", (ptr+i), *(ptr +i));
		}
}