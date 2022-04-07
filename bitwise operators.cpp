#include<stdio.h>

int main()
{   unsigned int a,b;
	int c;
	printf("----MENU FOR BITWISE OPERTORS-------\n 1.AND(&) operation \n 2.OR(|) operation \n 3.XOR(^) operation \n 4.NOT(~) operation \n 5.left sift(<<)\n 6.right shift(>>)\n" );
	printf("enter two numbers:\n");
	scanf("%d%d", &a, &b);
	printf("enter ur choice:");
	scanf("%d", &c);
	switch(c)
	{
		case 1: printf("a & b is %d \n", a & b);
		break;
		
		case 2: printf("a | b is %d \n", a | b);
		break;
		
		case 3: printf("a ^ b is %d \n", a^b);
		break;
		
		case 4: printf("~a is %d \n", a = ~a);
		        printf("~b is %d \n", b= ~b);
		break;
		
		case 5 :printf("a<<1 = %d \n", a<<1);
		        printf("b<<1 = %d \n", b<<1);
		break;
		
		case 6:printf("a>>1 = %d \n", a>>1);
		       printf("b>>1 = %d ",b<<1);
		break;


	}
return 0;
}
