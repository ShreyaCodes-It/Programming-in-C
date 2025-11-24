/*Q27 ) write a program to print the sum of first n odd numbers*/
#include <stdio.h>
int main (){
    int i,n,sum=0;
    printf ("enter limit");
    scanf ("%d",n);
    for (i > 0 ;i  <= 2*n - 1 ; i = i + 2){
    sum = sum + i;
    }
    printf ("sum of first %d\n odd numbers = %d\n", n, sum);
return 0;
}