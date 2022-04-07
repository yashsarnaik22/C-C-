/*Yash Sarnaik
221-D3
Fibo, sentinel, binary sort*/
#include <iostream>
#define MAX 30
using namespace std;
class Student
{
    int marks[MAX];
    int n;
    public:
    bool sentinelSearch(int key);
    bool binarySearch(int key);
    void getdata(int num);
    void display();
    int fibo(int j);
    bool fibSearch(int key);
};
void Student :: getdata(int num)
{
    n=num;
    cout<<"\nEnter "<<num<<" student's marks: \n";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
}
void Student::display()
{
    cout<<"\nStudent's marks: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"\nStudent's marks:["<<i<<"]="<<marks[i]<<endl;
    }
}
bool Student::sentinelSearch(int key)
{
    int i;
    marks[n]=key;
    for(i=0;marks[i]!=key;i++)
    {
    ;
    }
    if(i<n)
        return true;
    else
        return false;
}
bool Student::binarySearch(int key)
{
    int mid;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==marks[mid])
        {
            return true;
        }
        if(key<marks[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return false;
}
int Student::fibo(int j)
{
if(j==0)
    return 0;
if(j==1)
    return 1;
else
    return ((fibo(j-1)) + (fibo(j-2)));
}
bool Student::fibSearch(int key)
{
    int f1,f2,j,mid;
    j=1;
    while(fibo(j)<=n)
        j++;
        f1=fibo(j-2);
        f2=fibo(j-3);
        mid=n-f1+1;
        while(key!=marks[mid])
        {
            if(key>marks[mid])
            {
                if(f1==1)
                    break;
                mid=mid+f2;
                f1=f1-f2;
                f2=f2-f1;
            }
            else
            {
                if(f2==0)
                    break;
                mid=mid-f2;
                int temp=f1-f2;
                f1=f2;
                f2=temp;
            }
        }
        if (marks[mid]==key)
            return true;
        else
            return false;
}

int main()
{
    Student s1;int choice;
    int key,n;
    do
    {
        cout << "\nSTUDENT RESULT PORTAL 2022" << endl;
        cout << "\nAVAILABLE OPTIONS: ";
        cout << "\n1. SENTINAL SEARCH";
        cout << "\n2.BINARY SEARCH";
        cout << "\n3.FIBONACCI SEARCH";
        cout << "\n4.EXIT";
        cout << "\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter number of students: ";
            cin>>n;
            s1.getdata(n);
            s1.display();
            cout<<"\nEnter the student's marks to see if he/she passed or failed the exam: ";
            cin>>key;
            if(s1.sentinelSearch(key))
                cout<<"\nStudent who got "<<key<<" has passed the examination";
            else
                cout<<"\nStudent who got "<<key<<" has failed";
            break;
        case 2:
            cout<<"\nEnter the number of students: ";
            cin>>n;
            s1.getdata(n);
            s1.display();
            cout<<"\nEnter the student's marks to see if he/she passed or failed the exam: ";
            cin>>key;
            if(s1.binarySearch(key))
                cout<<"\nStudent who got "<<key<<" has passed the examination";
            else
                cout<<"\nStudent who got "<<key<<" has failed";
            break;
        case 3:
            cout<<"\nEnter the number of students: ";
            cin>>n;
            s1.getdata(n);
            s1.display();
            cout<<"\nEnter the student's marks to see if he/she passed or failed the exam: ";
            cin>>key;
            if(s1.fibSearch(key))
                cout<<"\nStudent who got "<<key<<" has passed the examination";
            else
                cout<<"\nStudent who got "<<key<<" has failed";
            break;
        case 4:
            cout<<"THANK YOU!!!"<<endl;
            break;
        default:
            cout<<"INVALID CHOICE!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}
