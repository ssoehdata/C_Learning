/* accepts height in inches and converts to centimeters */

#include<stdio.h>
int main(void)
{

    float inch,conversion;
        

    printf("Enter the height in inches to be converted.\n");
    scanf("%f", &inch);
    printf("You entered %f inches.\n", inch);
    conversion = inch * 2.54;
    printf(" %.2f inches is %0.2f centimeters.\n", inch, conversion);


    return 0;
}
