/*
 ============================================================================
 Name        : string_2.c
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
	char str[100];
	int i;
	printf ("enter the string :");
	fflush (stdin);fflush (stdout);
	gets (str);
	for (i=0;str[i]!='\0';++i);
	printf ("length of string is:%d",i);
	return 0;
}
