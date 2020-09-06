/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 12 - this program will receive user input of two numbers and perform
	 bitwise OR, bitwise AND, right shift and left shift and will output
	 these operations to the console.  
	 See comments on assignment Test condition error                          	 */

#include <stdio.h>

void manageInput1(void);
void manageInput2(void);
int firstNumber, secondNumber;

int main() {

	do {	
		manageInput1();
		if (firstNumber < 100 || firstNumber > 200) {
			printf("You provided a number that is out of the range\n");
		}				
	} while (firstNumber < 100 || firstNumber > 200);	

	do {
		manageInput2();
		if (secondNumber < 100 || secondNumber > 200) {
			printf("You provided a number that is out of the range\n");
		}				
	} while (secondNumber < 100 || secondNumber > 200);

	int a = 0;

	a = firstNumber | secondNumber;
	printf("\nThe result of OR bitwise operation for the two numbers is: %d ", a);

	a = firstNumber& secondNumber;
	printf("\nThe result of AND bitwise operation for the two numbers is: %d", a);

	// following the instruction set, not Test condition sample
	a = firstNumber >> 1;
	printf("\nThe result of right shift bitwise operation with one bit for the first number is: %d ", a);

	// following the instruction set, not Test condition sample
	a = secondNumber << 1;
	printf("\nThe result of left shift bitwise operation with one bit for the second number is: %d \n\n", a); 

	return 0;
}
void manageInput1(void) {
	printf("Please enter a number between 100 and 200: ");
	scanf_s("%d", &firstNumber);
}
void manageInput2(void) {
	printf("Please enter another number between 100 and 200: ");
	scanf_s("%d", &secondNumber);
}