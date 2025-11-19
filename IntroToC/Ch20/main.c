// Peek and Pop operations
//  view  the value on top of the stack:  A peek operation 
// to remove the value on top of the stack: A pop operation

#include "stack.h"
#include<stdio.h>

int main(void){
    struct stack s = init( );  
                        

    push(&s, 1);        
    push(&s, 2);                            

    
    printf("%d\n", peek(&s));  // shows us the next value in the stack

    printf("%d\n", pop(&s));  // will also return top stack value (2)
    printf("%d\n", pop(&s));  // now remove value 2
    printf("%d\n", peek(&s)); // top value is now 1

    return 0;
}