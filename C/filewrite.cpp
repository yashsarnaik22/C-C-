#include<stdio.h>
 int main()
 {
 	int i=0;
 	FILE *a=fopen("file str.txt", "w");
 	 if(a==NULL)
 	 return 0;
 	 
 	 char string[]="write your name here in new file";
 	 
 	 for(i=0;string[i]!='\0';i++)
 	 fputc(string[i], a);
 	 fclose(a);
	  	fopen("newfile.txt", "r");
		  char buff[10];
	while(!feof(a))
	{
	fread(buff,sizeof(buff),20,a);
	printf("%s",buff);
    }
 	 
 	 fclose(a);
 	 
 	 return 0;
 	 
 }
