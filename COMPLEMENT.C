/* Q40) WRITE A PROGRAM TO FIND THE 1'S COMPLEMENT OF A BINARY NUMBER AND PRINT IT*/
#include <stdio.h>
int main() 
{
    char binary[50];
    int i;
    printf("enter a binary number: ");
    scanf("%s", binary);
    for(i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '0')
            binary[i] = '1';
        else if(binary[i] == '1')
            binary[i] = '0';
    }
    printf("%s\n", binary);
    return 0;
}