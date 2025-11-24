/* Q32) write a program to check if a number is palindrome*/
#include <stdio.h>
int main ()
{
    int num,org,rev=0,rem;
    printf (" enter a number :- ");
    scanf ("%d",&num);
    org = num;
    while ( num != 0){
        rem = num % 10 ;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if ( org == rev )
    printf ("%D is a palindrome number\n", org);
    elseprintf ("%d is not a palindrome.\n",org);
    return 0;
}