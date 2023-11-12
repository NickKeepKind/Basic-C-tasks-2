/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();

// QUASTION FOR THE TEACHER!!! 
/* Why are the tasks not arranged in any way at all in ascending order of difficulty?
The previous task compared to this task was damnably and disproportionately difficult
Especially considering the fact that someone unlike me has been coding for two weeks at most.
This seems insanely weird and wrong to me. */

int main()
{
    FirstVersion();     // The good one

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int number, oddCount = 0;

    printf("Enter integers (0 to stop): ");
    scanf("%d", &number);

    while (number != 0) 
    {
        if (number % 2 != 0) oddCount++;
        // Yep we also can write it like this:
        /*
        {
            oddCount++;
        }
        */
        printf("Enter next integer (0 to stop): ");
        scanf("%d", &number);
    }

    printf("Number of odd integers entered: %d\n", oddCount);

    return 0;
}