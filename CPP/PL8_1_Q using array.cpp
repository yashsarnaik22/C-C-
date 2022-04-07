#include<iostream>
#include<string.h>
#define n 20
using namespace std;
class queue{
	public:
	int *uid; //unique id
	int front;
	int rear;
		queue(){
			front=-1;
			rear=-1;
			uid=new int[n];
		}
		
		void enqueue(int x){
			if(rear==n-1)
			{
				cout<<"\ntoo many customers!\n";
			}
			if(front==-1){
				front++;
			}
			rear++;
			uid[rear]=x;
			cout<<"\ncustomer "<<x<<" entered the queue\n";
		}
		
		void dequeue(){
			if(front==-1 || front>rear)
			{
				cout<<"\nNo customer in the queue\n";
			}
			cout<<"customer "<<uid[front]<<"order completed\n";
			front--;
								}
		void peek(){
			if(front==-1 || front>rear)
			{
				cout<<"\nNo customer present\n";
			}
			else
				cout<<"\ncustomer at front is:"<<uid[front]<<endl;
				}
				
		bool isEmpty(){
			if(front==-1 || front>rear)
				return true;
			else
				return false;
		}
		bool isFull(){
			if(rear>=n-1)
				return true;
			else
				return false;
		}
		void display(){
			cout<<"\ncustomers in queue:\n";
			for(int i=0;i<=rear;i++)
				cout<<uid[i]<<endl;
		}
};
int main()
{
	queue q;
	int ch,p,no;
	do{cout<<"\n1.Add customer\n2.remove customer\n3.peek\n4.checkcapacity\n";
	cin>>ch;
		switch(ch){
					case 1: cout<<"\nenter uid.of customer:";
							cin>>no;
							q.enqueue(no);
							break;
					case 2: q.dequeue();
					break;
					case 3: q.peek();
					break;
					case 4: {
						q.isEmpty();
						q.isFull();
						q.display();
						break;
					}
		}
		cout<<"\npress 1 to continue:";
		cin>>p;
	}while(p==1);
	return 0;
}
