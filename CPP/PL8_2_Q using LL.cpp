/*
Yash Sarnaik
221-D3
PRACTICAL 8
*/
#include<iostream>      
using namespace std;
// Queue Using Linked List
class items
{
	public:
		string item;
		int price, quantity;
		items *next;
};

class Queue
{
	public:
		items *front, *rear;
		Queue()
		{
			front = 0;
			rear = 0;
		}
		bool isempty();
		void enqueue(string i , int p , int q);
		void dequeue();
		void display();
};

bool Queue :: isempty()
{
	if(front == NULL)
	{
		return true;
	}
	else
	{
		return false;
    }
}

void Queue :: enqueue(string i , int p , int q)
{
	items *temp  = new items;

	temp->item = i;
	temp->price = p;
	temp->quantity = q;
	temp->next = NULL;
	
	if(front == 0 && rear == 0 )
	{
		front = temp;
		rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
}

void Queue :: dequeue()
{
	items *temp = front;
	
	cout<<"\nDeleted item : "<<front->item;
	front = front->next;
	delete temp;
}

void Queue :: display()
{
	items *temp = front;
	
	if(isempty())
	{
		cout<<"Queue is empty\n";
	}
	else
	{
		while(temp != NULL)
		{
			cout<<temp->item<<" : "<<temp->price<<" Rs "<<endl;
			cout<<"Quantity : "<<temp->quantity<<endl;
			cout<<"\n\n";
			temp = temp->next;
		}
	}
}


int main()
{
	Queue q;
	int ch1, ch2, price, quantity;
	string item;
	char c ='y' ;
				while(c== 'y')
				{
					cout<<"\n1.Make Order \n2.Delete Order \n3.Display Order \n";
					cout<<"\nEnter your choice: "<<endl;
					cin>>ch1 ;
				
					switch(ch1)
					{
						case 1 : 
							cout<<"\nEnter Item Name : ";
							cin>>item ;
							cout<<"Enter Price : ";
							cin>>price ;
							cout<<"Enter Quantity : ";
							cin>>quantity ;
							q.enqueue(item , price , quantity);
							break;
							
						case 2 :
							q.dequeue();
							break;
							
						case 3 :
							cout<<"\nYour Food List\n" ;
							q.display() ;
							break;
							
						case 4 :
							cout<<"\nWrong Choice \n" ;
							break;
						
					}
					
					cout<<"\nDo u want to continue? (y/n) : ";
					cin>>c;
				}
	}

