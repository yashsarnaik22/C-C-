#include<stdio.h>
#include<string.h>
int CONCAT( char P[], char Q[])
{ int i,j=0,k,l;

for(i=0;P[i]!='\0';i++)
{ 
j++;
}
for(l=j;Q[k]!='\0';l++,k++)
{
	P[l]=Q[k];
}
P[l]='\0';

return P[50];
}

int main()
{
 int a,i,count=0,len=0;
	char S[10],  D[10];
	
	printf("Enter your 1st string:");
scanf("%s", S);
printf("Enter your 2nd string:");
scanf("%s",D );
   
CONCAT(S,D);
printf("\n\nyour concatinated string is: %s", S);

return 0;
}

