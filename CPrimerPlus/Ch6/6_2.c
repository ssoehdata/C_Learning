// When a loop terminates 
#include <stdio.h>
int main(void)
{
    int n = 5;

    while (n < 7)           // line 7     
    {

        printf("n = %d\n", n); 
        n++;                // line 10
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n"); 

    return 0;
}
