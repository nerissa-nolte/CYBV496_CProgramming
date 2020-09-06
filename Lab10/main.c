/* | Nerissa N.Nolte | University of Arizona | CYBV 496 | Dr.Meky |
     Lab 10 - This program receives input of matrix dimensions, 
	 displays back the matrices in matrix format, and displays the
	 addition of the matrices.                                      */

#include <stdio.h>
#define MAXROWS 10
#define MAXCOLUMNS 10

int main() {
	int numRows, numColumns, flag;
	int firstArray[MAXROWS][MAXCOLUMNS]; // must be constant
	int secondArray[MAXROWS][MAXCOLUMNS]; // must be constant

	printf("************************************************************\n");
	printf("*** This program finds performs addition of two matrices ***\n");
	printf("************************************************************\n");

	printf("\nPlease enter the number of rows in the matrix: ");
	scanf_s("%d",&numRows);
	printf("Please enter the number of columns in the matrix: ");
	scanf_s("%d", &numColumns);


	printf("\nPlease enter the elements of the first matrix:\n");
	for (int i = 0; i < numRows; ++i)
		for (int j = 0; j < numColumns; ++j) {
			printf("Element [%d][%d] = ", i, j);
			scanf_s("%d", &firstArray[i][j]);
		}

	printf("\nPlease enter the elements of the second matrix:\n");
	for (int i = 0; i < numRows; ++i)
		for (int j = 0; j < numColumns; ++j) {
			printf("Element [%d][%d] = ", i, j);
			scanf_s("%d", &secondArray[i][j]);
		}

	flag = (numRows - (numRows - 1));

	printf("\nThe elements of the first matrix are:\n");
	for (int i = 0; i < flag; ++i) {
		for (int j = 0; j < numColumns; ++j) {
			printf("%d ", firstArray[i][j]);
		}
		flag = numRows;
		printf("\n");
	}

	printf("\nThe elements of the second matrix are:\n");
	for (int i = 0; i < flag; ++i) {
		for (int j = 0; j < numColumns; ++j) {
			printf("%d ", secondArray[i][j]);
		}
		flag = numRows;
		printf("\n");
	}

	printf("\nThe addition of the two matrices are:\n");
	for (int i = 0; i < flag; ++i) {
		for (int j = 0; j < numColumns; ++j) {
			printf("%d ", (firstArray[i][j] + secondArray[i][j]));
		}
		flag = numRows;
		printf("\n");
	}

	return 0;
}

// could refine this code to make more efficient, add 
