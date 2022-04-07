//Name- Yash Sarnaik
//Roll- 231

#include<iostream>
using namespace std;
class sparse
{
int arr[30][30];
int sp[30][30];
int n;
int row;
int col;
public:
	sparse()
	{
		n=0;
	}
	void accept();
	void convert_triplet();
	void display();
	sparse add(sparse s2);
	sparse transpose();
	sparse multiply(sparse s2);


};
void sparse::accept()
{
	int i,j;
	cout<<"\nEnter number of rows:";
	cin>>row;
	cout<<"\nEnter number of columns:";
	cin>>col;
	cout<<"\nEnter elements of matrix:";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
}
void sparse::convert_triplet()
{  
	int i,j;
	sp[0][0]=row;
	sp[0][1]=col;
	int k=1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]!=0)
			{
				sp[k][0]=i;
				sp[k][1]=j;
				sp[k][2]=arr[i][j];
				k++;
				n++;
			}
		}
	}
	sp[0][2]=n;
}

sparse sparse :: transpose()
{
	int i,j,k=0;
	sparse s2;
	s2.sp[0][0] = sp[0][1];
	s2.sp[0][1] = sp[0][0];
	s2.sp[0][2] = sp[0][2];
	k=1;
	for(i=0;i<col;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==sp[j][1])
			{
				s2.sp[k][0]=sp[j][1];
				s2.sp[k][1]=sp[j][0];
				s2.sp[k][2]=sp[j][2];
				k++;
			}
		}
	}
	s2.row=col;
	s2.col=row;
	s2.n=n;
	return s2;
}

sparse sparse::multiply(sparse s2)
{
	int i,j,flag1,flag2,t1,t2,t3=1,sum;
	sparse s3;
	if(sp[0][1]!=s2.sp[0][0])
	{	cout<<"multiplication can't be performed";
	return s3;
	}
s3.sp[0][0]=sp[0][0];
s3.sp[0][1]=s2.sp[0][1];

s2=s2.transpose();
 for(i=0;i<sp[0][0];i++)
 {
 	for(j=0;j<s2.sp[0][0];j++)
 	{
 		sum=0;
 		t1=t2=1;
 		flag1=flag2=0;
 		while(t1<=sp[0][2])
 		{
 			if(sp[t1][0]==i)
 			{
 				flag1=1;
 				break;
			 }
			 t1++;
		 }
		 while(t2<=s2.sp[0][2])
		 {
		 	if(s2.sp[t2][0]==j)
		 	{
		 		flag2=1;
		 		break;
			 }
			 t2++;
		 }
		if(flag1==1 && flag2==1)
		{ while(sp[t1][0]==i && s2.sp[t2][0]==j)
		{
			if(sp[t1][1]==s2.sp[t2][1])
			{
				sum=sum+sp[t1][2]*s2.sp[t2][2];
				t1++;
				t2++;
			}
			else if(sp[t1][1]<s2.sp[t2][1])
			 t1++;
			else
			 t2++;
		}
		if(sum>0)
		{
			s3.sp[t3][0]=i;
			s3.sp[t3][1]=j;
			s3.sp[t3][2]=sum;
			t3++;
			
		}
		}
	 }
  } 
s3.sp[0][2]=t3-1;
s3.n=t3-1;
return s3;

}


