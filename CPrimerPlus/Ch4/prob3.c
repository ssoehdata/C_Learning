#include<stdio.h>
int main(void)
{   

    float  num;

    printf("Enter a real number: \n");
    scanf("%f", &num);

    printf("%.2f", num);
    printf("%10.2e", num);

    return 0;
}