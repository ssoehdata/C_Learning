#include "node.h"
#include<stddef.h> 
#include<stdio.h> 
#include<stdlib.h>

struct queue{
    struct node *front;
    struct node *rear;
    int size;
};

struct queue init( );                // initialization operation 
void enqueue(struct queue*, int val);  // ability to add to the queue as well as a value (adds to rear)
int dequeue(struct queue*);        // allows us to remove a value from the queue (removes from front)
int peek(struct queue*);                 // allows us to see what is at the top of the queue
                              // without removing anything 
