/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 2 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int taskOne();
int taskTwo();
int taskThree();
int taskFour();
int taskFive();
int taskSix();
int taskSeven();
int taskEight();

int main()
{
    int taskOne();      // BORED
    int taskTwo();      // AND
    int taskThree();    // WEARTY
    int taskFour();     // I'VE
    int taskFive();     // LOST
    int taskSix();      // ALL
    int taskSeven();    // MY 
    int taskEight();    // ENTHUSIASM
    // Okay, it's not that bad, but this assignment was too terrible, let's be honest...

    return 0;
}

// Να γραφεί αλγόριθμος που εκτυπώνει 1000 φορές το μήνυμα «Γεια Χαρά»
int taskOne() 
{
    for (int i = 0; i < 1000; i++) 
    {
        printf("Howdy\n");
    }
    return 0;
}

// Να γραφεί αλγόριθμος που διαβάζει και εκτυπώνει 1000 αριθμούς που δίνονται ως είσοδος από τον χρήστη
int taskTwo() 
{
    int number;
    for (int i = 0; i < 1000; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        printf("You entered: %d\n", number);
    }
    return 0;
}

// Να γραφεί αλγόριθμος που διαβάζει 1000 ακέραιους από τον χρήστη και εκτυπώνει τους αρτίους μόνο που δόθηκαν
int taskThree()
{
    int number;
    for (int i = 0; i < 1000; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 != 0) 
        {
            printf("Odd number: %d\n", number);
        }
    }
    return 0;
}

// Να γραφεί αλγόριθμος που εκτυπώνει τους 1000 πρώτους ακεραίους ξεκινώντας από το 1
int taskFour() 
{
    for (int i = 1; i <= 1000; i++) 
    {
        printf("%d\n", i);
    }
    return 0;
}

// Να γραφεί αλγόριθμος που εκτυπώνει όλους τους αρτίους στο διάστημα 1 εως 1000
int taskFive() 
{
    for (int i = 1; i <= 1000; i++) 
    {
        if (i % 2 != 0) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

// Να γραφεί αλγόριθμος που εκτυπώνει όλους τους αρτίους στο διάστημα 1 εως 1000 με αντίστροφη σειρά
int taskSix() 
{
    for (int i = 1000; i >= 1; i--) 
    {
        if (i % 2 == 0) // Change the != (from above) to ==
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

// Να γραφεί αλγ. που να προσθέτει τους 10 βαθμούς στα μαθήματα του τετράμηνου και να παρουσιάζει το άθροισμα τους και το μέσο όρο τους
int taskSeven() 
{
    int score, sum = 0;
    for (int i = 0; i < 4; i++) 
    {
        printf("Enter score for month %d: ", i + 1);
        scanf("%d", &score);
        sum += score + 10; // Adding 10 points to each score
    }
    printf("Total sum: %d\n", sum);
    printf("Average: %f\n", sum / 4.0);
    return 0;
}

// Να γραφεί αλγ. που να προσθέτει τους ακέραιους αριθμούς από 1 μέχρι 100.
int taskEight() 
{
    int sum = 0;
    for (int i = 1; i <= 100; i++) 
    {
        sum += i;
    }
    printf("Sum of integers from 1 to 100 is: %d\n", sum);
    return 0;
}