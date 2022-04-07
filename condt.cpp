#include <stdio.h>
 
int main()
{
int x, y ;
 printf("enter x;\n");
scanf("%d", &x);
   y=(x=0? 0 :1);
   y = ( x<1? 1 : -1 ) ;
   printf("x value is %d\n", x);
   printf("y value is %d", y);
   
   return 0;
} 
