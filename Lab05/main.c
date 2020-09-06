/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 5 - This program receives numeric input, checks for conditions, and 
	 prints output to the console.                                           */

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int userResponse1, userResponse2;
	
	 do {
		 printf("\nPlease enter a number between 0 and 10: "); // between condition indicates > 0 && < 10
		 scanf("%d", &userResponse1); // warning: depracated

		 if (userResponse1 > 0 && userResponse1 < 10) {
			 if (userResponse1 % 2 == 1) {
				 printf("\nYou entered an odd number\n");
			 }
			 else if (userResponse1 % 2 == 0) {
				 printf("\nYou entered an even number\n");
			 }
			 else {
				 printf("\nThere is an error\n");
			 }
		 }
		 else {
			 printf("\nYou provided a number that is out of the range\n"); // continue the loop unless condition met
		 }
	 	 
	 } while (userResponse1 <= 0 || userResponse1 >= 10);


	 do {
		 printf("\nPlease enter a second number between 0 and 10: "); // between condition indicates > 0 && < 10
		 scanf("%d", &userResponse2); // warning: depracated

		 if (userResponse2 > 0 && userResponse2 < 10) {
			 if (userResponse2 % 2 == 1) {
				 printf("\nYou entered an odd number\n");
			 }
			 else if (userResponse2 % 2 == 0) {
				 printf("\nYou entered an even number\n");
			 }
			 else {
				 printf("\nThere is an error\n");
			 }
		 }
		 else {
			 printf("\nYou provided a number that is out of the range\n"); // continue the loop unless condition met
		 }

	 } while (userResponse2 <= 0 || userResponse2 >= 10);

	 printf("\nSum of %d and %d is %d\n", userResponse1, userResponse2, userResponse1 + userResponse2);
	 printf("\nProduct of %d and %d is %d\n", userResponse1, userResponse2, userResponse1 * userResponse2);

	return 0;
}