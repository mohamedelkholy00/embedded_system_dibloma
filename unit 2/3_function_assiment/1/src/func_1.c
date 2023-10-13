/*
 ============================================================================
 Name        : fun_1.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int fun (int num);

int main() {
	int n1,n2,i,flag;
	printf ("enter two numbers(intervals):");
	fflush (stdin);fflush (stdout);
	scanf ("%d %d",&n1,&n2);
	printf ("prime numbers between %d and %d are :\n",n1,n2);
	for (i=n1;i<=n2;i++)
	{
		flag =fun (i);
		if (flag ==0)
			printf ("%d \n",i);

	}
	return 0;
}
int fun (int num)
{
	int j,flag =0;
	for(j=2;j<=num/2;j++)
	{
		if (num%j==0)
		{
			flag=1;
			break ;

		}
	}
	return flag;
}
