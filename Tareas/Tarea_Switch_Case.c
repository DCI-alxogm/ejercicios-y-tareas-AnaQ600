#include<stdio.h>
#include<math.h>

int main ()
{
	int op;
	float x,y,z;
        float r, theta, phi;
        float rc, thetac, zeta;
        float valor;
	printf("Seleccione la opcion '1' para realizar Transafromacion de coordenadas o la opcion'2'para realizar la Transformacion de sistemas de unidades del SI al sistema ingles\n");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
            printf("Seleccione la conversión:\n");
            printf("1. Cartesianas a esféricas\n");
            printf("2. Esféricas a cartesianas\n");
            printf("3. Cartesianas a cilíndricas\n");
            printf("4. Cilíndricas a cartesianas\n");
            printf("Opción: ");
            scanf("%d", &op);
                
                switch (op)
                {
                	case 1: 
                	printf("Introduce las coordenadas cartesianas:\n");
                	scanf("%f %f %f", &x, &y, &z);
                	
                	r=sqrt((x*x) + (y*y) + (z*z));
			theta=atan(y/x);
			phi=acos(z / sqrt ((x*x) + (y*y) + (z*z)));
			
			printf("Las coordenadas esfericas son: r=%f, theta=%f, phi=%f\n", r, theta, phi);
			break;
			
			case 2:
			printf("Introduce las coordenadas esfericas:\n");
			scanf("%f %f %f", &r, &theta, &phi);
			
			x = r * sin(phi) * cos(theta);
    			y = r * sin(phi) * sin(theta);
    			z = r * cos(phi);
    			
    			printf("Las coordenadas cartesianas son: x=%f, y=%f, z=%f\n", x, y, z);
    			break;
    			
    			case 3:
    			printf("Introduce las coordenadas cartesianas:\n");
    			scanf("%f %f %f", &x, &y, &z);
    			
    			 rc = sqrt(x*x + y*y);
    			 thetac = atan2(y, x);
    			 zeta=z;

   			 printf("Coordenadas cilíndricas: rc = %f, thetac = %f, z= %f\n", r, theta, zeta);
   			 break;
   			 
   			 case 4:
   			 printf("Introduce las coordenadas cilindricas:\n");
                    	 scanf("%f %f %f", &rc, &thetac, &zeta);
                    	 x = r * cos(theta);
    			 y = r * sin(theta);
			 z=zeta;
    printf("Coordenadas cartesianas: x = %f, y = %f, z = %f\n", x, y, z);
    			 break;
    		default:
    			printf("Opcion invalida\n");
 
                }
                break;
	case 2:
	
           printf("Selecciona una cantidad a convertir:\n");
    	   printf("1. Metros a pies\n");
    	   printf("2. Kilogramos a libras\n");
    	   printf("3. Litros a galones\n");
    	   printf("4. Celsius a Fahrenheit\n");
    	   printf("Opción: ");
    	   scanf("%d", &op);

    printf("Introduce el valor: ");
    scanf("%f", &valor);

    switch (op) {
        case 1:
            printf("%f metros = %f pies\n", valor, valor * 3.28084);
            break;
        case 2:
            printf("%f kg = %f libras\n", valor, valor * 2.20462);
            break;
        case 3:
            printf("%f litros = %f galones\n", valor, valor * 0.264172);
            break;
        case 4:
            printf("%f °C = %f °F\n", valor, (valor * 9/5) + 32);
            break;
        default:
            printf("Opción inválida.\n");
    } 	
	}	
return(0);
}
