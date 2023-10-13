/*
 ============================================================================
 Name        : string_1.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char st [100],k;
	int i,j=0;
	printf ("enter a string :");
	fflush (stdin);fflush (stdout);
	gets(st);
	printf ("enter a character to find frequancy :");
	fflush (stdin);fflush (stdout);
	scanf ("%c",&k);
	for (i=0;st[i]!='\0';++i)
	{
		if (st[i]==k)
			++j;
	}
	printf ("frequencu of %c = %d",k,j);
	return 0;
}
