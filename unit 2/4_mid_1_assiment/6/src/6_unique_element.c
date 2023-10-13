/*
 ============================================================================
 Name        : 6_unique_number.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int uniq (int a[])
{
	int i,n=0;
	for (i=0;i<5;++i)
	{
		n=n^a[i];
	}
	return n;
}
int main()
{
	int a[5]={1,2,1,2,3};
	printf ("the unique element is :%d",uniq(a));
	return 0;
}
