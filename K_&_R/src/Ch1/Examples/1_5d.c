/* 
    Line Counting
*/

#define EOF -1 

main() /* count lines in input */
{
    int c, n1;

    n1 = 0;
    while ((c = getchar() ) != EOF)
        if (c == '\n')
            ++n1;
    printf("%d\n", n1);
}