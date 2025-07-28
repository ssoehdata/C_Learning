/* this program accepts user info on age and converts into seconds per years */
#include<stdio.h>
int main(void) 

{       
	float secyr, agesec;
	int age;

	secyr = 3.156e+7; 	

	printf("Enter your age in years: \n");
	scanf("%d", &age);
	
    printf("You entered %d for your age in years\n", age); 	
	agesec = age * secyr;
	printf("There are %f seconds in %d years\n", agesec, age);

 	return 0;

}
