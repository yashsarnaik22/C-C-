#include<stdio.h>
int main()
{int i,n,sum=0, A[20], max=0, min=9414173314;
printf("how many elements u want?\n");
scanf("%d",&n);
printf("Enter array elements:\n");
for(i=0;i<n;i++)
 scanf("%d", &A[i]);
 
 printf("\n ur array is:\n ");
 for(i=0;i<n;i++)
 printf("%d " ,A[i]);
 printf("\n Sum of array elements is:\n");
 for(i=0;i<n;i++)
 sum+=A[i];
 printf(" %d\n", sum);
 for(i=0;i<n;i++)
 { if(A[i]>max)
    max=A[i];
 } printf("the largest number in array is %d\n", max);
 
 for(i=0;i<n;i++)
 {if(A[i]<min)
 min=A[i];
 }printf("the smallest no. is %d\n",min);
 
 
 return 0;
}
