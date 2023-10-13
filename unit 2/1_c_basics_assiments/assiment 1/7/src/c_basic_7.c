/*
 ============================================================================
 Name        : c_basic_7.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
int main() {
float x,y;
printf ("enter valeo of a :");
fflush (stdin);fflush (stdout);
scanf ("%f",&x);
printf ("enter valeo of b :");
fflush (stdin);fflush (stdout);
scanf ("%f",&y);
x=x+y;
y=x-y;
x=x-y;
printf ("after swapping , valeo of a =%f\n after swapping , valeo of b =%f",x,y);


}
