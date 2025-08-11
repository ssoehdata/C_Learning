#include<stdio.h>
#include<string.h>

int main (void)

{
    
    char f_name[20];
    char last_name[20];

    

    printf("Enter your first and last names.\n");
    scanf("%s %s", &f_name, &last_name);

    printf("%s %s\n", f_name, last_name);    
    printf("%d %7d\n", strlen(f_name), strlen(last_name));
    
    printf("%s %s\n", f_name, last_name); 
    printf("%7d  %7d \n", strlen(f_name), strlen(last_name));

    return 0;
}

