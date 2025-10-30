#include <stdio.h>
int main()
{   
    int num1, num2,sum;
    

    printf("Enter first num to sum\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);

    return 0;
}
