/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();

int main()
{
    FirstVersion();     // The good version

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    float weight, total = 0;
    int count = 1;

    do {
        printf("Enter the weight of the %d parcel (Enter 0 or a negative number to stop): ", count);
        scanf("%f", &weight);

        if (weight > 0) 
        {
            total += weight;
            count++;
        }
    } while (weight > 0);

    printf("Total weight of all parcels: %.2f\n", total);
    printf("Total number of parcels: %d\n", count); // I add this for debuging

    return 0;
}