sparse sparse::add(sparse s2)
{
    int i,j,k;
    i=j=k=1;
    sparse s3;

    if(row==s2.row && col==s2.col)
    {
        s3.sp[0][0]=row;
        s3.sp[0][1]=col;

        while(i<=n && j<=s2.n)
        {
            if(sp[i][0]==s2.sp[j][0])
            {
                if(sp[i][1]==s2.sp[j][1])
                {
                    s3.sp[k][0]=sp[i][0];
                    s3.sp[k][1]=sp[i][1];
                    s3.sp[k++][2]=sp[i++][2]+s2.sp[j++][2];
                }
                else
                {
                    if(sp[i][1]<s2.sp[j][1])
                    {
                        s3.sp[k][0]=sp[i][0];
                        s3.sp[k][1]=sp[i][1];
                        s3.sp[k++][2]=sp[i++][2];
                    }
                    else
                    {
                        s3.sp[k][0]=s2.sp[j][0];
                        s3.sp[k][1]=s2.sp[j][1];
                        s3.sp[k++][2]=s2.sp[j++][2];
                    }
                }
            }
            else
            {
                if(sp[i][0]<s2.sp[j][0])
                {
                    s3.sp[k][0]=sp[i][0];
                    s3.sp[k][1]=sp[i][1];
                    s3.sp[k++][2]=sp[i++][2];
                }
                else
                {
                    s3.sp[k][0]=s2.sp[j][0];
                    s3.sp[k][1]=s2.sp[j][1];
                    s3.sp[k++][2]=s2.sp[j++][2];
                }
            }
        }

        for(;i<=n;++i)
        {
            s3.sp[k][0]=sp[i][0];
            s3.sp[k][1]=sp[i][1];
            s3.sp[k++][2]=sp[i][2];
        }

        for(;j<=s2.n;++j)
        {
            s3.sp[k][0]=s2.sp[j][0];
            s3.sp[k][1]=s2.sp[j][1];
            s3.sp[k++][2]=s2.sp[j][2];
        }

        s3.sp[0][2]=s3.n=k-1;
    }
    else
    {
        cout << "The addition is not possible!!" << endl;
    }

    return s3;
} 

void sparse::display()
{   cout<<endl;
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<sp[i][j]<<"  ";
		}
		cout<<endl;
	}
}


int main()
{
	sparse s1,s2,s3;
	int ch,ch1;
	do
	{
		cout<<"----SPARSE OPERATIONS-----"<<endl;
		cout<<"\nPress 1 for Sparse Transpose";
		cout<<"\nPress 2 for Sparse Addition";
		cout<<"\nPress 3 for Sparse Multiplication"<<endl;
		cin>>ch1;
		
		switch(ch1)
		{
			case 1:	s1.accept();
					s1.convert_triplet();
					cout<<"\nTranspose of the sparse triplet is as follows:"<<endl;
					s2=s1.transpose();
					s2.display();
					break;
			
			case 2: s1.accept();
					s1.convert_triplet();
					s2.accept();
					s2.convert_triplet();
					s3=s1.add(s2);
					cout<<"Addition of the sparse triplet is as follows:";
					s3.display();
					break;
			
			case 3: s1.accept();
					s1.convert_triplet();
					s2.accept();
					s2.convert_triplet();
    				s3=s1.multiply(s2);
    				cout<<"\nMultiplication is:"<<endl;
    				s3.display();
					break;
			
			default: cout<<"\nWRONG CHOICE!!";
					 break;		 				
		}
		
	cout<<"\nPress 1 to Perform Operations Again";
	cin>>ch;	
		
	}while(ch==1);
	
	return 0;
}


/*
OUTPUT-

----SPARSE OPERATIONS-----

Press 1 for Sparse Transpose
Press 2 for Sparse Addition
Press 3 for Sparse Multiplication
1

Enter number of rows:3

Enter number of columns:3

Enter elements of matrix:0 0 2
0 6 0
0 3 3

Transpose of the sparse triplet is as follows:

3  3  4
1  1  6
1  2  3
2  0  2
2  2  3

Press 1 to Perform Operations Again1

----SPARSE OPERATIONS-----

Press 1 for Sparse Transpose
Press 2 for Sparse Addition
Press 3 for Sparse Multiplication
2

Enter number of rows:3

Enter number of columns:3

Enter elements of matrix:0 1 0
0 0 5
0 0 3

Enter number of rows:3

Enter number of columns:3

Enter elements of matrix:0 1 1
0 5 0
0 0 3
Addition of the sparse triplet is as follows:
3  3  5
0  1  2
0  2  1
1  1  5
1  2  5
2  2  6

Press 1 to Perform Operations Again1
----SPARSE OPERATIONS-----

Press 1 for Sparse Transpose
Press 2 for Sparse Addition
Press 3 for Sparse Multiplication
3

Enter number of rows:3

Enter number of columns:3

Enter elements of matrix:0 1 0
1 1 0
3 1 0

Enter number of rows:3

Enter number of columns:3

Enter elements of matrix:0 1 0
0 0 4
5 0 0

Multiplication is:

3  3  5
0  2  4
1  1  1
1  2  4
2  1  3
2  2  4

Press 1 to Perform Operations Again0

*/
