/*
 ============================================================================
 Name        : string_3.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char st[1000],rev[1000];
	int i,j=0;
	printf ("enter the string :");
	fflush (stdin);fflush (stdout);
	gets (st);
	for (i=strlen(st)-1;i>=0;--i)
	{
		rev[j]=st[i];
		j++;
	}
	printf ("reverse string is:%s",rev);
}
