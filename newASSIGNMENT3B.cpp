

                                        /* ANNUAL EXAM GRADE DISPLAYING PROGRAM
                                                HOPE u SCORE WELL*/



#include<stdio.h>


int main()
{
	int marks;
	printf("enter ur total marks obtained:\n");
	scanf("%d", &marks);
	
	if(90<=marks && marks<=100)
	printf("congrats! u have passed with distinction...");
	else if(60<=marks && marks<90)
	printf("better luck next time! U got 2nd grade");
	else if(35<=marks && marks<60)
	printf("u made it to PASS, try harder");
	else if(0<=marks && marks<35)
	printf("HARD LUCK! u failed, padhai likhayi kro!");
	else
	printf("Invalid input!");
	
	return 0;
	
}               //THANK YOU.......
