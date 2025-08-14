
/* set a dbl type to 1.0/3.0 and type float to 1.0/3.0 
Display each 3 times, 4 dig to the right, 12 dig, and 16 digits to 
 the right.   
 Also display values of FLT_DIG and DBL_DIG */

#include <stdio.h> 
#include <float.h> // floating point limits

int main(void)
{

    float n1 = 1.0;
    float n2 = 3.0;

    double n3 = 1.0;
    double n4 = 3.0;       
    
    printf("%.3f \n", n1);
    printf("%.4f \n", n1);
    printf("%.12f \n", n1);

    printf("%.3f \n", n2);
    printf("%.4f \n", n2);
    printf("%.12f \n", n2);

    printf("%.3lf \n", n3);
    printf("%.4lf \n", n3);
    printf("%.12lf \n", n3);

    printf("%.3lf \n", n4);
    printf("%.4lf \n", n4);
    printf("%.12lf \n", n4);


    printf("The float precision on this machine is %d digits:\n", FLT_DIG);
    printf("The double precision on this machine is %d digits:\n", DBL_DIG);

    printf("The long double precision on this machine is %d digits:\n", LDBL_DIG);

    return 0;
}
