
#include "node.h"
#include<stddef.h>
#include<stdio.h> 
#include<stdlib.h>  

struct stack {
    struct node *top;  
                   
    int size;

};

struct stack init( );
void push(struct stack *, int);
int peek(struct stack *);       // shows the top value
int pop(struct stack *);        // removes the top value