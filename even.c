/* Q 28 )write a program to print even numbers from 1 to n*/
#include <stdio.h>
int main (){
    int n ,i;long pro = 1;
    printf ("enter a number : ");
    scanf ("%d",&n);
    for ( i = 2 ; i <= n ; i = i + 2){
        pro = pro * i;
    }
    printf (" product of even numbers from 1 to %d = %ld\n",n,pro);
    return 0;
}