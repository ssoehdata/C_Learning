#include<stdio.h> 
int main(void){

    int i = 0;
    int j = 0; 

    printf("Enter two integers.\n");
    scanf("%d%d" ,&i ,&j); 
    printf("The value of i is: %d\n", i);
    printf("The value of j is: %d\n", j);

    return 0;
}

// format:  you could also write scanf("%d/%d" ,&i ,&j);  
// and it would take 2 ints like this  10/5  and then continue the same way
// in other words, the user needs to input the " / " between the two integers
// this could also be a comma, etc