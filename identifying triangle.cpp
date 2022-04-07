#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter three sides of a triangle: \n");
	scanf("%d%d%d", &a, &b, &c,"\n");
	
	if(a==b && b==c && c==a)
	printf("it is an equilateral triangle");
	else if(a==b && b!=c || a==c && a!=b || b==c && c!=a)
	printf("the triangle is isosceles");
	else
	 printf("the triangle is scalene");
	
	return 0;
}                     
