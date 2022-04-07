#include<stdio.h>
int main()
{ int i, j,n;
printf("enter range\n");
scanf("%d", &n);
printf("\n");
i=n;
printf("/**while loop**/\n\n");
while(i>=1)
{ printf("%d  ", i);
   i-=1;
} 
printf("\n\n");
j=n; 
printf("/***do while loop***/\n\n");
	do
	{
		printf("%d  ",j);
		j-=1;
	}while(j>=1);
	
printf("\n\n");
printf("/***for loop***/\n");
for(i=n; i>=1 ;i--)
 {
   printf("%d ",i);
  }
return 0; 
}
