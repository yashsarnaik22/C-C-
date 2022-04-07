                                       /* LDC LAB ASSIGNMENT 
                                            MENU DRIVEN PROGRAM */
                                            
                                            
#include<stdio.h>
int main()
{
	int num1, num2, sum,diff, product, ch;
	float div;
	printf("enter numbers\n");
	scanf("%d%d", &num1, &num2); printf("\n\\n\n\n\n\n");
	printf("-----menu---------\n |1.addition\n |2.subtraction\n |3.multiplication\n |4.division\n");
	printf("enter ur choice:");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:sum=num1+num2;
		printf("the addittion is: %d", sum);
		break;
		
		case 2: diff= num2-num1;
		printf("the subrtaction is: %d", diff);
		break;
		
		case 3: product=num1*num2;
		printf("the multiplication is: %d", product);
		break;
		
		case 4: div= num2/num1;
		printf("the division is: %f", div);
		break; 
	}
	
return 0;
}                                        //THANK YOU..............
