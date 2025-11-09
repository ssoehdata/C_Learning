/* day_mon.c --letting the compiler count elements */
#include<stdio.h> 
int main(void)
{
    const int days[ ] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %d days.\n", index +1,
            days[index]);
    
    return 0;
}


// using the method of finding the size of the array 
//  (index < sizeof days / sizeof days[0]) - prevented the compiler from filling in values 
// beyond the endfof the array (since we only entered 10 of the 12 values of days in months)