/*
 ============================================================================
 Name        : c_basic_2.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdio.h>
int main() {
	char x;
	printf ("enter an alphabet:");
	fflush (stdin);fflush (stdout);
	scanf ("%c",&x);
	if ((x=='a'||x=='A')||(x=='e'||x=='E')||(x=='i'||x=='I')||(x=='o'||x=='O')){
		printf ("%c is a vowel ",x);
	}
	else
		printf ("%c is a consonant",x);
}
