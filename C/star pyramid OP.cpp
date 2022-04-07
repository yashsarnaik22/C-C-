         /*LDC ASSIGNMENT 5
            VARIOUS PATTERNS OF ASTERISK(*)*/

#include<stdio.h>
int main()
{ int i,j,n,k,m;
n=4;          //for pattern 1[stairs]
for(i=0; i<=n;i++)
{
for(j=1; j<=i; j++)
{
printf("* ");}
printf("*\n");
}
printf("-------------\n");
n=4;         //for pattern 2[mirror image of 1]
for(i=0; i<=n;i++)
{
for(j=n; j>=i; j--)
{
printf("* ");}
printf("\n");
} 
n=4;        //for pattern 3[star pyramid]
for(i=0; i<=n;i++)
 {
 for(k=3; k>=i; k--)
    { printf("  ");}
 for(j=1; j<=i; j++)
   {printf(" *  ");} 
    printf("*\n");}
    printf("-----------------------\n");
    
	n=0; m=5; //for pattern 4[mirror image of pyramid]
for(i=n+1;i<=m;i++)
    {for(k=n+2; k<=i ;k++)
    { printf("  "); }
	for(j=m;j>i;j--)
	{ printf(" *  "); } 
    printf("*\n"); 
	}
	printf("\n");
 
n=4; m=8; //for pattern 5[diamond]
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
