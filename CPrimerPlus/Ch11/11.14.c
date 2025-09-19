/* str_cat.c  uses the strcat() to join two strings */
#include<stdio.h> 
#include <string.h>  /* declares the strct() function */
#define SIZE 80 
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favorite flower?");
    gets(flower);
    strcat(flower, addon);
    puts(flower);
    puts(addon);
    
    return 0;
}
