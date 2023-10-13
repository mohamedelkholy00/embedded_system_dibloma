/*
 ============================================================================
 Name        : c_basics_8.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : c_basics_8.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
	float x,y;
	char ope;
	printf ("enter operator :");
	fflush (stdin);fflush (stdout);
	scanf ("%c",&ope);
	printf ("enter two operands:");
	fflush (stdin);fflush (stdout);
	scanf ("%f %f",&x,&y);
	switch (ope)
	{
	     case '+':
	             {
	    	         printf ("%f + %f = %f",x,y,x+y);
	             }
	             break;
	     case '-':
	     	     {
	     		     printf ("%f - %f = %f",x,y,x-y);
	     	     }
	     	     break;
	     case '*':
	     	     {
	     		     printf ("%f * %f = %f",x,y,x*y);
	     	     }
	     	     break;

	     case '/':
	     	     {
	     		     printf ("%f / %f = %f",x,y,x/y);
	     	     }
	     	     break;
	     default :
	    	         printf ("ERROR!!");
   }
return 0;
}
