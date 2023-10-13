/*
 ============================================================================
 Name        : c_basic_4.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main() {
	float x,y,z;
	printf("enter two numbers :");
	fflush (stdin);fflush (stdout);
	scanf("%f%f",&x,&y);
	z=x*y;
	printf("product :%f",z);


}
