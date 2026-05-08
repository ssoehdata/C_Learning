
#include<stdio.h> 

int main() /* Fahrenheit-Celsius table */
{
    int fahr;

    //fo (fahr = 0; fahr<= 300; fahr = fahr+ 20)
    for (fahr = 300; fahr >= 0; fahr = fahr -20)
    //  (         ;          ;       ; fahr -= 20) alt notation
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}
