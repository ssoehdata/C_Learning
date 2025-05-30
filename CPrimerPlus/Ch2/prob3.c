// convert  age in years to days and display both values 

#include<stdio.h>

int main(void) {
    int age_yrs, age_days;

    age_yrs = 9000;    
    age_days = 365 * age_yrs;   

    printf("My age is %d in years, and %d in days.\n", age_yrs, age_days);      

    return 0;
}
