/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The good one
    SecondVersion();    /* I just don't like that there are so many lines of code in the
    1-st version, so i slightly rewrote it. (it took a much time but it was worth it!) */

    return 0;
}

/* 2-nd version */
int SecondVersion() 
{
    int grade, count = 0, excellent = 0, sum = 0;

    while (printf("Enter grade (-1 to finish): "), scanf("%d", &grade), grade != -1) 
    {
        if (grade >= 0 && grade <= 20) 
        {
            sum += grade;
            count++;
            if (grade > 18) excellent++;
        }
        else if (grade > 20) printf("Invalid grade.\n");
    }

    if (count)
    {
        printf("Average: %.2f\nExcellent: %d\n", (float)sum / count, excellent);
    }
    else printf("No grades were entered.\n");

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int grade, count = 0, excellentCount = 0, sumOfGrades = 0;
    float average;

    printf("Enter grades (0-20, -1 to finish): ");
    while (scanf("%d", &grade) && grade != -1)
    {
        if (grade >= 0 && grade <= 20) 
        {
            sumOfGrades += grade;
            count++;

            if (grade > 18) 
            {
                excellentCount++;
            }
        }
        else
        {
            printf("Invalid grade. Please enter a grade between 0 and 20, or -1 to finish: ");
        }

        printf("Enter grades (0-20, -1 to finish): ");
    }

    if (count > 0)
    {
        average = (float)sumOfGrades / count;
        printf("Average grade: %.2lf\n", average);
        printf("Number of excellent students: %d\n", excellentCount);
    } 
    else
    {
        printf("No grades were entered.\n");
    }

    return 0;
}