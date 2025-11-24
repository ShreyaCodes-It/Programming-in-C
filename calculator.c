/* Q 25 ) write a program to implement basic calculator operations*/
#include <stdio.h>
int main(){
    int a,b,sum,diff,pro,mod ;char ch;float rem;
    printf ("enter two numbers");
    scanf ("%d %d", &a , &b);
    printf ("choose which operation to perform :- + , - , *,/ ,%% ");
    scanf (" %c", &ch);
    switch (ch)
    {
        case '+' :
        sum = a+b;
        printf("sum of the given numbers is %d\n ", sum);
        break;
        case '-' :
        diff = a - b ;
        printf("difference between the given number is %d\n",diff);
        break;
        case '*' :
        pro = a * b ;
        printf ("product of two numbers is %d\n ", pro);
        break;
        case '/' :
        mod = a/b;
        if ( b > 0 )
        printf (" on dividing we get : %d\n ", mod);
        else
        printf ("error : second number cannot be zero");
        break;
        case '%' :
        rem = a%b;
        if ( b > 0)
        printf("result : %f\n",rem);
        else 
        printf ("error second number cannot be zero");
        break;
        default :
        printf (" invalid operator");
        break;
    }
    return 0;
} 