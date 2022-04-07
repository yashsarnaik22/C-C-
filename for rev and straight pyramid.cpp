#include<stdio.h>
int main()
{
	int i,j,k,n,m;
	n=0; m=5;
for(i=n+1;i<=m;i++)
    {for(k=n+1; k<=i ;k++)
    { printf("  "); }
	for(j=m;j>i;j--)
	{ printf(" *  "); } 
    printf("*\n"); 
	}
}
