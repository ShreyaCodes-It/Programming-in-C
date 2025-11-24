/* Q 18 ) write a program that accepts a percentage and assigns a grade based on that .*/
#include <stdio.h>
int main () {
    int n;
    printf ("enter your percentage :- ");
    scanf ("%d", &n );
    if (n >= 90 && n <= 100)
        printf (" GRADE A\n");
        else if ( n >= 80 && n <= 89)
        printf ("GRADE B\n");
        else if ( n >= 70 && n <= 79)
        printf ("GRADE C\n");
        else if ("n >= 60 && n <= 69")
        printf (" GRADE D\n");
        else if (n >= 0 && n < 60)
        printf (" GRADE F\n");
        else 
        printf ("invalid input");
        return 0;
    }
