/*  | Nerissa N. Nolte | University of Arizona | CYBV 496 | Dr. Meky |
      Lab 11 - This program receives student identification and scores from
      the console, and stores that information in an array, computes the
      average, and displays average of all scores to the console.           */

#include <stdio.h>
#include <string.h>

struct Student {
    char firstName[20];
    char lastName[20];
    int ID;
    float finalScore;
};

int i,n = 0;
float total = 0.0;

float displayAverageScore(float scoreTotal, int n);

int main() {

    struct Student st[5] = {"","",0,0.0}; //initialize the array

   for (i = 0; i < 5; ++i) {

        printf("Get the information for student %d", (i+1));
        printf("\nPlease enter your first name: ");
        scanf_s("%s", st[i].firstName, 20);
        printf("Please enter your last name: ");
        scanf_s("%s", st[i].lastName, 20);
        printf("Please enter your ID: ");
        scanf_s("%d", &st[i].ID);
        printf("Please enter your score for exam 1: ");
        scanf_s("%f", &st[i].finalScore);
        printf("\n\n");

        n = (i+1);
        total = total + st[i].finalScore;
   }
   printf("\nThe average value for exam 1 is: %.2f\n\n", displayAverageScore(total, n));

   return 0;
}

float displayAverageScore(float scoreTotal, int n) { 
    float average = 0.0;
    average = scoreTotal / ((float)(n));
    return average;
}



