/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
void firstTask();
void secondTask();
void thirdTask();

int main() 
{
    firstTask();
    secondTask();
    thirdTask();

    return 0;
}

// Function for the first task
void firstTask() 
{
    // Original while loop
    /*
    int Plithos = 0;
    while (Plithos <= 5) 
    {
        printf("%d\n", Plithos);
        Plithos = Plithos + 1;
    }
    */

    // Converted for loop
    for (int Plithos = 0; Plithos <= 5; Plithos++) 
    {
        printf("%d\n", Plithos);
    }
}

// Function for the second task
void secondTask() 
{
    // Original while loop
    /*
    int N = 5;
    while (N > 0) 
    {
        printf("%d\n", N);
        N = N - 1;
    }
    */

    // Converted for loop
    for (int N = 5; N > 0; N--)
    {
        printf("%d\n", N);
    }
}

// Function for the third task
void thirdTask() 
{
    // Original while loop
    /*
    int Arithmos = 0, sum = 0, i = 0;
    while (i <= 5) 
    {
        printf("give number: ");
        scanf("%d", &Arithmos);
        sum = sum + Arithmos;
        i = i + 2;
    }
    */

    // Converted for loop
    int Arithmos, sum = 0;
    for (int i = 0; i <= 5; i += 2) 
    {
        printf("give number: ");
        scanf("%d", &Arithmos);
        sum += Arithmos;
    }
}