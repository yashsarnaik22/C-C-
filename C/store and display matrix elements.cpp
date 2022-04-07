#include<stdio.h>
int main()
{
	int A[3][3],c,i,j,r;
	printf("Enter the no. of Rows and Coloumns:\n");
	scanf("%d%d", &r,&c);
	for(i=0;i<r;i++)
	{ 
	 for(j=0;j<c;j++)
	 scanf("%d", &A[i][j]);
	}
printf("the matrix is:\n");
	for(i=0;i<r;i++)
	{ 
	 for(j=0;j<c;j++)
	 printf("%d ", A[i][j]);
	 
	}printf("\n");
return 0;
} 

