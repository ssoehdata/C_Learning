/* 
    File copy using getchar and putchar 
    version 2
*/
# define EOF -1

main() /* copy input to output; 2nd version */
{
    int c;    
    while ((c = getchar()) != EOF)
        putchar(c);
}