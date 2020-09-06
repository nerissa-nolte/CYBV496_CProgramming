/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 9 - This program takes user input of one dimensional array, 
	 and finds the maximum and minimum by iterating over the elements in
	 the array, and comparing them against an established max or min.
*/

#include <stdio.h>
#define MAXSIZE 10 // constant to define max array size, be able to change later
int seekElement(int size, int array1[], int valueType);

int main() {
	int numElements, valueType;
	int array1[MAXSIZE]; 

	printf("*******************************************************************************\n");
	printf("*** This program finds maximum and minimum elements in a user defined array ***\n");
	printf("*******************************************************************************\n");

	do {
		printf("\nPlease enter the number of elements to be stored in the array: ");
		scanf_s("%d", &numElements);

		if (numElements <= MAXSIZE) {
			
			printf("Please enter the %d elements in the array:\n", numElements);
			for (int i = 0; i < numElements; ++i) {
				scanf_s("%d", &array1[i]);
			}

			printf("\nMaximum value in the array is: %d", seekElement(numElements, array1, (valueType = 1)));
			printf("\nMinimum value in the array is: %d", seekElement(numElements, array1, (valueType = 2)));

		}
		else {
			printf("Please enter a positive number that is less than %d\n\n", MAXSIZE);
		}
	} while (numElements > MAXSIZE || numElements <=0);

	return 0;
}

int seekElement(int size, int array1[], int valueType) {
	int min = array1[0];
	int max = array1[0];

	if (valueType == 1) {
		for (int i = 1; i < size; ++i) {			
			if (array1[i] > max) {
				max = array1[i];
			}
		}
		return max;
	}
	else if (valueType == 2) {
		for (int i = 1; i < size; ++i) {
			if (array1[i] > max) {
				max = array1[i];
			}
		}
		return min;
	}
}