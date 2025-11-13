// working with strings in C 

// in C a string is an array of characters, i.e., there is no str datatype 
// instead use character arrays 

// a null terminator \0 is added automatically when declaring a string

#include<stdio.h> 
#include<string.h>  // library of a variety of functions for working w strngs 
                           // e.g. strlen( ), strcat( )  etc

int main(void){
    char c[] = "Hello world!";
    printf("%s\n", c); 
    printf("%ld\n", strlen(c)); 

// can perform array operations on char arrays 
printf("%c\n", c[0]);            // note need to change to print a character ( c vs s for string)

// using pointers 

    char *d = "Pointer Array";
    printf("%c\n", *d);
    printf("%c\n", *(d+1));

    return 0;
}