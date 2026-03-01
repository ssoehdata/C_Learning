#include<stdio.h> 

// implicit vs explicit declaration

/* implicit declaration example */
/************************************************************************************** */

// this will compile, but with warnings: 

// int main(void)
// {
//     printf("%d", add(2,3));

//     return 0;
// }


// // return type for func below : int   (could be set to void if nothing is to be returned)
// //name of function: add 
// // paramters:  a and b, of type integer 

// int add(int a, int b){

//     return a+b;
// }

// implicit vs explicit function declaration: 

// The compiler works from top to bottom, so the above example is 
// an example of implicit declaration , since printf("%d", add(2.3)); appears above before 
// the function is declared (it has no context)

/****************************************************************************************** */
// Explicit declaration of the same function: 

int add(int, int); 

int main(void)
{    
    printf("%d", add(2,3));
        
    return 0; 
}

int add(int a, int b){

    return a+b;
}
