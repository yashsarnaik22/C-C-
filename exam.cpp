       /*LDC PRACTICAL EXAM
        Q.3 CHANGING CASE OF CHARACTERS (WITH string.h and ctype.h functions) */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{    int i=0,n;
     char in[20];
	printf("Enter your String:\n");
	scanf("%s",in);
	n=strlen(in)+1;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		in[i]= toupper(in[i]) ;
		else
		in[i]= tolower(in[i]);   
		
	}
	 printf("\nyour string after operating is:\n\n");
	 printf("%s",in);
	return 0;
}

