/*Yash Sarnaik
221-D3*/
//circular queue using linked list
#include<iostream>
using namespace std;
class items
{
	public:
		string item;
		int price, quantity;
		items *next;
};

class Food_items
{
	public:
		items *front, *rear;
		
		Food_items()
		{
			front = NULL;
			rear = NULL;
		}
		
		bool isempty();
		void enqueue(string i, float p, int q);
		void dequeue();
		void display();
};
bool Food_items :: isempty()
{
	if (front == NULL && rear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Food_items :: enqueue(string i, float p, int q)
{
	items *temp = new items;
	
	temp->item = i;
	temp->price = q;
	temp->quantity = p;
	temp->next = NULL;
	
	if(isempty())
	{
		front = temp;
		rear = temp;
		rear->next = front;
	}
	else
	{
		rear->next = temp;
		rear = temp;
		rear->next = front;
	}
}

void Food_items :: dequeue()
{
	items *temp = front;
	
	if(isempty())
	{
		cout << "\nNo items\n" ;
	}
	else if(front == rear)
	{
		cout << "\nDequeued Item: " << front->item;
		front = rear = NULL;
		delete temp;
	}
	else
	{
		cout << "\nDequeued Element: " << front->item;
		front = front->next;
		rear->next = front;
		delete temp;
	}
}

void Food_items :: display()
{
	items *temp = front;
	
	if(isempty())
	{
		cout << "\nNo items\n" ;
	}
	else
	{
		do
		{
			cout << temp->item << " " << temp->price << " Rs. x " << temp->quantity <<endl;
			temp = temp->next;
		}
		while(temp != front);
	}
}
int main()
{	Food_items f;
	 char c='y' ;
	 int ch1,price,quantity;
	string item;	
			    while(c== 'y')
			    {
				   cout<<"\n1.Make Order \n2.Delete Order \n3.Display Order \n";
				   cout<<"\nEnter your choice: "<<endl;
			       cin>>ch1 ;
					
					switch(ch1)
					{
						case 1 : 
							cout<<"\nEnter item name : ";
							cin>>item ;
							cout<<"Enter price : ";
							cin>>price ;
							cout<<"Enter Quantity : ";
							cin>>quantity ;
							f.enqueue(item , price , quantity);
							break;
							
						case 2 :
							f.dequeue();
							break;
							
						case 3 :
							cout<<"\nYour Food List\n" ;
							f.display() ;
							break;
							
						case 4 :
							cout<<"\nWrong Choice \n" ;
							break;
					}
					cout<<"\nDo u want to continue  y/n : ";
					cin>>c;
				}
}
