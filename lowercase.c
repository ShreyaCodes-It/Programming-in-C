/* Q14) WRITE A PROGRAM TO INPUT A CHARACTER AND CHECK WHETHER IS A VOWEL OR CONSONANT*/
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; //Converting all uppercase to lower
    }
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Consonant\n");
    } 
    else {
        printf("Invalid input! Please enter an alphabet.\n");
    }
    return 0;
}