#include<stdio.h> 

int main(void)
{

    int i = 10;
    int *p = &i; 


printf("The value of i is: %d\n", i);            // value of i using variable 
    printf("The value of i is: %d\n", *p);      // int value assigned to variable i 
                                      // using dereference *p 
    printf("The address of i is: %p\n", &i);    // the memory location of i (address)

    printf("The address of i is: %p\n",p);      // using the pointer to show the address
    

    return 0;
}
