#include<stdio.h>
int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in rhodium?\n");
    printf("Let's find out.\n");
    printf("Enter your weight in pounds: ");
    
    // accept user input 
    scanf("%f", &weight);
    value = 770.0 * weight  * 14.5833;
    printf("Your weight in rhodium is worth $%.2f.\n", value);
    printf("Eat more to maintain your value.\n");

    return 0;

}