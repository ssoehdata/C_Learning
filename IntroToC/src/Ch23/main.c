#include "queue.h"
#include<stdio.h>

int main(void) {
    struct queue q = init( );    
    enqueue(&q, 1);             
    enqueue(&q, 2);             

    printf("%d\n", peek(&q));         
    printf("%d\n", dequeue(&q)); 
    printf("%d\n", dequeue(&q)); 
    return 0;
}
