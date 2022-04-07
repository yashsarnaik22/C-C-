#include<stdio.h>

int main()
{
unsigned int a=1,b=1;
	printf("a&b =%d\n", a&b);
	
	a++;
	printf("a|b = %d\n", a|b);
	++a;
	b++;
		printf("a^b = %d\n", a^b);
		a+=2;
		b+=3;
		printf("a<<1 =%d\n", a<<1);
		printf("b>>1 =%d\n ", b>>1);
		printf("~a = %d", a=~a);
	return 0;
}
