/*Q26 ) write a program to print numbers from 1 to n*/
#include <stdio.h>
int main ()
{
    int n ,i;
    printf ("enter last limit n :-");
    scanf ("%d", &n);
    printf (" numbers from 1 to %d\n are",n );
    for ( i > 0 ; i <= n ; i ++)
    {
        printf ("%d\n",i);
    }
    return 0;
}