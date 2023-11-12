/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The smart one
    SecondVersion();    // The good one

    return 0;
}

/* 2-nd version */
int SecondVersion() 
{
    int N, numberOfStudents, totalCost;
    char schoolName[100];

    printf("Enter the number of schools: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        printf("Enter the name of school #%d: ", i + 1);
        scanf(" %99[^\n]", schoolName); // Read the school name, up to 99 char's

        printf("Enter the number of students for %s: ", schoolName);
        scanf("%d", &numberOfStudents);

        if (numberOfStudents <= 20) 
        {
            totalCost = numberOfStudents * 10;
        } 
        else if (numberOfStudents <= 40) 
        {
            totalCost = (numberOfStudents - 5) * 10;
        } 
        else 
        {
            totalCost = (numberOfStudents - 9) * 10;
        }

        printf("%s will pay: %d euros\n", schoolName, totalCost);
    }

    return 0;
}

/* 1-st version */
int FirstVersion()
{
    int N, numberOfStudents, totalCost;
    char schoolName[100];

    printf("Enter the number of schools: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        printf("Enter the name of school #%d: ", i + 1);
        scanf(" %99[^\n]", schoolName); // Read the school name, up to 99 char's

        printf("Enter the number of students for %s: ", schoolName);
        scanf("%d", &numberOfStudents);

        // A better and smarter version of what will be written above.
        totalCost = numberOfStudents <= 20 ? numberOfStudents * 10 :
                    numberOfStudents <= 40 ? (numberOfStudents - 5) * 10 :
                                             (numberOfStudents - 9) * 10;

        printf("%s will pay: %d euros\n", schoolName, totalCost);
    }

    return 0;
}