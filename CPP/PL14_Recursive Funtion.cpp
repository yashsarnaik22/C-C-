/*Yash Sarnaik
221-D3
Recursive Function for bank loan portal 
*/
#include<iostream>       
using namespace std;

float recursive(float balance, float r=0, int time=0);   
void display()                                           
{
	cout<<"Bank Loan Portal";
	cout<<"\nLOAN AVAILABLE FOR:";
	cout<<"\n1. EDUCATION \n2. HOME \n3. VEHICLE \n4. PERSONAL ";
}
int main()                      
{
	int t, loan_type;            
	char ch='y';
	display();
	float p, r;
	
	while(ch=='y')                            
	{
		cout<<"\nEnter your choice:";
		cin>>loan_type;
	
	switch(loan_type)              
	{
		case 1:
			cout<<"\tLOAN FOR EDUCATION";
			cout<<"\nUpto 1 lakh is 5%";
			cout<<"\nAbove 1 lakh and upto 5 lacs is 5.5%";
			cout<<"\nAbove 5 lacs 6%";
			cout<<"\nEnter the amount you want to take (in Rs.):";
			cin>>p;
			cout<<"\nEnter the time upto which you are going to repay (years):";
			cin>>t;
			if(p<=100000)                  
			{
				r=5;
			}
			else if(p>100000 && p<=500000)
			{
				r=5.5;
			}
			else
			{
				r=6;
			}
			cout<<"\nYOU WILL HAVE TO PAY RS. "<<recursive(p,r,t)<<" AFTER "<<t<<" YEARS.";  
			break;
			
		case 2:
			cout<<"\tLOAN FOR HOME";
			cout<<"\nUpto 10 lacs is 6%";
			cout<<"\nAbove 10 lacs and upto 20 lacs is 6.5%";
			cout<<"\nAbove 20 lacs is 6.9%";
			cout<<"\nEnter the amount you want to take (in Rs.): ";
			cin>>p;
			cout<<"\nEnter the time upto which you are going to repay (years): ";
			cin>>t;
			if(p<=1000000)                              
			{
				r=6;
			}
			else if(p>1000000 && p<=2000000)
			{
				r=6.5;
			}
			else
			{
				r=6.9;
			}
			cout<<"\nYOU WILL HAVE TO PAY RS. "<<recursive(p,r,t)<<" AFTER "<<t<<" YEARS.";
			break;
			
		case 3:
			cout<<"\tLOAN FOR VEHICLE";
			cout<<"\nUpto 1 lakh is 5.9%";
			cout<<"\nAbove 1 lakh and upto 5 lacs is 6.2%";
			cout<<"\nAbove 5 lacs 6.5%";
			cout<<"\nEnter the amount you want to take(in Rs.): ";
			cin>>p;
			cout<<"\nEnter the time upto which you are going to repay (years): ";
			cin>>t;
			if(p<=100000)          
			{
				r=5.9;
			}
			else if(p>100000 && p<=500000)
			{
				r=6.2;
			}
			else
			{
				r=6.5;
			}
			cout<<"\nYOU WILL HAVE TO PAY RS. "<<recursive(p,r,t)<<" AFTER "<<t<<" YEARS.";
			break;
			
		case 4:
			cout<<"\tLOAN FOR PERSONAL USE";
			cout<<"\nUpto 1 lakh is 5.4%";
			cout<<"\nAbove 1 lakh and upto 5 lacs is 5.6%";
			cout<<"\nAbove 5 lacs is 5.8%";
			cout<<"\nEnter the amount you want to take (in Rs.): ";
			cin>>p;
			cout<<"\nEnter the time upto which you are going to repay (years): ";
			cin>>t;
			if(p<=100000)               
			{
				r=5.4;
			}
			else if(p>100000 && p<=500000)
			{
				r=5.6;
			}
			else
			{
				r=5.8;
			}
			cout<<"\nYOU WILL HAVE TO PAY RS. "<<recursive(p,r,t)<<" AFTER "<<t<<" YEARS."; 
			break;
	}
	cout<<"\nDO YOU WANT TO CONTINUE? (y or n): ";
  cin>>ch;
  }
}
float recursive(float balance, float ir, int time)
{
	if(time==0)
	{
		return balance;
	}
	float interest=balance*ir/100;
	return recursive(balance + interest, ir, time-1);
}

