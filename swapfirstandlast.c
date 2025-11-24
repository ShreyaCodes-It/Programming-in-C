/*Q41)WRITE A PROGRAM TO WAP THE FIRST AND LAST DIGIT OF A NUMBER*/
#include <stdio.h>
int main()
 {
    int num, temp, first, last, multiplier = 1, newnum;
    printf("enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = temp % 10;
    while(temp >= 10) {
        temp = temp / 10;
        multiplier = multiplier * 10;
    }
    first = temp;
    if(multiplier == 1) {
        newnum = num;
    } else {
        newnum = last * multiplier;
        temp = num % multiplier;
        temp = temp / 10;
        newnum = newnum + temp * 10 + first;
    }
    printf("%d\n", newnum);
    return 0;
}