/*
 ============================================================================
 Name        : array_4.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : array_4.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,k,c,i,arr[20];
	printf ("enter no of elements :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&n);
	for (i=0;i<n;++i)
	{
		printf ("enter element:%d ",i+1);
		fflush (stdin);fflush (stdout);
		scanf ("%d",&arr[i]);
	}
	printf ("enter the element to be inserted : ");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&k);
	printf ("enter the location :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&c);
	for (i=n;i>=c;--i)
	{
		arr[i]=arr[i-1];
	}
	n++;
	arr[c-1]=k;
	for (i=0;i<n;i++)
	{
		printf ("%d",arr[i]);
	}
	return 0;
}
