/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The version i presented the task initially
    SecondVersion();    // The version of the task that i did in the lesson

    return 0;
}

/* 2-nd version */
int SecondVersion()
{
    int age, sumOfAges = 0, count = 0;
    float averageAge;

    printf("Enter age (Enter 0 or a negative number to stop): ");
    scanf("%d", &age);

    while (age > 0) 
    {
        sumOfAges += age;
        count++;

        printf("Enter age (Enter 0 or a negative number to stop): ");
        scanf("%d", &age);
    }

    if (count > 0) 
    {
        averageAge = (float)sumOfAges / count;
        printf("Average age: %.2lf\n", averageAge);
    } 
    else 
    {
        printf("No valid ages were entered.\n");
    }

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int age, sumOfAges = 0, count = 0;
    float averageAge;

    printf("Enter age (Enter 0 or a negative number to stop): ");
    while (scanf("%d", &age) && age > 0) 
    {
        sumOfAges += age;
        count++;
        printf("Enter age (Enter 0 or a negative number to stop): ");
    }

    if (count > 0) 
    {
        averageAge = (float)sumOfAges / count;
        printf("Average age: %.2lf\n", averageAge);
    } 
    else 
    {
        printf("No valid ages were entered.\n");
    }

    return 0;
}