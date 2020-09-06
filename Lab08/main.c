/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 8 - this program takes user response to positive number request and
	 tests whether or not the number is a prime number. 

	 Connection to the squaring of prime numbers as the max for modulus eg 5 squared for
	 25, so for the number 25 or lower, % 5 == 0, or for 49 and under % 7 == 0, etc 
	 was discovered on my own.

	 YouTube video tutorial 'Special Programs in C − Check If The Number Is Prime 
	 Number' by user "Neso Academy" introduced the ceiling function to me and I 
	 utilized some of this user's advice to create my program.                     */


#include <stdio.h>
#include <math.h>

void inputOutput();
int PrimOrNot(int n);
int userResponse;

int main() {

	printf("Please enter a positive number: "); 

	do {
		inputOutput();
	}
	while (userResponse <= 0);
	
	return 0;
}

void inputOutput(){

	scanf_s("%d", &userResponse);

	if (userResponse > 0) {
		if (PrimOrNot(userResponse) == 1) {
			printf("\n%d is a prime number\n\n", userResponse);
		}
		else if (PrimOrNot(userResponse) == 0) {
			printf("\n%d is not a prime number\n\n", userResponse);
		}
		else {
			printf("\nERROR");
		}
	}
	else {
		printf("\nPlease enter a number greater than 0: ");
	}
}

int PrimOrNot(int n) {
	int i, flag = 0;
	int result;
	result = ceil(sqrt(n));

	if (n == 0 || n == 1 ) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	for (i = 2; i <= result; ++i) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
		else flag = 1;
	}
	return flag;
	
}