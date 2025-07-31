/* accepts ASCII code value and prints corresponding ascii character */

#include<stdio.h>
int main(void)
{
    int  ch;    
    
    printf("Enter a value to convert to ASCII code: \n");
    scanf("%d", &ch);
    
    printf("The ASCII code for %d is %c.\n",ch, ch);

    return 0;
}
