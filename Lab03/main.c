/* | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
     Lab 3 - This program utilizes string functions to manipulate
	 strings, and to count stringlength, using my first and last name. */

#include <stdio.h>
int main() {

	char firstName[8] = "Nerissa"; 
	char lastName[6] = "Nolte";
	char completeName[16] = ""; // make large enough to hold both names, space, \0
	
	strcat(completeName, firstName);
	strcat(completeName, " ");
	strcat(completeName, lastName);

	printf("My first name is %s\n", firstName);
	printf("My first name has %d characters\n", strlen(firstName));
	printf("My last name is %s\n", lastName);
	printf("My last name has %d characters\n", strlen(lastName));
	printf("My complete name is %s\n", completeName);
	printf("My complete name has %d characters \n\n\n", strlen(completeName));
	return 0;
}