/* Q 15) WRITE A PROGRAM TO INPUT A CHARACTER AND CHECK WHETHER IT IS UUPERCASE,LOWERCASE,DIGITOR SPECIAL CHARACTER.*/
#include <stdio.h>
int main () {
    char ch;
    printf (" enter a character : ");
    scanf ("%c", &ch);
    if ( ch >= 'A' && ch <= 'Z'){
        printf (" '%c ' is an uppercase alphabet . \n ,ch");
    }
    else if ( ch >= 'a' && ch <= 'z'){
        printf ("'%c'is a lowercase alphabat.\n,ch");
    }
    else if ( ch >= '0' && ch <= '9'){
        printf("'%c' is a digit.\n,ch");
    }
    else {
        printf("'%c'is a special character. \n ,ch");
    }
    return 0;
}