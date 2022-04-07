#include<stdio.h>

int main()
{
	int n1,n2,n3 ;
	printf("enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3,"\n");
	
	if(n1>n2 && n1>n3)
	printf("%d is the greatest number.", n1);
	
	else if(n2>n1 && n2>n3)
	printf("%d is greatest number.",  n2);
	
	else if(n3>n1 && n3>n1)
	printf("%d is the greatest number.", n3);
	
	else if(n1==n2 || n1==n3 || n2==n3)
	printf("all numbers are same.");
	return 0;
}
