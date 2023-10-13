/*
 ============================================================================
 Name        : c_basics_7.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i=1;
	unsigned long long int fac=1;
	printf ("enter an integer:");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&n);

	if (n>0){
		for(i=1;i<=n;++i)
		{
			fac=(fac*i);
		}

		printf ("factorial = %llu",fac);
	}
	else if (n==0)
		printf ("factorial = 1");

	else
		printf ("ERROR!!!");
	return 0;
}
