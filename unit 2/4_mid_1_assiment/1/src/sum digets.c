/*
 ============================================================================
 Name        : summing.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int add(int n)
{
	int d ,s;
	if (n!=0)
	{
		d=n%10;
		n=n/10;
		s=(d+add(n));
	}
	else
		return 0;

	return s;
}
int main()
{
	int a;
	printf ("Enter the numper :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&a);
	printf ("%d", add(a));
	return 0 ;
}
