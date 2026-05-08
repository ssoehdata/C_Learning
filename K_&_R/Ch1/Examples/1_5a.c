/* 
    File copy using getchar and putchar 
    version 1
*/

#define EOF -1 // or alternatively EOF 0

main() /* copy input to output; 1st version */
{
    int c; 
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}