#include<stdio.h>
int main(void){
    
    float height;
    float feet;
    char name[40];

        
    //printf("Enter your height in inches\n");
    //scanf("%.3f");
    
    printf("Enter your name and height in inches.\n");
    scanf("%s" "%f", &name, &height);

    feet = height / 12.0;
    printf("Ok, %s is %.2f feet tall.\n", name, feet); 

    return 0;
}