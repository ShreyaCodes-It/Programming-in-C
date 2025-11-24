/* Q36) write a program to find hcf of two numbers */
#include <stdio.h>
int main()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF = %d", x);
    return 0;
}