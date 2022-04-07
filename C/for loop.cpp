#include<stdio.h>

int main()
{
	int i,n;
	printf("enter range\n");
	scanf("%d", &n);
	printf("\n");
	printf("/***while loop***/\n\n");
	i=1;
	while(i<=n)
	{
		printf("%d  ", i);
		i+=1;
	}
	printf("\n\n/***do while loop***/\n\n");
	i=1;
	do
	{
		printf("%d  ",i);
		i+=1;
		
		}while(i<=n);
		
	printf("\n\n/***for loop***/\n\n");
	for(i=1;i<=n;i+=1)
	printf("%d   ", i);
	return 0;
}
