// Node struct (this example is type int, but could be any type)
// generally has two different properties (a value and a pointer - to another node to create 
// the linking system)

struct node {
    int value; 
    struct node *next;
};