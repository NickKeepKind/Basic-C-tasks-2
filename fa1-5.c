/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 1 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();
int SecondVersion();

int main()
{
    FirstVersion();     // My unique version, a little pampered ha-ha (and yep, i know how switch and break work. Just thought i'd show a little creativity.)
    SecondVersion();    // The good one

    return 0;
}

/* 2-nd version */
int SecondVersion() 
{
    int answer, attempts = 0;
    const int correctAnswer = 2; 

    printf("What is the capital of France?\n");
    printf("1. Berlin\n");
    printf("2. Paris\n");
    printf("3. London\n");
    printf("4. Madrid\n");

    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);

        if (answer != correctAnswer) {
            printf("Incorrect. Please try again.\n");
            attempts++;
        }
    } while (answer != correctAnswer);

    printf("Correct! Total attempts: %d\n", attempts);

    return 0;
}

/* 1-st version */
int FirstVersion() 
{
    int answer, attempts = 0;
    const int correctAnswer = 4;
    const int maxAttempts = 3;

    printf("TAKE THE FRIENDSHIP TEST HOORAY!\nSo the quastion is: 'Am I stupid?'\n");
    printf("1. Precisely!\n");
    printf("2. I'm pretty sure.\n");
    printf("3. I'm not really sure...\n");
    printf("4. Definitely not!\n");

    while (attempts < maxAttempts) 
    {
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);

        if (answer == correctAnswer)
        {
            printf("Yay! (◠‿◠) You got it right! Friendship status:\033[32m Confirmed!\033[0m\nThanks for believing in me. You only needed %d attempts!\n", attempts + 1);
            return 0;
        }

        attempts++;
        switch (attempts) 
        {
            case 1:
                printf("Oops! (¬_¬) That's not it. But don't worry, everyone gets a second chance! Give it another go!\n");
                break;
            case 2:
                printf("Hmmm, still not right... (ಠ_ಠ) Let's try this one last time. I believe in you!\n");
                break;
            case 3:
                printf("Oh no! (╯°□°)╯︵ ┻━┻ We're out of attempts. But hey, it's the effort that counts, right? Friendship is all about learning and growing together!\n");
                return 0;
        }
    }

    return 0;
}