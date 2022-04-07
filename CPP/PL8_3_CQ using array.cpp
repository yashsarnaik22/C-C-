// circular queue using array
#include<iostream>
#define max 20
using namespace std;
class FoodItems
{
	public :
		string item;
		int price, quantity;
};

class Queue
{
	public :
		FoodItems Q[max];
		int front, rear;
		
		Queue()
		{
			front = -1;
		    rear = -1;
		}
		
		bool isfull()
		{
			if(front==0 && rear==max-1 || front==rear+1)
			{
				return true;
			}
			else
				return false;
		}
		
		bool isempty()
		{
			if(front == -1 && rear == -1)
			{
				return true;
			}
			else 
				return false;
		}
		void enqueue(string i , int p , int q);
		void dequeue();
		void display();
};

void Queue::enqueue(string i , int p , int q)
{
	if(isfull())
	{
		cout<<"\nQueue is Full\n";
	}
			
	else if(isempty())
	{ 
		front++;
		rear++;
		Q[rear].item = i;
		Q[rear].price = p;
		Q[rear].quantity = q;
	}
	else
	{
		rear = (rear + 1) % max;
		Q[rear].item = i;
		Q[rear].price = p;
		Q[rear].quantity = q;
	}
}

void Queue::dequeue()
{
	if(isempty())
	{
		cout<<"\nNo Items.\n";
	}
	else if(front == rear )
	{ 
		cout<<"\nDeleted Successfully ";
		front = -1;
		rear = -1;
	}
	else
	{
		cout<<"\nDequeued Successfully ";
		front = (front+1)%max ;
	}
}

void Queue::display()
{
	int i = front ;
			
	if(isempty())
	{
		cout<<"Empty\n";
	}
	else
	{
		while(i != rear)
		{
			cout<<Q[i].item<<" "<<Q[i].price<<" Rs"<<endl;
			cout<<"Quantity : "<<Q[i].quantity<<endl;
			i = (i+1)%max ;
		}
				
		cout<<Q[rear].item<<" "<<Q[rear].price<<" Rs"<<endl;
		cout<<"Quantity : "<<Q[i].quantity<<endl;
	}
}

int main(){
	Queue q;
	 char c='y';
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
					cout<<"\nDo u want to continue  y/n : ";
					cin>>c ;
			   }
}
