#include <stdio.h> 
#define N 6
int main(void)
{

    int a[5] = { 1, 2, 3, 4, 5};   // create and name an array 
                              // initialize it (e.g. = { 1, 2, 3, 4, 5})

                              // if you were to only init the above array to 3, the last two 
                              // elements in the array would be set to zero 
                              // i.e. less values than than 5 for this array

    int b[N] = {1,2,3,4};
    printf("%d\n",a[0]);
    printf("%d\n",b[5]);            // auto sets 5 and 6 to zero, as we only defined 4 values
                            // if you try to index outside the bounds of the array, it will 
                            // return 1  -e.g. b[8]

    printf("%d\n",b[8]);          // will return 1 (outside array bounds)


    // how to check the array bounds? 
    printf("%d\n",sizeof(a)/sizeof(a[0]));   /*  we look at the size of the array (a) itself (in memory) 
                                    and then divide that by a single element in the array 
                                    to find the number of elements in the array */

                                /* N.B.: if need be , use % ld for  a long int instead of %d*/


    return 0;
}