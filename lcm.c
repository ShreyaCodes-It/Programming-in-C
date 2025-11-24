/*Q37) write a program to find lcm of two number*/
#include <stdio.h>
int main() 
{
    int a, b, x, y, temp, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    lcm = (a * b) / hcf;

    printf("LCM = %d", lcm);
    return 0;
}