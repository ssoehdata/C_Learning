// FIFO  first in first out data structure 

#include "queue.h"

struct queue init( ){
    struct queue ret = {NULL,NULL,0};
    return ret;
}

void enqueue(struct queue *q, int val){
    struct node *newNode = malloc(sizeof(struct node)); // newNode will store data we want to insert
    newNode->value = val;   
    newNode->next = NULL;   // nohting follows it, hence it doesn't 
                           // point to anythin and is set to NULL

    if (q->size == 0){       // if nothing in queue, size = 0 (at start first node is both at front and rear of queue)      
       q->front = newNode;  // front equal to node we are inserting 
       q->rear = newNode;  // the rear is also equal to the node we are inserting
       q->size++;
    }else{
        q->rear->next = newNode;   // new node is added to the rear
        q->rear = q->rear->next;    
        q->size++;
    }

}