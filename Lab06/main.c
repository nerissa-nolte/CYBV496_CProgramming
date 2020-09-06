/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
	 Lab 6 - this program receives input of 3 numbers separated by spaces, tests for
	 positive number, then tests if a triangle could be formed, if so which type.    */

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int x, y, z;

	do {
		printf("Please enter three positive numbers, separated by spaces\n");
		printf("that could represent the sides of a triangle : ");
		scanf("%d %d %d", &x, &y, &z); // warning: depracated

		if (x > 0 && y > 0 && z > 0) 
		{
			if (x + y < z || x + z < y || y + z < x) 
			{
				printf("\nThe entered lengths cannot form a triangle\n");
			}
			else if (x == y && y == z) 
			{
				printf("\nThe entered lengths could form an equilateral triangle\n");
			}
			else if (x == y || y == z || x == z) 
			{
				printf("\nThe entered lengths could form an isoceles triange\n");
			}
			else {
				printf("\nThe entered lengths could form a scalene triangle\n");
			}


		}
		else {
			printf("\nPlease use only positive numbers\n\n");

		}

		
	} while (x <= 0 || y <= 0 || z <= 0);

	return 0;
}