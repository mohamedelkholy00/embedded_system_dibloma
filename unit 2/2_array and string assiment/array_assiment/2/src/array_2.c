/*
 ============================================================================
 Name        : array_2.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int i,k;
int main() {

	float arr[i],av,sum;
	printf ("enter number of data :");
	fflush (stdin);fflush (stdout);
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		printf ("enter number :");
		fflush (stdin);fflush (stdout);
		scanf("%f",&arr[i]);

	}

	for (i=0;i<k;++i)
	{
		sum=sum+arr[i];
	}
	av=(sum/k);
	printf (" average =%f",av);
	return 0;
}
