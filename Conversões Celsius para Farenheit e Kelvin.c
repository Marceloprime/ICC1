#include <stdio.h>
#include <stdlib.h>


int main(){

	float celsius;
	float farenheit;
	float kelvin;
	scanf("%f", &celsius);
	farenheit = 9 * celsius/5 + 32;
	printf("%.2f F \n", farenheit);
	kelvin = celsius + 273;
	printf("%.2f K \n", kelvin) ;

	return 0;
}
