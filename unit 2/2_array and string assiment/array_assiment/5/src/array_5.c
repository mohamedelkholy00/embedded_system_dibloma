/*
 ============================================================================
 Name        : array_5.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,k,i,arr[20];
	printf ("enter no of elements :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&n);
	for (i=0;i<n;++i)
	{
		printf ("enter element:%d ",i+1);
		fflush (stdin);fflush (stdout);
		scanf ("%d",&arr[i]);
	}
	printf ("enter the element to be searched : ");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&k);
	i=0;
	while(i<n&&k!=arr[i])
		{
			i++;
		}
	if(i<n)
		printf ("number found at the location :%d",i+1);
	else
		printf ("NOT FOUND.");

	return 0;
}
