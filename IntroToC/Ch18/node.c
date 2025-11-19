// Node Data Structure 
#include "node.h"
#include<stdio.h> 


int main(void)
{
    struct node test;
    test.value = 0;                 // assign value of 0 inside the node

    struct node test2;              // create another node
    test2.value = 1;

    test.next = &test2;             // test.next points to test2 (remember that next is a pointer 
                                // see in the node.h file)


    printf("%d\n", test.value);         // print value of first node test

                                // get the value of the next value of test
    printf("%d\n", test.next->value);     // ->  for dereferencing the property of a pointer
                                // because next is a pointer, so we can't use .value

    printf("%d\n", test2.value);        // confirm that it is the same value as test2                     
   
}