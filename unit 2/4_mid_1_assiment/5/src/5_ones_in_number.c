/*
 ============================================================================
 Name        : 5_number_of_ones.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ones (int num)
{
	int i,j,n=0;
	j=8*sizeof(num);
	for (i=0;i<j;++i)
	{
		if ((num&(1<<i))>>i)
			++n;
		else
			continue;
	}
	return n;
}
int main()
{
	int num,o;
	printf ("enter the number :");
	fflush (stdout);
	scanf ("%d",&num);
	fflush (stdout);
	o=ones(num);
	printf ("number of one digits in %d is :%d",num,o);
}
