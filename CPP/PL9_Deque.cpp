/*Yassh Sarnaik
221-D3
Deque*/
#include<iostream>
#define max 10
using namespace std;
class shopping_mall
{
	public:
		string item;
		int price, quantity;
		
		void get_data()
		{
			cout << "Enter the item:" <<endl;
			cin>>item;
			cout << "Enter the quantity:" <<endl;
			cin>>quantity;
			cout << "Enter the price:" <<endl;
			cin>>price;
	   }
};
class DEque
{
	public:
		string item;
		int price, quantity;
	    shopping_mall data[max];
	    int front, rear;
		DEque()
		{
			rear=-1;
			front=-1;
		}
		void insert_front(shopping_mall s);
		void insert_rear(shopping_mall s);
		void del_front();
		void del_rear();
		bool isFull();
		bool isEmpty();
		void display();
};

bool DEque :: isFull()
{
	if((front == 0 && rear==max-1) || (front == rear+1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool DEque :: isEmpty()
{
	if(front == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void DEque :: insert_front(shopping_mall s)
{
	if(isFull())
	{
		cout<<"\nDEque is Full."<<endl;
	}
	else if(isEmpty())
	{
		front = 0;
		rear = 0;
	}
	else
	{
		front = (front-1+max)%max;
	}
	
	data[front].item = s.item;
	data[front].price = s.price;
	data[front].quantity = s.quantity;
}

void DEque :: insert_rear(shopping_mall s)
{
	if(isFull())
	{
		cout<<"\nDEque is Full."<<endl;
	}
	else if(isEmpty())
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear=(rear+1)%max;
	}
	data[rear].item = s.item;
	data[rear].price = s.price;
	data[rear].quantity = s.quantity;
}

void DEque :: del_front()
{
	if(isEmpty())
	{
		cout<<"\nDEque is empty. "<<endl;
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
        front=(front+1+max)%max;	
	}
}

void DEque :: del_rear()
{
  if(isEmpty())
  {
     cout<<"\nQueue is empty"<<endl;
  }
  else if(front==rear)
  {
    front=-1;
    rear=-1;
  }
  else
  {
    rear=(rear-1+max)%max;
  }
}

void DEque :: display()
{
	int i = front;
	if(isEmpty())
	{
		cout << "DEque is empty. "<<endl;
	}
	else if(front <= rear)
	{
		for(i=front; i<=rear; i++)
		{
			cout<<"\nItem: " <<data[i].item;
			cout<<"\nQuantity: "<<data[i].quantity;
			cout<<"\nPrice: "<<data[i].price;
		}
	}
	else
	{
		while(i<=max-1)
		{
			cout<<"\nItem: " <<data[i].item;
			cout<<"\nQuantity: "<<data[i].quantity;
			cout<<"\nPrice: "<<data[i].price;
			
			i++;
		}
		i=0;
		
		while (i<=rear)
		{
			cout<<"\nItem: " <<data[i].item;
			cout<<"\nQuantity: "<<data[i].quantity;
			cout<<"\nPrice: "<<data[i].price;
			
			i++;
		}
	}
}
int main()
{
	shopping_mall s1;
	DEque d1;
	
	int ch;
	do
	{
		cout<<"\t\SHOPPING MALL PORTAL "<<endl;
		cout<<"\n1. Insert at Front \n2. Insert at rear \n3. Delete from Front \n4. Delete from Rear \n5. Display"<<endl;
		cout<<"\nEnter your Choice:"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				s1.get_data();
				d1.insert_front(s1);
				break;
				
			case 2:
				s1.get_data();
				d1.insert_rear(s1);
				break;
				
			case 3:
				d1.del_front();
				break;
				
			case 4:
				d1.del_rear();
				break;
				
			case 5:
				d1.display();
				break;
				
			default:
				cout<<"\nEnter a valid Choice!"<<endl;
		}
	}
	while (ch!=6);
	
	return 0;
}
