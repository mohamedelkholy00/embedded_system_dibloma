/*
 ============================================================================
 Name        : c_basics_6.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,sum;
	printf ("enter an integer:");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&n);

	if (n>0){
		//sum=(n(n+1))/2;
		sum=(n+1);
		sum=n*sum;
		sum=sum/2;
		printf ("sum = %d",sum);
	}
	else
		printf ("not allowed.");
}
