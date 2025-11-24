/*Q39) WRITE A PROGRAM TO FIND ODD DIGITS OF A NUMBER*/
#include <stdio.h>
int main() {
    int num, digit, product;
    
    printf("enter a number: ");
    scanf("%d", &num);
    product = 1;
    int temp = num;
    int foundodd = 0;

    while(temp > 0) {
        digit = temp % 10;
        if(digit % 2 != 0) {
            product = product * digit;
            foundodd = 1;
        }
        temp = temp / 10;
    }
    if(foundodd == 0) {
        product = 1;
    }

    printf("%d\n", product);
    return 0;
}