#include<stdio.h>

int main(void)
{
    char name[20];

    printf("Enter your first name.\n");
    scanf("%s", name);
    printf("\"%s\" \n", name);

    printf("\"%20s \" \n", name);
    printf("\"%-20s \" \n", name);
    printf("\"%3s \" \n", name);

    return 0;
}
