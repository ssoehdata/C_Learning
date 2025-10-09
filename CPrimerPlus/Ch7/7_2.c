/* cyphert1.c -- alters input, preserving spaces     */
#include<stdio.h> 
#define SPACE '  '   /* that's qoute-space-qoute     */
int main(void)
{
    char ch; 

    ch = getchar();         /* read a character       */
    while(ch != '\n')       /* while not end of line  */
    {
        if (ch == SPACE)    /* while not end of line  */
            putchar(ch);    /* character unchanged    */
        else    
            putchar(ch + 1); /* change over characters */
        ch = getchar();      /* get the next character */
    }
    putchar(ch);            /* print the newline       */

    return 0;
}
