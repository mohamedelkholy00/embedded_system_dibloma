/*
 ============================================================================
 Name        : func_4.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fun (int n1,int n2);
int main()
{
	int bas,pow;
	printf ("enter base number :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&bas);
	printf ("enter  positive power number :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&pow);
	fflush (stdin);fflush (stdout);
	printf ("%d ^%d =%d",bas,pow,fun(bas,pow));
	return 0;
}
int fun (int bas,int pow)
{
	if (pow!=0)
		return (bas*fun(bas,pow-1));
	else
		return 1;
}
