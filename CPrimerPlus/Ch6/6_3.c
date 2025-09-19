/* while1.c -- watch your braces*/
/* bad coding creates an infinite loop */
#include <stdio.h> 
int main(void)
{
    int n = 0;

    while (n < 3) 
    //{                             not in original example
        printf("n is  %d\n", n);
        n++;
    //}                             not in original example 
    printf("That's all this program does\n");
    
    return 0;
}


/* The original example omits the commented out braces, resuting in an infinite 
    loop.  Although the n++ statement is indented, the braces are still required. In this 
    state, only the single print statement immedidately following the test conditiion 
    is part of the loop, and the variable n is never updated, resulting in an infinite loop. */

/* Alwasy rememeber that a while statement counts syntactically as a single statement.
    the statement runs from the while to the first semicoldn or (in the case of a compound 
    statement) to the terminating brace. */