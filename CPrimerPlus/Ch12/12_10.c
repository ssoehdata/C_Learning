/* r_drive1.c --test rand1( ) amd srand1( ) */ 
/* compile with s_and_r.c ( 12_9.c) */ 
#include<stdio.h> 
extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)

{
    int count;
    unsigned seed;
    printf("Please enter your choice for seed.\n");
    while (scanf("%u", &seed) == 1)
    {
        for (count = 0; count < 5; count++)
            printf("%hd\n", rand1());
        printf("Please enter next seed (q to quit).\n");
     }
     printf("Done.\n");
     return 0;
}