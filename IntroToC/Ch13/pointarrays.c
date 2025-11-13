// using pointers with arrays 
#include<stdio.h>
int main(void)
{
    int a[10]; 
    int *p;

    p = &a[0];              // set a pointer equal to the address of a particular element in the array 
    *p = 5;                  // can change the value of the pointer 

    printf("The value of  [0] in array a  is: %d\n", *p);

    // can also move a pointer (increment or decrement) , e.g. move the above pointer up by one in the array
    // this will make the next element in the array [1] now equal to 5

    p = &a[0];
    *(p + 1) = 5; 
    printf("Now the value of [1] is equal to %d\n", *p);

    /******************************************* */
    // can iterate using only pointers 

    int b[3] = {1, 2, 3};
    int  sum, *dude;
    sum  = 0;    

    // instead of using sizeof for len of array etc, can use the addresses of the elements, incrementing by the pointer by 1
    // incrementing by 1 moves the next index in the array 
    for ( dude = &b[0]; dude < &b[3];  dude++) {
        sum += *dude; 
    }
    printf("The sum of array dude (aka 'sumdude') is: %d\n", sum);    
  

   
    return 0;
}