#include<stdio.h>
int main(void)
{
    int x,x1,y,y1;
    x = (2 + 3) * 6;
    x1 = (12 + 6)/2*3;      // order of operations: (), division, mult from l to r
    y = x = (2+3)/4;
    y1 = 3 + 2*(x = 7/2);

    printf("x is:  %d\n", x);
    printf("x1 is: %d\n",x1);
    printf("y is: %d\n", y);
    printf("y1 is: %d\n", y1);

    return 0;
}
