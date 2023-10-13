/*
 ============================================================================
 Name        : c_basic_5.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {
	char x ;
	printf("enter a character :");
	fflush (stdin);fflush (stdout);
	scanf ("%c",&x);
	printf ("ASCII of %c = %i",x,x);

}
