#include<stdio.h>
#include<string.h>
struct STUDENT
 { 
 int rollNo;
 char name[10];
 float percentage;
 };
int main()
{ int i, n;
 struct STUDENT S[50];	
 printf("How many students are there?\n");
 scanf("%d", &n);
 for(i=0;i<=n;i++)
 {
 
 scanf("%d", &S[i].rollNo);
 scanf("%s", S[i].name);
 scanf("%f", &S[i].percentage);
}
printf("the students details are:\n");
printf("roll no.\tNAME\t\tpercentage\n");
for(i=0;i<n;i++)
{
printf("%d\t\t",S[i].rollNo);
printf("%s\t\t", S[i].name);
printf("%f\n", S[i].percentage);
}
 return 0;
}

