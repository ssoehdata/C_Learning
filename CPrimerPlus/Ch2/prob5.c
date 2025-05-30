#include<stdio.h>

/*create an int var named toes, set toes to 10, calculate 2 times toes and toes squared. 
the program should print all three values identifying them. */
int main(void)
{
    int toes, toessqrd; 
    
    toes = 10;
    toessqrd = toes * toes; 

    printf("The number of  toes is %d.\n", toes);
    printf("The value for two times toes is %d.\n", 2 * toes);
    printf("The sqaure of toes is %d!.\n", toessqrd);    

    return 0;
}

