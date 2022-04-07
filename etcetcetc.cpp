#include <stdio.h>

int main ()
{
int i, j,n;
printf("enter the range:\n");
scanf("%d", &n);
for(i =2; i<n; i++) {

for(j =2; j <=(i/j); j++)
{
if((i%j!=0) ) break;
if(j>(i/j))
 printf("%d\n", i);

}
}

return 0;
}

