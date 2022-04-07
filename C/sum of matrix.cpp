                /* LDC ASSIGNMENT 6
                 SUM OF ARRAY ELEMENTS (1D ARRAY) */


#include<stdio.h>

int main()
{ int A[10], n,i, sum=0;
  printf("enter the range of  your array:\n");
  scanf("%d", &n);
  
  for(i=0; i<n; i++)
  { scanf("%d", &A[i]);}
  
  for(i=0;i<n;i++)
  { sum+=A[i];
  }
  
  printf("\nsum of the array elemnts is : %d\n", sum);
  
  return 0;
}
  
  
