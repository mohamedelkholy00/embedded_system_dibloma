/*
 ============================================================================
 Name        : 3_prime_numpers.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prime (int n1,int n2)
{
	int i,j,k=0;
	for (i=n1+1;i<n2;++i )
	{
		for (j=2;j<i;++j)
		{
			if (i%j==0)
			{
				k=1;
				break;
			}
		}
		if (!k)
			printf ("\n%d",i);
		else
			k=0;
	}
}
int main()
{
	int n1,n2;
	printf ("enter the first number :");
	fflush (stdout);
	scanf ("%d",&n1);
	printf ("enter the second number :");
	fflush (stdout);
	scanf ("%d",&n2);
	printf ("the prime numbers between %d and %d are : ",n1,n2);
	prime(n1,n2);
	return 0;
}
