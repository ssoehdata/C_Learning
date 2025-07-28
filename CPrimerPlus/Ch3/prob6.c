#include<stdio.h>
int main(void)
{

float watmol, converted,grams_quart;
int quart, grams; 

watmol = 3.0E-23;
grams_quart = quart * 950;
converted =  quart / watmol;

printf("Enter the an amount of quarts:\n");
scanf("%d", &quart);

/* printf("You entered %d quarts.\n", quart); */
/* printf("There are %d grams in %d quarts\n", grams_quart, quart); */

printf("There are %f water molecules in %d quarts\n", converted, quart);


return 0;

}
