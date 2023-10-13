/*
 ============================================================================
 Name        : c_basics_5.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
char x;
int main() {
	printf ("enter a character:");
	fflush (stdin);fflush (stdout);
	scanf ("%c",&x);
	switch (x)
	{
	case 'a'...'z':
	case 'A'...'Z':
	    printf("%c is an alphabet.",x);
	break;
	default:
		printf ("%c is not an alphabet.",x);
	}
}
