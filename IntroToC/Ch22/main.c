#include "queue.h"
#include<stdio.h>

int main(void) {
    struct queue q = init( );    
    enqueue(&q, 1);             // first insert (both front and rear)
    enqueue(&q, 2);             // second insert, now is the rear

    printf("%d\n", q.front->value);         // print value at front of the queue
    printf("%d\n", q.front->next->value);    // print value that follows front of the queue

    return 0;
}
