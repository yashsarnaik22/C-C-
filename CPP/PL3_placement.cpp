#include<iostream>
#include<stdlib.h>
using namespace std;
class Student{
	public:
		int prn;
		string name;
		Student *next;
		Student()
		{
			next=NULL;
		}		
};
class SEP
{
	Student *start;
	public:
		SEP()
		{
			start=NULL;
		}
		void create();
		void display();
		void append();
		void insert_in_beg();
		void insert_after();
		void updateList();
		void search();
		void deletenode();
		void sortbyno();
};

void SEP::create()
{
	Student *p,*temp;
		temp=new Student();
		cout<<"Enter prn No. and Name:\n";
		cin>>temp->prn>>temp->name;
		if(start==NULL)
			start=temp;
		else
		{
			p=start;
			while(p->next!=NULL)
				p=p->next;
				p->next=temp;
		}
}

void SEP::display()
{
	Student *p;
    if(start==NULL)
		cout<<"\nLinked List is empty\n";
	else
	{ p=start;
	  while(p!=NULL)
	  {
	  	cout<<"\n"<<p->prn<<"\t"<<p->name;
	  	p=p->next;
		   }	 
		}	
}
void SEP::append()
{
	Student *temp,*p;
	temp=new Student();
	cout<<"\nPlacement Enrolnment Portal\n";
	cout<<"\n"<<"Enter student details to append :";
	cout<<"\n"<<"Enter prn no. and name :";
	cin>>temp->name>>temp->prn;
	if(start==NULL)
	{
		start=temp;
		return;
	}
	else
	{
		p=start;
		while(p->next!=NULL)
		   { p=p->next;
		   	}
		    p->next=temp;
		    return;
	}

}
void SEP::insert_in_beg()
{ 
	Student *temp;
	temp=new Student();
	cout<<"\n"<<"Enter student details:";
	cout<<"\n"<<"Enter prn no. and name:";
	cin>>temp->name>>temp->prn;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}
void SEP::insert_after()
{ int i, flag=0;
cout<<"\nWhere you want to insert new detail?:\t";
cin>>i;
if(start=NULL)
{
	cout<<"List is empty";
	return;
}
Student *p, *temp;
p=start;
while(p!=NULL)
{
	if(p->prn==i)
	{
		flag=1;
		break;
	}
	p=p->next;
}
if(flag==1)
{
	temp->next=p->next;
	p->next=temp;
}
else
{
	cout<<"Entry not found!";
	return;
}
	
}
void SEP::search(){
    Student *p;
    p = start;
    int r;
    cout<<"Enter the prn no. you want to search:\t";
    cin>>r;
    while(p != NULL){
        if(p->prn== r){
        }
        p = p -> next;
    }
    
}
void SEP::updateList(){
    int flag = 0;
    Student *p;
    int x;
    if(start== NULL){
        cout <<"List is empty"<<endl;
    }
    else{
        cout <<"Enter prn no. to update data: ";
        cin >> x;
        p = start;
        while(p != NULL){
            if(x == p->prn){
                flag = 1;
                cout <<"Enter Name and prn no: ";
                cin >> p -> name >> p->prn;
                break;
            }
            p = p->next;
        }
        if(flag == 1){
            cout <<"Data updated"<<endl;
        }
        else{
            cout << "prn no not found"<<endl;
        }
    }
}
void SEP::deletenode(){
	int x;
    Student* p;
    Student *pos;
    cout <<"\nEnter prn no to delete:\t ";
    cin >>x;
    if(start == NULL){
        cout <<"\nlinked list is empty\n";
    }
    if(start->prn == x){
        p = start;
        start = start->next;
        delete(p);
        return;
    }
    p = start;
    int flag = 0;
    while(p != NULL){
        if(p ->prn == x){
            flag = 1;
            break;
        }
        pos =p;
        p = p ->next;
    }
    if(flag){
        pos->next =p -> next;
        delete(p);
    }
    else{
        cout <<"Not found"<<endl;
    }
}
void SEP::sortbyno(){

Student *p,*q;
	int flag = 0;
	int temp;
	string temp2;
	q=start;
	while(q->next!=NULL)
	{
		p=start;
		flag=0;
		while(p->next!=NULL)
		{
			if(p->prn >p->next->prn)
		{
			temp=p->prn;
			p->prn=p->next->prn;
			p->next->prn=temp;
			
			temp2=p->name;
			p->name=p->next->name;
			p->next->name=temp2;
			
			
			flag=1;
			
		}
		p=p->next;
	}
	if(flag==0)
	    break;
	
	q=q->next;	
	}
}
int main()
{
	SEP s;
	int ch,ch1;
	char c;
	do{
	cout<<"\nwhat you want to do?\n1.create\n2.display\n3.insert\n4.search\n5.update\n6.delete\n7.Sort\n";
	cout<<"Enter your choice:\t";
	cin>>ch;
	switch(ch)
	{
		case 1:  {
		do{ s.create();
			cout<<"\nwant to add more students?(y/n):\t";
			cin>>c;
		}while(c=='y');
			break;
	}
		
		case 2:s.display();
			break;
		case 3:{cout<<"\n---Inserting Options---\nMenu\n1.append\2\n2.insert in beginning\n3.insert after\n";
				cin>>ch1;
				switch(ch1){
					case 1:s.append();
						break;
					case 2:s.insert_in_beg();
						break;
					case 3:s.insert_after();
						break;
					default : cout<<"\nINVALID CHOICE!\n";
				break;
		}
		case 4:s.search();
	       	break;
		case 5:s.updateList();
			break;
		case 6:s.deletenode();
			break;
		case 7:s.sortbyno();
		    break;
		case 8:exit(0);
		default:cout<<"Invalid choice";
		
	}
	
}
cout<<"\ndo you want to continue?\t";
cin>>c;	
}while(c=='y');

	return 0;
}
