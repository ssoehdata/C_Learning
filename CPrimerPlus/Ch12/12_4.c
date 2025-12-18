/* global.c  -- uses  an external variable  */

/* here both main() and critic() have access to the external variable units
   this can be done by declaring it units outside of and above these two 
   functions, as in this example. 
*/
#include<stdio.h> 
int units = 0;        /* an external variable  */
void critic(void);
int main(void)
{
    extern int units;   /* an optional redeclaration */
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic( );
    printf("You must have looked it up!\n");

    return 0;

}

void critic(void)
{
    /* optional redeclaration omitted */
    printf("No luck, chummy. Try again.\n");
    scanf("%d", &units);
}

