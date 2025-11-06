#include<stdio.h> 

int main(void)
{
    int  length, width;         // declare a variable: type and name (here two of same type)
    float speed = 2.5f;        // 4 bytes in size , 7 dec precision (need to add .f for floats)
    double volume = 2.5;          // 8 bytes in size , 15 decimal precision 

    // initialize the variales: 2 ways 
    // a) asisgn a value 
    // b) in line - see speed and volume vars above

    length = 1; 
    width = 5; 
    
    printf("The width is: %d, the length is: %d\n", width, length); 
    printf("The speed is: %f m/s\n", speed);
    printf("The volume is %.2f\n", volume);      // to print double (e.g. .2f )     

    return 0;
}
