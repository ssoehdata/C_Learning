// basic struct 
#include<stdio.h> 

struct student {
    char* name;
    int age;    
};

int main(void){
    struct student s;           // declare an instance of the struct and 
                                   // give it a variable name s
    s.name = "Scott";
    s.age = 0;

    // can also initialize the values when declaring the struct 
    struct student s2 = {"Jane", 20};
    // can also change these values e.g.:
    //s2.name = "Joe";   // will print Joe in place of Jane

    printf("%s %d\n", s.name, s.age);
    printf("%s %d\n", s2.name, s2.age);

    return 0;
}