/* for _cube.c -- using a for loop to make a table of cubes */
#include  <stdio.h> 
int main(void)
{
    int num;

    printf("     n    n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num*num*num); // the  5 is for formatting / spacing        

    return 0;

}
