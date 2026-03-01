// Peek and Pop operations
//  view  the value on top of the stack:  A peek operation 
// to remove the value on top of the stack: A pop operation

#include "stack.h"
#include<stdio.h>

int main(void){
    struct stack s = init( );  
                        

    push(&s, 1);        
    push(&s, 2);                            

    printf("%d\n",s.top->value);
    printf("%d\n",s.top->next->value);
    
     
    printf("%d\n", pop(&s)); 
    printf("%d\n", peek(&s));  
    
    return 0;
}