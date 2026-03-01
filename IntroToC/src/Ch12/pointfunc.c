/* pointers with functions */
#include<stdio.h> 

/* Pass by reference:  alter values inside of a function and then have that result also appear 
    inside of the main function  by passing the address of the variable into the function 
    rather than the value ( pass the address instead of the value ) */

    // func addOne, no return type(hence void) because we will change the value 
    // using the pointer rather than using a return 

void addOne(int *);

int main(void){
    int a = 4;
    addOne(&a);
    printf("%d", a);    // we are working with the memory address 
                   // directly and adding one to it and storing it at that address

    return 0; 
}
void addOne(int* a){   // func addOne takes a pointer a

    *a = *a + 1;    // func adds one to the value a
}


// uses: example, to swap two values (for example in a sorting algorithm)


// can return pointers

// e.g. 
// int* addOne(int *);

// ....same code as above.....

// }
// int*  addOne(int * a){
//      *a = *a + 1;
//      return a;  
// }


// alternate notation for above: 

// void addOne(int * a){
//      return *a + 1;
// }

// ***************************************************************
/* Another example  */
                                
// int* addOne(int *);

// int main(void){
//  int i = 0;          // create a var i
//  int* a = &i;        // create another var a that points to address of i

//  a = addOne(a);     // set that var a equal to adding one to it
//  printf("%d", *a);      // derefernce the pointer to print the value
//  return 0; 
// }

// int* addOne(int * a){
//  *a = *a + 1; 
//   return a;
// }


