/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 2 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();

/* 
THE QUASTION:
9. Τι θα εκτυπωθεί μετά την εκτέλεση του παρακάτω αλγορίθμου; 
------------------------------------------------------------
a = 2                   | Επιλέξτε την σωστή απάντηση
b = 3                   | α. 2
while b <= 0:           | β. –4
 b = b + 1              | γ. –1
 a = a + b -1           | δ. 4
print a                 |
------------------------------------------------------------
EVEN BEFORE WRITE A CODE, THE ANSWER IS: α. 2
AFTER TESTING & WRITE A CODE, THE ANSWER IS: α. 2
*/

int main() 
{
    FirstVersion();

    return 0;
}

/* 1-st version */
int FirstVersion()
{
    int a = 2;
    int b = 3;

    while (b <= 0) 
    {
        b = b + 1;
        a = a + b - 1;
    }

    printf("%d\n", a);

    return 0;
}