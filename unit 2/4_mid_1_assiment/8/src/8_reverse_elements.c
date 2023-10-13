/*
 ============================================================================
 Name        : 8_reverse_elements.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#define size 5
void reverse_array(int arr[]);
int main()

{
	int arr[size]={1,2,3,4,5};
	int i;
	printf("after call function reverse:\n");
	reverse_array(arr) ;
	for(i=0 ; i<size ; i++)
		printf("%d ", arr[i]);
}
void reverse_array(int arr[])
{

	int i=0,j=size-1;
	while(i < j)
	{
		arr[i] = arr[i]^arr[j];
		arr[j] = arr[i]^arr[j];
		arr[i] = arr[i]^arr[j];
		i++;
		j--;
	}
}
