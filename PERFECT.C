/*Q42)WRITE A PROGRAM TO CHECK IF A NUMBER IS PERFECT NUMBER*/
#include <stdio.h>
int main() 
{
    int num, i, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum = sum + i;
        }
    }
    if(sum == num) {
        printf("perfect number\n");
    } else {
        printf("not perfect number\n");
    }
    return 0;
}