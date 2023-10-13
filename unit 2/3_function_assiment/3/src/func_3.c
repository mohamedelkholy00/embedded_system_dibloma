/*
 ============================================================================
 Name        : func_3.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void rev();
int main()
{
	printf ("enter a sentence :");
	fflush (stdin);fflush (stdout);
	rev();
	return 0;
}
void rev()
{
	char c;
	scanf("%c",&c);
	if (c!='\n')
	{
		rev ();
		printf ("%c",c);

	}
}
