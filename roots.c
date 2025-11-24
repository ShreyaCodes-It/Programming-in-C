/* Q 17 ) write a program to find the roots of quadratic equation and categorize them.*/
#include <stdio.h>
int main (){
    float a, b, c , discriminant , r1 , r2 , realpart , imagpart;
    printf ("enter coefficients a,b,c : ");
    scanf (" %f %f %f", &a, &b ,&c );
    discriminant = b*b - 4 *a*c ;
    if (discriminant > 0 ){
        r1 = (-b + sqrt(discriminant)) / (2 *a);
        r2= (-b - sqrt(discriminant)) / (2*a);
    printf(" roots are real and equal. \n");
    printf("root1 = %.2f and root2 = %.2f\n", r1 , r2);
    }
    else if ( discriminant == 0) {
        r1 = r2 = -b / (2*a);
        printf ("roots are equal .\n");
        printf ("root1 =   root2= %.2f ", r1);
    }
    else {
        realpart = -b / (2 *a);
        imagpart = sqrt(-discriminant) / (2 *a);
        printf ("roots are complex and imaginary \n");
        printf ("root1 = %.2f + %.2fi and root 2 = %.2f - %.2fi\n", realpart,imagpart,realpart,imagpart);
    }
    return 0;
}