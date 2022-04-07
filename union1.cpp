#include<stdio.h>
#include<string.h>

struct STUDENT{
	int rollno,TPS=0,TCC=0;
	int CC[5];
    int ptsscr[20];
	char sub[5];
	int gradepoint[10];
	int earnedcredit[10];
};
int main()
{ int i,j ,k ,l; 
struct STUDENT data[100], S; 
 printf("enter student's roll no.:");
 scanf("%d", &data[2].rollno);

   printf("enter course credits:\n");
 for(i=0;i<5;i++)
{ scanf("%d",&data[i].CC[i]);
  } 
   printf("enter earned credits\n");
 for(i=0;i<5;i++)
{ scanf("%d",&data[i].earnedcredit[i]);
  } 
  printf("enter subjects\n");
  for(i=0;i<5;i++)
{ scanf("%s",data[i].sub);
  }
   printf("enter grade points:\n");
 for(i=0;i<5;i++)
{ scanf("%d",&data[i].gradepoint[i]);
  } 
  for(i=0;i<5;i++)
  { 
   data[i].ptsscr[i]=data[i].earnedcredit[i]*data[i].gradepoint[i];
  }
 printf("subjects\tCC\tgrades obt\t\GRADE\tPoints Scored\t\n");
 for(i=0;i<5;i++)
 { printf("%s\t\t",data[i].sub);
   printf("%d\t\t",data[i].CC[i]);
   printf("%d\t",data[i].earnedcredit[i]);
   printf("%d\t\t",data[i].gradepoint[i]);
   printf("%d\t\n",data[i].ptsscr[i]);
 }
 for(i=0;i<5;i++)
  { 
   S.TPS=S.TPS+data[i].ptsscr[i];
   S.TCC=S.TCC+data[i].CC[i];
  }
 printf("\n\ntotal points scored= %d",S.TPS);
 printf("\nSGPA :%d",S.TPS/S.TCC );
	
	return 0;
}

