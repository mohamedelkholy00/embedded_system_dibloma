/*
 ============================================================================
 Name        : 2_square_root.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float root (int);
int  main()
{
	int num;
	printf ("enter the number:");
	fflush (stdout);
	scanf ("%d",&num);
	printf ("the square root of %d is %.3f",num ,root(num));
	return 0;
}
float root (int num)
{
	return pow (num,1.0/2);
}
