/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 2 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The smart version
    SecondVersion();    // The good version

    return 0;
}

/* 2-nd version */
int SecondVersion()
{
    int number;

    printf("Enter a number (0 to stop): ");
    scanf("%d", &number);

    while (number != 0) 
    {
        number * 2;
        printf("Double: %d\n", number);

        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
    }

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int number;

    while (1) 
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);

        if (number == 0) break;

        printf("Double: %d\n", number * 2);
    }

    return 0;
}