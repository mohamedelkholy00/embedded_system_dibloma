/*
 ============================================================================
 Name        : c_basics_3.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float x,y,z;
	printf ("enter three numbers:");
	fflush (stdin); fflush (stdout);
	scanf ("%f%f%f",&x,&y,&z);
	if ((x>y)&&(x>z))
		printf ("the largest number is:%f",x);
	else if (((y>x)&&(y>z)))
		printf ("the largest number is:%f",y);
	else
			printf ("the largest number is:%f",z);
}
