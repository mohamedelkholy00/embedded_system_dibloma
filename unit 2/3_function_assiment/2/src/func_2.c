/*
 ============================================================================
 Name        : func_2.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact (int n );
int main() {
	int n;
	printf ("enter an positive integer :");
	fflush (stdin);fflush (stdout);
	scanf("%d",&n);
	fflush (stdin);fflush (stdout);
	printf ("factorial of %d is : %ld",n,fact(n));
	return 0;
}
int fact (int n)
{
	if (n!=1)

		return n*fact(n-1);
}

