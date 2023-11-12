/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // The smart one
    SecondVersion();    // Reworked version from the shcool

    return 0;
}

int SecondVersion() 
{
    int countK = 0, countC = 0, i = 0; 
    float sumK, sumC;
    char flip;
    
    while (i < 10) 
    {
        printf("Enter result of flip #%d (K for heads or C for tails): ", i + 1);
        scanf(" %c", &flip);

        if (flip == 'K' || flip == 'k') 
        {
            countK++;
            i++;
        } 
        else if (flip == 'C' || flip == 'c') 
        {
            countC++;
            i++;
        } 
    }
    sumK = ((float)countK / 10.0) * 100;
    sumC = ((float)countC / 10.0) * 100;

    printf("Heads (K) came up %d times (%.2f%%).\n", countK, sumK);
    printf("Tails (C) came up %d times (%.2f%%).\n", countC, sumC);

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int countK = 0, countC = 0;
    char flip;

    for (int i = 0; i < 10; i++) 
    {
        printf("Enter result of flip #%d (K for heads or C for tails): ", i + 1);
        scanf(" %c", &flip);

        if (flip == 'K' || flip == 'k')
        {
            countK++;
        }
        else if (flip == 'C' || flip == 'c')
        {
            countC++;
        }
        else
        {
            printf("Invalid input. Please enter only K or C.\n");
            i--; // Decrement i to redo this iteration
            continue;
        }
    }

    printf("Heads (K) came up %d times (%.2f%%)\n", countK, (countK / 10.0) * 100);
    printf("Tails (C) came up %d times (%.2f%%)\n", countC, (countC / 10.0) * 100);

    return 0;
}