// dequeue & peek

#include "queue.h"

struct queue init( ){
    struct queue ret = {NULL,NULL,0};
    return ret;
}
// peek: return (peek at) the front value without removing it
int peek(struct queue *q){
    if (q->size > 0){           // ensure that a value is present before trying to peek
        return q->front->value;  // return the front value
    }else{
        printf("Invalid peek operation");
        return -1;
    }
}
        // remove the value at the front of the queue and update the next value 
        // to be the front value
int dequeue(struct queue *q){
    // check to make sure queue is not empty
    if (q->size > 0){
        int val = q->front->value;
        struct node *topNode = q->front;  // store a reference to what currently is at
                                      // the  front of the  queue so we can deallocate 
                                      // from memory later

        q->front = q->front->next;     // move the front 
        q->size--;                   // decrement the size since we just removed an item

        free(topNode);              // free the memory related to the thing we just removed
        
        return val;         //return value to user

    }else{
        printf("Invalid dequeue operation");  // simple example of error to throw for ivalid dequeues
        return -1; 
    }
}

void enqueue(struct queue *q, int val){
    struct node *newNode = malloc(sizeof(struct node)); 
    newNode->value = val;   
    newNode->next = NULL;   
                           

    if (q->size == 0){      
       q->front = newNode;  
       q->rear = newNode;  
       q->size++;
    }else{
        q->rear->next = newNode;   
        q->rear = q->rear->next;    
        q->size++;
    }

}