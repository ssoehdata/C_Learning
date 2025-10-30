/* for _char.c  */

// counting with characters 
#include<stdio.h> 
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        printf("THe ASCII value for %c is %d.\n", ch, ch);
    return 0;
}
