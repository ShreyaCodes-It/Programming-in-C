/* Q31) write a program to take a number as input and write its binary equivalent*/
# include <stdio.h>
int main ()
{
    int n,bits,i=0;
    printf ("enter a number :- ");
    scanf ("%d",&n);
    printf ("enter number of bits to display:- ");
    scanf ("%d",&bits);
    int binary[bits];
    if ( n == 0){
        printf("binary : 0\n");
        return 0;
    }
    while ( n > 0 && i < bits ){
        binary[i] = n % 2 ;
        n = n / 2;
        i++;
    }
    while ( i < bits ) {
        binary[i] = 0;
        i++;
    }
    printf (" binary ( %d bits) : ", bits);
    for ( int j = bits - 1; j >= 0; j--)
    printf ("%d", binary[j] );
    printf("\n");
    return 0;
}