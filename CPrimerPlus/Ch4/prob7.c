/* Enter miles travelled and gallons consumed. Convert and print 
    mpg value with 1 decimal precision. Then convert mpg to liters 
    per 100 km, using conversion rates of 3.785L/ gal and 1.609 Km/ mile */

#include<stdio.h> 
#define mpg (miles / gal)
#define conversion (mpg / 3.785) * (1.609 * 100)

int main(void)
{     
    float miles, gal, galL, mileconv;   

    printf("Enter the number of miles travelled:\n");
    scanf("%f", &miles);

    printf("Enter the number of gallons used:\n");
    scanf("%f", &gal);    
    printf("Your mpg was: %.1f \n", mpg);

    printf("Your converted mpg in Liters per 100 Km is: %.1f \n", mpg / 3.785 * 1.609 * 100);
    printf("Using #define, your mpg in Liters per 100 Km is: %.1f \n", conversion); 

    return 0;
}
