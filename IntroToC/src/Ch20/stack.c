
#include "stack.h"                  
                            
                            
struct stack init( ){
    struct stack ret = {NULL, 0}; 
                             
    return ret;                 
}                           

void push(struct stack *s, int val){
    struct node *newNode = malloc(sizeof(struct node));   

    if (s ->size == 0) {      
        newNode->value = val;   
        newNode->next = NULL;  

        s->top = newNode;       
        s->size++;         
    
    }else {
        newNode->value = val;
        newNode->next = s->top;  
        s->top = newNode;       

        s->size++;
   }                                              
}

int peek(struct stack *s){
    if (s->size > 0){               // determine if their is anything on the stack to look at
        return s->top->value;       // if yes, return the value on the stack
    }
    else{
        printf("Invalid peek operation");
        return -1;
    }

}
int pop(struct stack *s){
    if (s->size > 0){
        int val = s->top->value;   // get the value from the top
        s->top = s->top->next;   // move the top to be = the next value in the stack
        s->size--;               // decrease size of stack 

        return val;
    }
    else{
        printf("Invalid pop operation");
        return -1;            
    }
}