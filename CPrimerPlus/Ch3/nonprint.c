/*  non printing characters */
#include<stdio.h>

int main(void)
{

    printf("here is some text \n");
    printf("and more text \a");
    printf("and even more text\v");

    printf("Gramps sez, \a \\ is a backslash.\"\n");
    printf("and still more text\f");

    return 0;
}
