#include<stdio.h>

int add( int *a, int *b)
{ int c= *a+*b;
return c;
}
int sub( int *a, int *b)
{ int d= *a-*b;
return d;
}
int mul( int *a, int *b)
{ int e= (*a)*(*b);
return e;
}
float div( int *a, int *b)
{ float f= (*a)/(*b);
return f;
}
int main()
{ 
int c,d,e,n1,n2;
float f;
 printf("enter two numbers :\n");
 scanf("%d%d", &n1, &n2);
  
  printf("the addition is: %d\n", add(&n1,&n2));
  printf("the subtraction is: %d\n", sub(&n1,&n2));
  printf("the multiplication is: %d\n", mul(&n1,&n2));
  printf("the division is: %lf\n", div(&n1,&n2));
	return 0;
}

