#include <stdio.h>

int main() {
    
    int n = 20;
    
    float tempC[n], tempK[n];

	 for (int i = 0; i <= n; i++) {
		printf("Ingrese las temperaturas que quiere convertir:\n");
		scanf("%f", &tempC[i]);

		  tempK[i]= tempC[i]+ 273.15;
      		printf("%d \t %f \t %f \n", i, tempC[i], tempK[i]);
    	}
    
   
  
    return 0;
}