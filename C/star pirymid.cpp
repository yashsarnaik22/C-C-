#include<stdio.h>
int main()
{ int i,j,n,k,m;
n=4;
for(i=0; i<=n;i++)
{
for(j=1; j<=i; j++)
{
printf("* ");}
printf("*\n");

}
printf("\n\n");
n=4;
for(i=0; i<=n;i++)
{
for(j=n; j>=i; j--)
{
printf("* ");}
printf("\n");
}

 
n=4; m=8;
 for(i=0; i<=n;i++)
 {
 for(k=3; k>=i; k--)
    { printf("  ");}
 for(j=1; j<=i; j++)
   {printf(" *  ");} 
    printf("*\n");}
 for(i=n+1;i<=m;i++)
    {for(k=n+1; k<=i ;k++)
    { printf("  "); }
	for(j=m;j>i;j--)
	{ printf(" *  "); } 
    printf("*\n"); 
	}
    return 0;
}
