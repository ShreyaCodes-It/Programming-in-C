/* Q19)write a program to classify a triangle as equilateral,isoceles or scalene based on its side lenghth*/
#include <stdio.h>
int main () {
    int a,b,c;
    printf (" enter three sides of a triangle");
    scanf (" %d %d %d ", &a , &b ,&c );
    if ( a == b && b == c && c == a)
     printf (" the triangle is equilateral");
     else if ( a  == b || b == c || c==a )
     printf (" the triangle is isoceles");
     else if ( a != b && b != c && c != a )
     printf ("the triangle is scalene");
     else
     printf ("invalid input ");
     return 0;
}
