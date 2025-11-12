// char variables
#include<stdio.h> 

int main(void){

    char c = 'a';    // n.b.: chars need to be placed in ' '  single qoutes! 
                   // " " is reserved for strings

    c += 1;        // can step up to next letter in this way (from a to b in this example)

    char d = 'Z' + 32; // will give lower case equivalent of the letter 
                      // subtracting 32 gives the reverse operation

    printf("%c\n", c);
    // can also print the char as an integer (the ascii value)
    printf("%d\n", c);

    printf("%c\n", d);

    char e;
    printf("Enter a character\n");
    e = getchar(); 
    printf("%c\n", e);              // putchar(e); achieves similar result 
    
    return 0;
}
