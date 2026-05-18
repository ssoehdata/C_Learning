/* 
    Character counting
*/

#define EOF -1

main( ) /* count characters in input */
{ 
    long nc;    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}