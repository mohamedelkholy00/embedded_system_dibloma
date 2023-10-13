/*
 ============================================================================
 Name        : 10_max_ones.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int count_max_n_ones(int num);
int main()
{
	int num;
	printf("enter number :");
	fflush(stdout);
	scanf("%d" , &num);
	printf("max number of ones : %d" , count_max_n_ones(num)) ;
}
int count_max_n_ones(int num)
{
	int count=0;
	while(num)
	{
		num = (num&((unsigned)num>>1));
		count++;
	}
	return count;
}
