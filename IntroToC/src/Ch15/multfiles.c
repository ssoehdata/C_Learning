// working with multiple files 

// where to put int typ declarations? (so in this example, should 
// it go in multiles.c , or add.c ?   
// put it in a 3rd file , a header file 

#include<stdio.h> 
#include "add.h"

int main(void){
    int sum = add(2,3);
    printf("%d\n", sum);


    return 0;
}

// when compiling, list all the files 
// e.g. gcc add.c add.h multfiles.c -o multfiles