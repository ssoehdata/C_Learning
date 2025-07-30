/* accepts ascii value and prints corresponding ascii character */

#include<stdio.h>
int main(void)
{
    int  ch;    
    
    printf("Enter an ASCII code value: \n");
    scanf("%c", &ch);
    printf("The ASCII character for %c is %d.\n",ch, ch);

    printf("The  dude for %d is %c.\n",ch, ch);

    return 0;
}
