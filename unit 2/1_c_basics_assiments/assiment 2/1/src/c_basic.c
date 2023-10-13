/*
 ============================================================================
 Name        : c_basic.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main() {
	int x;
	printf ("enter an integer you want to check :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&x);
	if (x%2==0){
		printf ("%d is even",x);
	}
	else
		printf("%d is odd ",x);
}
