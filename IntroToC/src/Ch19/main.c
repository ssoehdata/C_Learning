#include "stack.h"
#include<stdio.h>

int main(void){
    struct stack s = init( );  // provides a consistent implementation of our stack when we 
                        // need one (stack is set with nothing on it -see stack.c file)

    push(&s, 1);        // creates a node with value 1, points to NULL (initially as it is the top)
    push(&s, 2);        // creates another node w value 2, now is the top, 
                     // and it points to prev node

    printf("%d\n", s.top->value);
    printf("%d\n", s.top->next->value);  // will print the next value in the stack (our original node)
    return 0;
}