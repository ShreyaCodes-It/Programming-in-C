/* Q22 ) write a program to find profit or loss percentage given cost price and selling price*/
#include <stdio.h>
int main () 
{
float cp,sp,profit,loss ,pp,lp;
printf ("Enter cost price and selling price");
scanf ("%f %f", &cp ,&sp);
if (sp > cp)
{
    profit = sp - cp;
pp = ( profit /cp)*100;
printf ("profit = %.2f\n",profit);
printf (" profit percent = %.2f%%\n",pp);
}
else if ( cp > sp) {
    loss = cp - sp ;
    lp = (loss / cp)*100;
    printf (" loss = %.2f\n",loss);
    printf ("loss percent = %.2f%%\n",lp);
}
else{
    printf (" no profit no loss ");
}
return 0;
}
