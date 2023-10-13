/*
 ============================================================================
 Name        : 4_revers_digits.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void revers (int num)
{
	int d,k;
	if (num!=0){
		d=num%10;
		k=num/10;
		printf ("%d",d);
		revers (k);
	}

}
int main()
{
	int n;
	printf ("enter the number :");
	fflush (stdin);fflush (stdout);
	scanf ("%d",&n);
	revers(n);
	return 0;
}
