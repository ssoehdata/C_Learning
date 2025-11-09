/*  no_data.c -- unitialized array  */
#include<stdio.h> 
#define SIZE 4

int main(void)
{
    int no_data[SIZE];      /* unitialized array */
    int i; 

    printf("%2s%14s\n",
        "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]); 
    
    return 0;

}

// these unitialized array members will return whatever value happens to be at that address
// (just as any unitialized variable would)
