#include<stdio.h>
#include<string.h>



int main()
{
 int a,i,j;
	char S[10], T[10], D[10];
	
	printf("Enter your 1st string:");
scanf("%s", S);
a=strlen(S);
j=a-1;
for(i=0;i<a;i--)
 for(j=0;j<=a;j++)
 T[i]=S[j];
 j--;
 
printf("your reversed string is : %s\n", T);
return 0;
}
