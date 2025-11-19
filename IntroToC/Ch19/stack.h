// this header file will define the stack and all the functions the stack will have
#include "node.h"
#include<stddef.h>
#include<stdio.h> 
#include<stdlib.h>  // for malloc

struct stack {
    struct node *top;  // doesn't need to be a pointer, but makes implementation of all 
                   // our other functions easier
    int size;

};

struct stack init( );
void push(struct stack *, int);