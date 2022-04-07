                                                            /* LDC ASSIGNMENT 3(A)
                                                TO DISPLAY FUNCTIONS OF math.h HEADER FILE */


#include<stdio.h>
#include<math.h>

int main()
{
    double a,b;
    
	printf("GIVE TWO NUMBERS:\n");                     //n we will show u a magic..
	
	scanf("%lf%lf", &a,&b);
	
	printf(" square root(%lf) = %lf\n square root(%lf) = %lf\n\n",a,sqrt(a),b,sqrt(b));           
	
	printf(" smallest integer greater than %lf = %lf\n smallest integer greater than %lf = %lf\n\n",a, ceil(a),b,ceil(b));
	
	printf(" absolute value of %lf = %lf\n absolute value of %lf = %lf\n\n",a,fabs(a),b,fabs(b));
	
	printf(" greatest integer smaller than %lf = %lf\n greatest integer smaller than %lf = %lf\n\n",a,floor(a),b,floor(b));
	
	printf(" %lf to the power %lf = %lf\n\n",a,b,pow(a,b));
	
	printf(" log of %lf base 10 = %lf\n log of %lf base 10 = %lf\n\n",a,log10(a),b,log10(b));
	
	printf(" %lf divided by %lf gives remainder = %lf", a,b,fmod(a,b));
	

return 0;
}                     //THANK YOU..... the magic ends!!!
