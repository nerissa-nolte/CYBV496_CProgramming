/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 7 - this program takes a number from the user inclusive of 0 - 10 
	 and returns the Fibonacci value of a given number.                    */

#include <stdio.h>

int fibonacci(int n);

int main() {

	int userResponse;

	do {
		printf("Please enter a number between 0 and 10: "); // include 0 and 10 for this problem
		scanf_s("%d", &userResponse);

		if (userResponse >= 0 && userResponse <= 10)
		{
			printf("\nYou entered a number in the correct range\n");
		
			printf("\nThe Fibonacci value of %d is %d\n\n", userResponse, fibonacci(userResponse) );

		}
		else {
			printf("\nYou provided a number that is outside of the range \n\n");

		}

	} while (userResponse < 0 || userResponse > 10);
	
	return 0;
}

int fibonacci(int n) {
	int i, a, b, result;
	if (n == 0) {
		return 0; // Special case
	
	}
	else {
		a = 0;
		b = 1;
		result = 0;
		for (i = 1; i < n; i++) {
			result = a + b;
			a = b;
			b = result;			
		}
		return result;
	}
		
}
