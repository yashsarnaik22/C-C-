#include<stdio.h>
#include<string.h>
int main()
{   int a,i;
	char S[10], T[10], C[10], STR1[10],STR2[10],count=0;
	printf("Enter your 1st string:");
	scanf("%s", S);
	printf("your string is : %s", S);
	printf("\nEnter your 2nd string:");
	scanf("%s", T);
	printf("your string is : %s", S);
	for(i=0;S[i]!='\0';i++)
{	count++; }
    printf("\n\nlength of 1st string is: %d",count);
	printf("\nlength of 2nd string is: %d",strlen(T));
    a=strcmp(S,T);
    if(a==0)
    printf("\n\nstrings are equal\n");
    else
    printf("\n\nstrings are not equal\n");
    strcpy(C,S);
    printf("\n\nS copied to C: %s",C);
    printf("\nconcatination of strings is %s", strcat(C,T));
    
    for(i=0;C[i]!='\0';i++)
     { 
	  if(C[i]>='A'&& C[i]<='Z')
      C[i]=C[i]+32; 
	  }
	  printf("\n\nstring after case change is : %s\n\n", C);
	  
	   for(i=0;C[i]!='\0';i++)
     { 
	  if(C[i]>='a'&& C[i]<='z')
      C[i]=C[i]-32; 
	  }
	  printf("\n\nstring after case change is : %s\n\n", C);
   /*  STR1= substr(S,2,2));
     STR2= substr(T,3,4)); 
     printf("\n%s\n",STR1);
     printf("\n%s\n",STR2); */
	printf("\nreverse of 1st string is: %s", strrev(S));
	printf("\nreverse of 2nd string is: %s", strrev(T));
		
	
	return 0;
}
