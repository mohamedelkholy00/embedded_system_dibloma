/*
 ============================================================================
 Name        : array_3.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : array_3.c
 Author      : mohamed nabil
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int r,c,i,j;
	int arr[10][10],brr[10][10];
	printf ("enter rows and columns of matrix :");
	fflush (stdin);fflush (stdout);
	scanf("%d %d",&r,&c);
	fflush (stdin);fflush (stdout);
	printf ("enter elements of matrix \n");
	for (i=0;i<r;++i)
	{
		for (j=0;j<c;++j)
		{
			printf ("enter element arr %d%d :",i+1,j+1);
			fflush (stdin);fflush (stdout);
			scanf("%d",&arr[i][j]);
		}
	}

	printf ("entered matrix :\n");
	for (i=0;i<r;++i)
	{
		for (j=0;j<c;++j)
		{
			printf ("%d ",arr[i][j]);
			if (j==(c-1))
				printf ("\n\n");
		}
	}
	for (i=0;i<r;++i)

		for(j=0;j<c;++j)
		{
			brr[i][j]=arr[j][i];
		}

	printf ("transpose matrix :\n");
	for (i=0;i<c;++i)
	{
		for (j=0;j<r;++j)
		{
			printf ("%d ",brr[i][j]);
			if (j==(r-1))
				printf ("\n\n");
		}
	}
	return 0;
}
