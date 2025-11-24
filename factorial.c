/* Q 29 ) write a pogram to calculate factorial of a number.*/
#include <stdio.h>
int main () 
{
    int n ,i;long fac = 1;
    printf ("enter a number :");
    scanf ("%d", &n);
    if (n  < 0)
    {
        printf (" factorial is not defined for negative numbers.\n");
    }
    else {
        for ( i = 1; i <= n ; i ++ )
        {
            fac = fac * i;
        }
        printf (" factorial = %ld",fac);
    }
    return 0;
}