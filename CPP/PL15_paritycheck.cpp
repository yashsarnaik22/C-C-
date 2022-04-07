/*Yash Sarnaik
221_D3
ASCII parity checker*/
#include<iostream> 
#include<cstring>
using namespace std;

class parity_checker     
{
	public:
		int i, j=0, counter=0;
		string s;
		int b[100];
		
		void input();    
		void even_parity();
		void odd_parity();
};

void parity_checker :: input()
{
	cout<<"\nENTER STRING: ";
	cin>>s;
}

void parity_checker :: even_parity() 
{
	int n=s.length();        
	for(i=0; i<n; i++)
	{
		int val=int(s[i]);
		cout<<val<<endl;
		j=0;
		while(val>0)
		{
			int p=val%2;
			b[j]=p;
			val/=2;
			j++;
		}
	}
	for(i=j-1; i>=0; i--)
	{
		cout<<b[i];
		if(b[i]==1)
		{
			counter++;
		}
	}
	if((counter%2)==0)
	{
		cout<<"\nEntered string is EVEN parity.";
	}
	else
	{
		cout<<"\nEntered string is not EVEN parity.";
	}
}

void parity_checker :: odd_parity()  
{
	int n=s.length();
	for(i=0; i<n; i++)
	{
		int val=int(s[i]);
		j=0;
		while(val>0)
		{
			int p=val%2;
			b[j]=p;
			val/=2;
			j++;
		}
	}
	for(i=j-1; i>=0; i--)
	{
		cout<<b[i];
		if(b[i]==1)
		{
			counter++;
		}
	}
	if((counter%2)==0)
	{
		cout<<"\nEntered string is ODD parity.";
	}
	else
	{
		cout<<"\nEntered string is not ODD parity.";
	}
}

int main()  
{
	parity_checker p;
	int ch;
	cout<<"\tPARITY CHECKER";
	do
	{
		cout<<"\nCheck Parity";     
		cout<<"\n1. EVEN PARITY \n2. ODD PARITY \n3. EXIT";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				p.input();
				p.even_parity();
				break;
				
			case 2:
				p.input();
				p.odd_parity();
				break;
	    }
	}
	while(ch<3);
}

