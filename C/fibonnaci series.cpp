#include<stdio.h>
 int main ()
 {
 	int a,b,c,i,n;
 	printf("upto how many elements u want the fibonacci series:\n ");
 	scanf("%d", &n);
 	printf("the fibonacci series upto %d elements :\n",n);
 	a=0;
 	b=1;
 	printf("%d\n",a);
 	printf("%d\n",b);
 	for(i=0;i<=n-3;i++)
 {   
 	 	 c=a+b;
		 a=b;
		 b=c;
		 printf("%d\n",c);
		 }
 return 0;
 }
