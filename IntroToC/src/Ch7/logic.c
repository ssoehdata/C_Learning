// logical operators
#include<stdio.h>
int main(void)
{
    int age = 0;

    printf("Enter an age\n");
    scanf("%d", &age);

    // || or statement - check if either of the conditions is true 
    //      (check if at least one of them is true)
    if ((age < 0) || (age >= 120) )
    {
        printf("Age is invalid\n");
    }

    return 0;

}

// && and statement -checks if both conditions are true  
//          (if ((age <0) && (age >= 120))

// !  negation statement  e.g. if (!(age < 0))