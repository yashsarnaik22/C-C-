#include<stdio.h>
#include<string.h>


int fact(int N)
{ if (N>=1)
return N*fact(N-1);
else return 1;}
int main()
{ int n;
printf("enter a positive integer\n");
scanf("%d", &n);
printf("factorial of %d= %d", n,fact(n));
return 0;
} 
/*
int fibo(int i)
{ if(i==0)
return 0;
else if(i==1)
return 1;
else return fibo(i-1)+fibo(i-2);
}
int main()
{ int i,n;
printf("enter the range of the series:\n");
scanf("%d", &n);
for(i=0;i<n;i++)
printf("%d ", fibo(i));
return 0;
}

int pal(char A[80])
{
	int i=0,c,l,count=0;
	while(A[i]!='\0')
	{  l++;
	} 
	i++;
for(i=0;A[i]!='\0';i++)
{
if(A[i]==A[l-i-1])
{ count++;
            }
else 
break;
}
if(count==i)
c=0;
else  c=1;
}

int main()
{   char S[40];
	int c;
	printf("enter a string:\n");
	scanf("%s",&S);
	pal(S);
	if(c==0)
	printf("string is a palindrome\n");
	else
	printf("string is not a palindrome\n");
	return 0;
} */


