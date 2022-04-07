                     /*LDC ASSIGNMENT 
                       OPERATIONS ON MATRICES */

#include<stdio.h>
int main()
{ 
 int i,j,r,c,k,Y1[10][10], Y2[10][10], A[10][10], Y3[10][10], Y4[10][10], mul[10][10];
 printf("enter no. of rows and columns: \n");         //taking number of rows and columns required
 scanf("%d%d", &r,&c);
 
 printf("ENTER FIRST ARRAY:\n");      //taking fisrt array's elements
 for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
     scanf("%d", &Y1[i][j]);
   }
 printf("ENTER SECOND ARRAY:\n");     // taking second array's elements
 for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
     scanf("%d", &Y2[i][j]);
   }
 printf("your matrices are:\n");      // displaying the matrices
 for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
     printf("%d ", Y1[i][j]);
     printf("\n");
   }   printf("&\n");
 for(i=0;i<r;i++)                     
   { for(j=0;j<c;j++)
     printf("%d ", Y2[i][j]);
     printf("\n");
   }  printf("\n");
 for(i=0;i<r;i++)                     // for addition
   { for(j=0;j<c;j++)
     A[i][j]=Y1[i][j]+Y2[i][j];
   }
 printf("THE ADDITION OF MATRICES IS:\n");  //displaying addition result
 for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
     printf("%d ", A[i][j]);
     printf("\n");
   }  printf("\n");
  for(i=0;i<r;i++)                      //for subtraction
   { for(j=0;j<c;j++)
     A[i][j]=Y1[i][j]-Y2[i][j];
   }
 printf("THE SUBTRACTION OF MATRICES IS:\n"); //displaying subtraction result
 for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
     printf("%d ", A[i][j]);
     printf("\n");
   }  printf("\n"); 
 for(i=0;i<r;i++)            //for multiplication
   { for(j=0;j<c;j++)
     { mul[i][j]=0;
       for(k=0;k<c;k++)
        {
	     mul[i][j]+=Y1[i][k]*Y2[k][i];
        }
     }
   } printf("\n");
 printf("THE MULTIPLICATION OF MATRICES IS:\n");  //displaying multiplication result
 for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
     printf("%d ", mul[i][j]);
     printf("\n");
   }
 printf("THE THE TRANSPOSE OF Y1 IS:\n");        //for transpose of first matrix
 for(i=0;i<c;i++)
   { for(j=0;j<r;j++)
     printf("%d ", Y3[j][i]=Y1[i][j]);
     printf("\n");
   } printf("\n");
 printf("THE THE TRANSPOSE OF Y2 IS:\n");        //for transpose of second matrix
 for(i=0;i<c;i++)
   { for(j=0;j<r;j++)
     printf("%d ", Y4[j][i]=Y2[i][j]);
     printf("\n");
   }
 return 0;
}                         //thank you................
