/*
 ============================================================================
 Name        : 7_summing.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int sum_without_loop(int start , int end);
int main()
{
	int start , end;
	printf("Enter start and end :");
	fflush(stdin); fflush(stdout) ;
	scanf("%d%d",&start,&end);
	printf("sum from %d to %d = %d" , start , end , sum_without_loop(start , end));
}
int sum_without_loop(int start , int end)
{
	static int sum=0;
    if(start <= end)
	{
		sum += start;
		sum_without_loop(start+1 , end);
    }

	return sum ;
}
