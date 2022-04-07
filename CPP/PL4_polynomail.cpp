/*Yash Sarnaik
221-D3 
Polynomial operations*/
#include<iostream>
using namespace std;
class term
{
	public:
		int exp;
		int coeff;
		term *next;
		term()
		{
			next=NULL;
		}
};
class poly
{
	term *start;
	public:
		poly()
		{
			start=NULL;
		}
		void create();
		void display();
		void sort_insert(term *temp);
		void add(poly c1, poly c2);
		void multiply(poly c1, poly c2);
};
void poly::create()
{
	term *temp;
	int ch;
	do
	{
		temp=new term();
		cout<<"\nenter the exponent and coefficient of disease count:\t";
		cin>>temp->exp>>temp->coeff;
		temp->next=temp;
		sort_insert(temp);
		cout<<"\npress 1 to continue:\t";
		cin>>ch;
	}while(ch==1);
}
void poly::sort_insert(term *temp)
 { term *p,*prev;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		if(temp->exp>start->exp)
		{
			p=start;
			while(p->next!=start)
				p=p->next;
			p->next=temp;
			temp->next=start;
			start=temp;
		}
		else
		{
		p=start;
		while(1)
		{
			if(p->exp==temp->exp)
			{
				p->coeff=p->coeff+temp->coeff;
				delete(temp);
				break;
			}
			else if(p->exp<temp->exp || p->next==start)
			{
				if(p->exp<temp->exp)
				{
					prev->next=temp;
					temp->next=p;
					break;
				}
				else
				{
					temp->next=p->next;
					p->next=temp;
					break;
				}
			}
			else
			{
				prev=p;
				p=p->next;
			}
		}
		}
	}
}
void poly::display()
{
	term *p;
	if(start==NULL)
		cout<<"\nNo disease spread recorded\n";
	else
	{
		p=start;
		
		do
		{ //if(p->next!=p)   
			cout<<p->coeff<<"X^"<<p->exp<<"+";
			p=p->next;
		}while(p!=start);
		cout<<"X^0=0\n";
		
	}
}
void poly::add(poly c1,poly c2)
{
	if(c1.start==NULL && c2.start==NULL)
	{
		return;
	}
	term *p,*temp;
	p=c1.start;
	do
	{
		temp = new term();
		temp->exp=p->exp;
		temp->coeff=p->coeff;
		temp->next=temp;
		sort_insert(temp);
		p=p->next;
	}while(p!=c1.start);
	p=c2.start;
	do
	{
		temp = new term();
		temp->exp=p->exp;
		temp->coeff=p->coeff;
		temp->next=temp;
		sort_insert(temp);
		p=p->next;
	}while(p!=c2.start);
}
void poly::multiply(poly c1,poly c2)
{
	if(c1.start==NULL && c2.start==NULL)
		{
			return;
		}	
	term *t1,*t2,*temp;
	t1=c1.start;
do{
   t2=c2.start;
	do
	{
		 temp-new term();
		 temp->exp=t1->exp+t2->exp;
		 temp->coeff=t1->coeff*t2->coeff;
		 temp->next=temp;
		 sort_insert(temp);
		 t1=t2->next;
	}while(t2!=c2.start);
	
 t1=t1->next;
}while(t2!=c2.start);

}
int main()
{
	poly c1,c2,c3,c4;
	c1.create();
	c1.display();
	c2.create();
	c2.display();
	
	cout<<"\nAddition of disease count  is:\n";
	c3.add(c1,c2);
	c3.display();
	
	cout<<"\nDisease count is increased to(multiplication):\n";
	c4.multiply(c1,c2);
	c4.display();
}
