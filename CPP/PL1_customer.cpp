/*Yash Sarnaik-221-D3
	Supply Chain System*/
#include <iostream>
using namespace std;
class customer
{public:
	int c_id;
	char cname[20];
	float cost;

		void getdetails();
		void show_details();
};
void customer :: getdetails()
{
	cout<<"\nEnter customer ID:";
	cin>>c_id;
	cout<<"\nEnter customer name:";
	cin>>cname;
	cout<<"\nEnter cost of order:";
	cin>>cost;
}
void customer :: show_details()
{
	cout<<c_id<<"\t\t"<<cname<<"\t\t"<<cost<<endl;
	
}
int main()
{
    customer emp[20];
    int i,n,ch,a,j,pos,flag=0;
    do{
    cout<<"\nSupply Chain\n 1.Create \n 2.Display \n 3.Insert \n 4.Delete\n 5.Update\n 6.Search";
    cout<<"\nenter your choice:";
    cin>>ch;
    	switch(ch)
		{
    		case 1:cout<<"\nEnter the no. of customers in your area:";
    				cin>>n;
    				for(i=0;i<n;i++)
    				{
    				emp[i].getdetails();
					}
					break;
			case 2: cout<<"\n\n----Details of  customers----";
					cout<<"\ncustomer ID\tcustomer name\tOrder cost\n";
					for(i=0;i<n;i++)
    				{
    				emp[i].show_details();
    				} 
    				break;
			case 3: cout<<"\nenter the position where you want to insert a customer:";
			        cin>>pos;
			        if(pos<n)
			        {
					
					for(i=n-1;i>=pos-1;i--)
				      emp[i+1]=emp[i];
				      emp[pos-1].getdetails();
				      n++;
			        break;
			    }
			    else
			    {
			    	cout<<"\nposition out of range\n";
				}
			case 4:cout<<"\nenter the customer ID you want to delete:";
					cin>>a;
					flag=0;
					for(i=0;i<n;i++)
					{
						if(emp[i].c_id==a)
						{
							flag=1;
							break;
						}
					 } 
					 if(flag==1)
					{
						for(j=i;j<n;j++)
						{
						  emp[j]=emp[j+1];
						n--;
						}
					}
					else
					{ cout<<"\ncustomer not found\n";
						}			
			        break;
			case 5: cout<<"\nenter the customer number to be updated:";
			        cin>>a;
					flag=0;
					for(i=0;i<n;i++)
					{
						if(emp[i].c_id==a)
						{
							emp[i].getdetails();
							flag=1;
							break;
						}
					if(flag==0)
					{
						cout<<"\ncustomer not found\n";
					}
					   }   
			       break;
			case 6: cout<<"\nenter the customer ID that you want to search:";
					cin>>a;
					for(i=0;i<n;i++)
					{
						if(emp[i].c_id==a)
						{
							cout<<"\ncustomer found!!\n";
							flag=1;
						}
						if(flag==1)
						{
						emp[i].show_details();
						
							break;
						}
						else
						{
								cout<<"\ncustomer not found\n";
						}
					   }   
			        
			       break;
			default: cout<<"\nInvalid Input!\n";
			    }
	cout<<"\nPress 1 to continue or 0 to exit:";
	cin>>a;
	}while(a==1);
    return 0;
}
