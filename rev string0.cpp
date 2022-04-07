#include<stdio.h>
#include<string.h>

int check( char P[], char Q[])
{ int i=0,flag=0;
 while(P[i]!='\0' && Q[i]!='\0')
 { if(P[i]!=Q[i])
    flag =1;
	break;
	 } i++;
if(flag==0)
printf("string is a Palindrome\n");
else
printf("string is not a Palindrome\n");
return 0;
}

int main()
{
 int a,i,j;
	char S[10], T[10], D[10];
	
	printf("Enter your 1st string:");
scanf("%s", S);
a=strlen(S);
j=a-1;
for(i=0;i<a;i++)
{

 T[i]=S[j];
 j--;
}
printf("your reversed string is : %s\n", T);
check(S,T);

return 0;
}
