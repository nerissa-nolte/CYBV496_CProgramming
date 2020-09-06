/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
   Lab 2 - This program reads temperature in degrees Fahrenheit,
   converts to degrees Celcius, then prints output to the console   */

#include <stdio.h>
#define BASELINE 100 // Define constant to begin for loop 
#define CEILING 300 // Define constant to end for loop 
#define INCREMENT 100 // use as increment in for loop

int main() {

	double celsius, fahr;

	printf("\n\n");
	printf(" ----------------------------------------------------------------- \n");
	printf("         DEGREE IN FAHRENHEIT            DEGREE IN CELSIUS         \n");
	printf(" ----------------------------------------------------------------- \n\n");
	
	for (fahr = BASELINE; fahr <= CEILING; fahr = fahr + INCREMENT) {   
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%20.2f %31.3f \n\n", fahr, celsius);
	}

	printf(" ----------------------------------------------------------------- \n\n\n");

	return 0;
}