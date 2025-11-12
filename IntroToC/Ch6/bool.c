#include<stdio.h> 
#include<stdbool.h>


// 0 = false 
// 1 = true

int main(void)
{
    bool check = false;    
    int age = 0; 

    printf("Enter an age\n");
    scanf("%d", &age);
    bool ageCheck = (age >= 18);

    if (ageCheck)
    //if (age >= 18) std way to set up the if else logic
    {
        printf("Older than 18\n");
    }else if (age < 0)
    {
        printf("Invalid age\n");
    }
    else
    {
        printf("Younger than 18\n");
    }  
    
    return 0;
}

 
