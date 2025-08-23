#include<stdio.h>
#define G 'g'

int main(void)
{
    char c = 'a';    
    while (c <= G)    
        printf("%5c", c++);         
    printf("\n");       
       
    return 0;
}
