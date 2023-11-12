/* ΔΟΜΗ ΕΠΑΝΑΛΗΨΗΣ – ΦΥΛΛΟ ΑΣΚΗΣΕΩΝ 2 */

// Libraries declaration
#include <stdio.h>

// Function declaration
int FirstVersion();

/* 
THE QUASTION:
10. Η εκτέλεση του παρακάτω τμήματος αλγορίθμου δίνει για τους θετικούς ακέραιους Α:
------------------------------------------------------------
s = 0; p =0                 |
a = input("Δώσε α :")       | Επιλέξτε την σωστή απάντηση.
while a > 0:                |
 if a % 2 == 1:             | α. Το γινόμενο των περιττών και 0 για τους άρτιους
 s =s + a                   | β. Το άθροισμα των περιττών και το γινόμενο των άρτιων
 else:                      | γ. Το άθροισμα των περιττών και 0 για τους άρτιους 
 p = p * a                  | δ. Το άθροισμα των άρτιων και 0 για τους περιττούς 
 a = input("Δώσε a :")      |
------------------------------------------------------------
EVEN BEFORE WRITE A CODE, THE ANSWER IS: α. Το γινόμενο των περιττών και 0 για τους άρτιους
AFTER TESTING & WRITE A CODE, THE ANSWER IS: α. Το γινόμενο των περιττών και 0 για τους άρτιους
*/

int main() 
{
    FirstVersion();

    return 0;
}

/* 1-st version */
int FirstVersion()
{
    int s = 0, p = 1, a;

    printf("Give a: ");
    scanf("%d", &a);

    while (a > 0) 
    {
        if (a % 2 == 1)
        {
            s = s + a; 
        } 
        else 
        {
            p = p * a;
        }

        printf("Give a: ");
        scanf("%d", &a);
    }

    printf("Sum of odd numbers: %d\n", s);
    printf("Product of even numbers: %d\n", p);

    return 0;
}