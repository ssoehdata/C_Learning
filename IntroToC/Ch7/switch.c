#include <stdio.h> 
int main(void)
{
    int dayOfWeek = 0;

    printf("Enter a day of the week\n");
    scanf("%d", &dayOfWeek);

    // if (dayOfWeek == 1){
    //     Monday
    // } else if (dayOfWeek == 2)
    //     Tuesday 
    // etc

    // switch statement

    switch(dayOfWeek){
        case 1: 
            printf("Monday\n");
            break;
        case 2:
            printf("Tueseday\n");
            break;

        case 3:
            printf("Wednesday\n");
            break;   
        // etc 
        default:
            printf("Invalid date\n");
    }
    return 0;
}