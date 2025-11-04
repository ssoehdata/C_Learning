/* misuse.c  -- uises a function incorrectly */
#include <stdio.h> 

int imax( );   /* old style declaration */

int main(void)
{
    printf(" The maximum of %d and %d is %d.\n", 
        3, 5, imax(3)); 
    printf("The maximum of %d and %d is %d.\n",
        3, 5, imax(3.0, 5.0));
    return 0;

}
int imax(n, m)
int n, m;
{
    int max; 

    if (n > m) 
        max = n; 

    else 
        max = m;

    return max;
}

// the calling function places args on the stack, and the caller function reads them off the stack
// These two processes are not coordinated with each other, hence the error at printout, 
// although no compile error is thrown

/* specifically, the calling function decides which type to pass based on the actual args 
  in the call, and the called function reads values based on the types of its formal 
  arguments. Therefore the call imax(3) places one integer on the stack. When the  imax() 
  funciton starts up it reads two integers off the stack. Only one was actually placed on the 
  stack, so the second read value read is whatever value happened to be sitting in the 
  stack at the time. */


  /* N.B.: floats is promoted to a double when passed as an argument  */ 


  /* The second time the example uses imax( )  it passes  float values to imax(). This 
     places two double values on the stack. */

/* ANSI Solution: the Function Prototype  */ 

// int imax(int, int); 
// int imax(int a, int b);

