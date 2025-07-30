/*  overflow and underflow */
#include<stdio.h>

int main(void)
{
    float toobig = 3.4E38 * 100.0f;
    float nottoobig2 = 3.4E36 * 100.0f;
    
    float toosmall = toobig / 2;
    printf("%e\n", toobig);
    printf("%f\n" , toosmall);

    float nottoosmall = nottoobig2 / 2;
    printf("%e\n", nottoobig2);
    printf("%e\n", nottoosmall);

    return 0;
}
