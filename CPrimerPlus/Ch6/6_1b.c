/* program summing.c -- same as 6_1 but replacing prev code w a C shortcut */
#include<stdio.h> 
int main(void)
{
    long num;  
    long sum = 0L;      /* intitialize sum to zero */
    int status; 

    printf("Please enter an integer to be summed, ");
    printf("enter q to quit and return sum): ");
    while (scanf("%ld",&num) == 1 ) 
    //printf("you are here");
    
    //printf("(Enter q to quit): ");
    /* status = scanf("%ld", &num); */   // previous version
    /*while (status == 1)  */           // previous version
    
    // new construction 
    
    {
        sum = sum + num;        
        printf("Please enter next integer (q to quit): ");
        //status = scanf("%ld", &num);  // previous version
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}

