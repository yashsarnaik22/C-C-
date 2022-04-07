/*Yash Sarnaik
221-D3
combinations*/
#include<iostream>
#include<string.h>
using namespace std;
char temp[20];
void combination(char *str,int n,int in)
{
	int count;
	for(int i=0; i<strlen(str); i++)
	{
		temp[in]=str[i];
		if(in==n-1)
			cout<<"\t"<<temp;
		else
			combination(str,n,in+1);
			count++;
		}
	}
int main()
{
	int n;
	char str[20];
	cout<<"\n enter the string you want combination of:";
	cin>>str;
	for(n=1; n<=strlen(str); n++)
	{
		combination(str,n,0);
	}
}
