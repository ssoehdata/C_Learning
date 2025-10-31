#include<stdio.h> 

int main(int argc, char *argv[]) {

    // create two  arrays 

    int ages[] = {23, 43, 12, 89, 2};
    // char *names is an array of character pointers
    char *names[ ] = { 
        "Alan", "Frank", "Mary", "John", "Lisa"
    }; 

    // safely get the size of ages 
    int count = sizeof(ages) / sizeof(int); 
    int i = 0; 

    // first way using indexing 
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n"); 


    // set up the pointers to the start of the array 
                                                //pointer of type integer called ages
    int *cur_age = ages;                // a pointer (*cur_age) to where ages resides 
                                                // ( cur_age is a pointer to type int, pointed at ages)

    char **cur_name = names;      // pointer of type char called names
                                                //  a pointer to character pointers

    // second way using pointers 
    for (i = 0; i < count; i++) {
        printf("%s is %d years old\n", 
                *(cur_name + i), *(cur_age + i));  // dereference the pointers to get their values
    }                                                          // i+ means  jump ahead by i and get that value 

    printf("---\n");

    // third way, treat pointers like they are just arrays 
    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]); 
    }
    printf("---\n"); 

    // fourth way with pointers in a stupid complex way 
    for(cur_name = names, cur_age = ages; 
        (cur_age - ages) < count; cur_name++, cur_age++) {
            printf("%s lived %d years so far.\n", *cur_name, *cur_age);
        }
        return 0;
}


// pointer lexicon: 

// type *ptr                        A pointer of type named ptr  (Declaration of a pointer)
// *ptr                              The value of whatever ptr is pointed at  (dereference the pointer to get the value)
//  *(ptr + i)                      The value of (whatever ptr is pointed at plus i) 
// &thing                           The address of thing 
// type *ptr = &thing           A pointer of type named ptr set to the address of thing
// ptr++                            Increment where ptr points 


// int height = 100;
// int *cur_height = &height ;  // get the address of height, and assign it to an integer pointer named *cur_height
