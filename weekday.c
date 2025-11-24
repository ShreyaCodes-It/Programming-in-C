/* Q20) write a program to displa the day of the week based on a number 1 - 7 using switch case  */
#include <stdio.h>
int main () {
    int ch;
  printf (" enter choice from 1 - 7");
  scanf  ("%d, &ch");
  switch (ch){
    case 1 :
    printf ("MONDAY\n");
    break;
    case 2 :
    printf (" TUESDAY\n");
    break;
    case 3 :
    printf (" WEDNESDAY\n");
    break;
    case 4 :
    printf ("THURSDAY\n");
    break;
    case 5 :
    printf ("FRIDAY\n");
    break;
    case 6 :
    printf ("SATURDAY\n");
    break;
    case 7 :
    printf (" SUNDAY\n");
    break;
    default :
    printf ("INVALID INPUT ");
  }
  return 0;
} 
