#include<stdio.h>
#include<string.h>
char alt(char in[20])
{     int i,n;
		for(i=0;i<n;i++)
	{
		if(i%2==0)
		{ if(in[i]>='a'&& in[i]<='z')
		   in[i]=in[i]-32;
		
		}
		  
		else
		{if(in[i]>='A'&& in[i]<='Z')
		
	    in[i]=in[i]+32;}
	
	}
}
int main()
{    int i=0,n;
    char in[20];
	printf("Enter your String:\n");
	scanf("%s",in);
	n=strlen(in)+1;
         
         alt(in);
         
	 printf("\nyour string after operating is:\n\n");
	 printf("%s",in);
	return 0;
}

