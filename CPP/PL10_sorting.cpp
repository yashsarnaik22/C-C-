/*Yash Sarnaik
221-D3
Insertion and Quick Sort */
#include<iostream>
#include<string.h>
using namespace std;
class Town
{
	public:
		string name; 
		int pop;
};

class SortTown
{
	Town arr[20];
	public:
		int n;
		SortTown()
		{
			n=0;
		}
		void getdata();
		void display();
		void Qsort(int l, int r);
		int partition(int l, int r);
		void insertionsort(int size);
		
};
void SortTown::getdata()
{
	char ch;
	do
	{
		cout<<"\nEnter the name and population of the town:";
		cin>>arr[n].name>>arr[n].pop;
		n++;
		cout<<"\nwant to add more Towns?(y/n):";
		cin>>ch;
	}while(ch=='y');
}

void SortTown::display()
{
	cout<<"\n--Population Chart of towns--\n";
	for(int i=0;i<n;i++)
	{
		cout<<endl<<arr[i].pop<<"\t"<<arr[i].name;
	}
}
void SortTown::Qsort(int l, int r)
{
	int p;
	if(l<r)
	{
		p=partition(l,r);
		Qsort(l,p-1);
		Qsort(p+1,r);
	}
}
int SortTown::partition(int l, int r)
{
	int i,j,p,tempp;
	string tempn;
	p=l;
	i=l;
	j=r;
	while(i<j)
	{
		while(arr[i].pop<=arr[p].pop && i<=r)
			i++;
		while(arr[j].pop>arr[p].pop)
			j--;
		if(i<j)
		{
			tempn=arr[i].name;
			arr[i].name=arr[j].name;
			arr[j].name=tempn;
			
			tempp=arr[i].pop;
			arr[i].pop=arr[j].pop;
			arr[j].pop=tempp;
		}
	}
	tempn=arr[p].name;
	arr[p].name=arr[j].name;
	arr[j].name=tempn;
	
	tempp=arr[p].pop;
	arr[p].pop=arr[j].pop;
	arr[j].pop=tempp;
	return j;	
}
void SortTown::insertionsort(int size)
{ 
	int i,j,temp=0;
	string temp2;
	for(i=0;i<size;i++)
	{	
			temp = arr[i].pop;
			temp2=arr[i].name;
		j = i - 1;

		
		while (j >= 0 && arr[j].pop > temp)
		{
			arr[j + 1].pop = arr[j].pop;
			arr[j+1].name=arr[j].name;
			j = j - 1;
		}
		arr[j + 1].pop = temp;
		arr[j+1].name=temp2;
		
	
	}
	cout<<"\nYour sorted list is:\n";
	for(int j=0;j<size;j++)
	{
		cout<<arr[j].pop<<":"<<arr[j].name<<endl;
	}
}
int main()
{
	SortTown st;
	int ch;
	st.getdata();
	cout<<"\nUnsorted data:";
	st.display();
	cout<<"\nChoose Sorting method:\n1.Insertion Sort\n2.Quick Sort....";
	cin>>ch;
	switch(ch){
		case 1: st.insertionsort(st.n);
			break;
		case 2: st.Qsort(0,st.n-1);
			break;
	}
	cout<<"\nSorted(by runs scored):";
	st.display();
	return 0;
}
