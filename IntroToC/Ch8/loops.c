#include <stdio.h> 

int main(void){
    int i = 0; 

    do {                // do while loop the condition is checked after the loop (at end of loop)
                        // will execute atleast once, even if condition is not true (e.g. make i =11)
        printf("%d\n", i);
        i++;

    } while (i <=5);
                        // while loop: condition is checked before loop
                        // often used where a function is called that can be True or False
    //while (i <=10){
      //  printf("%d\n",i);
      //  i++;
   // }


    // for loop         
                        // used in simple cases/conditions, incrementer i not needed as in while loop
                        // as the incrementer is in the top (i++)
    for (int i = 0; i <= 10; i++){

        printf("%d\n", i);
    }

    return 0;
}
