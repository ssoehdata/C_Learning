// operations and expressions 
#include <stdio.h> 
int main(void)
{
    //int i = 2; 
    //int j = 3; 

    double i = 2; 
    double j = 3;

    // sum = i + j;  // addition , i - j, i * j 
                    // for division i/j  make it a float 
                    // if you make it a double, you will just get zeroes unless 
                    // you declar i and j to type double 

    double sum = i/j;
    printf("%f\n", sum); 

    // mixing: if you mix and an int 

    double h = 2; 
    int p = 3; 
    
    double sum2 = h/p;
    printf("%f\n", sum2);   // also returns a  double (same works for float ) as long as 
                      // of the types is a double (or float)

                    // if you added an int and a double, you will also get a decimal value
                    // of trailing zeroes

    // this will return a value with trailing zeroes (i.e. 5.00000)
    double t = 2;
    int v = 3;

    double sum3 = i+j; 
    printf("%f\n", sum3); 
     

    // this version returns an int (with no trailing zeroes )
    double k = 2.5; 
    int y = 3;     
    int sum4 = k+y; 
    printf("%d\n", sum4);   // it converts it to an int (%d)

    // unary operators  "+", "-" etc
    int b = 3;
    b = - b; 
    printf("%d\n", b);

    // also n = n+ 1  can be written as 
    // n += 1      this also works with -= , *=, /=, %=  as well (minux =, mult and divide =) 
    //   n = n * 1 or n *=1  etc

    // x++;  increments a value up by one (adds)
    // x--;  increments a value down by one (reduces or subtracts)

    return 0;
}