/* 17_10  tree.h -- header for binary searcy tree            */
/*               no duplicate items are allowed in this tree */

#ifndef _TREE_H_
#define _TREE_H_ 
#include<stdbool.h> 

/* redefine Item as appropriate                            */
typedef struct item
{
    char petname[20];
    char petkind[20];
}Item;

#define MAXITEMS 10

typedef struct node 
{
    Item item;
    struct node * left;     /* pointer to right branch  */
    struct node * right;   /*  pointer to left branch  	*/    
}Node;

typedef struct tree
{
    Node * root;        /* pointer to root of tree  	*/
    int size;            /* number of items in tree 	*/
}Tree;

/* function prototypes                              	*/
/* operation: 		initialize a tree to empty 	*/

/* preconditions:      ptree points to a tree     	*/
/* postconditions:     the tree is initialized to empty */
void InitializeTree(Tree * ptree);

/* operation:         determine if tree is empty	*/
/* precondiions:      ptree points to a tree		*/
/* postconditions:    function returns false otherwise  */
bool TreeIsEmpty(const Tree * ptree);

/* operation:	      determine if tree is full   	*/
/* preconditions:     ptree points to a tree		*/
/* postconditions:    function returns false otherwise  */
bool TreeIsFull(const Tree * ptree);

/* operation:        determine number of items in tree	*/
/* preconditions:    ptree points to a tree		*/
/* postconditions:   function returns number of items   */
/* 		     in tree			        */

int TreeItemCount(const Tree * ptree);
/* operation:       add an item  to a tree		*/
/* preconditions:   pi is address of item to be added   */
/*                  ptree points toan initialized tree  */
/* postconditions:  if possible, function adds item to  */
/*                  the function returns true; othewsie */
/*                  the function returns false		*/

bool AddItem(const Item * pi, Tree * ptree);
/* operation:      find an item in tree			  */
/* preconditions:  pi points to an item			   */
/* 		   ptree points to and intialized tree      */
/* postconditions: if possible, function deletes  item  */
/* 		   from tree and returns tree;		     */
/*		   otherwise,the function returns fasle      */

bool InTree(const Item * pi, const Tree * ptree);
/* operation delete an item from a tree           */
/*preconditions: pi is address of item to be deleted  */
/* ptree points to an initialized tree               */
/* postconditions: if possible, function deletes item    */
/* from tree and returns true;                    */
/* otherwise, the function returns false              */

bool DeleteItem(const Item * pi, Tree * ptree);

/* operation:  	  apply a function to each item in     */
/* 		  the tree			       */
/* preconditions: ptree points to a tree	       */
/*                pfun points to a function that takes */
/* 		  an Item argument and has no return   */
/*		  value				       */
/* postcondition: the function pointed to by pfun is   */
/* 		  executed once for each item in tree  */
void Traverse (const Tree * ptree, void( * pfun)(Item item));

/* operation:     delete everything from a tree       */
/* preconditions: ptree points to an initialized tre  */
/* postconditions:tree is empty			      */
void DeleteAll(Tree * ptree);


#endif 














