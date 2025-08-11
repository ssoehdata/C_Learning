#include<stdio.h>
int main(void){

    char first[20];
    char last[20];

    printf("Enter your first name and last name\n");
    //scanf("%c, %c,\n", last,first);
     scanf("%s", first);
     scanf("%s", last);    

    printf("%s %s is your name\n", last, first);

    return 0;
}
