/* Q23 ) write a program to calculate library fine based on late days  :*/
#include <stdio.h>
int main()
{
    int d ,fine;
    printf (" enter no of days late :");
    scanf ("%d",&d);
    if ( d >= 5)
    {
    fine = (2 *d);
    }
    else if ( d > 5 && d <= 10 ){
    fine = 10 + ((d-5)*4);
    }
else if ( d >10 && d <= 30){
fine = 10 + (5 *4)+((d-10)*6);
}
else{
printf (" membership cancelled"); 
}
printf ("total fine calculated :Rs. %d\n", fine );
return 0;
}