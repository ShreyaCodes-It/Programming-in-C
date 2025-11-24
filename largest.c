/* Q 16 )write a program to input three numbers and check the largest among them using if else*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf ("enter three numbers : ");
    scanf("%d %d %d", &a,&b,&c);
    if (a>=b && a>=c)
    printf (" the largest of them is %d\n", a);
    else if (b>=a && b >=c )
    printf ("the largest among them is %d\n", b);
    else
    printf ("the largest of them is %d\n", c);
    return 0; 
}