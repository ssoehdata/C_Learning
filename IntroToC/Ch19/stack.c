// Implemention of the stack 
#include "stack.h"                  
                            // create init function to initialize the stack
                            // and return it back to the caller 
struct stack init( ){
    struct stack ret = {NULL, 0}; // init the top to NULL and the size is zero 
                             // nothing on the stack so null, and therefore size is 0
    return ret;                 // return value back to whovever calls the function
}                           
//push values on to stack when we add them
void push(struct stack *s, int val){
    struct node *newNode = malloc(sizeof(struct node));     // setup memory that will be used 
                                                  // to create a node

   // if size of the stack s is 0, take the node and set it to the top 
   // remember stack  is a pointer thus -> 

    if (s ->size == 0) {      
        newNode->value = val;   // value we will add to the stack
        newNode->next = NULL;  // next node pointed to is NULL since it is now the top

        s->top = newNode;       
        s->size++;              // increment the size by one, as the stack 
                               // has increased by 1

    // 2nd case of stack: new nodes are pushed onto the stack
    }else {
        newNode->value = val;
        newNode->next = s->top;  // points to what used to be the top of the stack
        s->top = newNode;       // new value is now the top

        s->size++;
   }                                              
}