/*Yash Sarnaik
221-D3
Mergiing linked list*/
#include <iostream>
using namespace std;

class node
{
public:
    int marks;
    int roll_no;
    node *next, *prev;
};

class marks_list
{
public:
    node *head;
    int len;
    marks_list()
    {
        head = NULL;
        len = 0;
    }
    void create();
    void display();
    void sort();
    void merge(marks_list m1, marks_list m2);
};

void marks_list::create() //creat List
{
    node *temp, *ptr;
    char ch;
    do
    {
        temp = new node;
        cout << "\nEnter roll number:";
        cin >> temp->roll_no;
        cout << "\nEnter marks:";
        cin >> temp->marks;
        temp->prev = NULL;
        temp->next = NULL;
        len++;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
            temp->prev = ptr;
        }
        cout << "Do you want to add more(y/n): ";
        cin >> ch;
        cout<< endl;
    } while (ch == 'y');
}
void marks_list::display() //display list
{
    node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << "Roll Number:" << ptr->roll_no << endl;
        cout << "Mark:" << ptr->marks << endl;
        ptr = ptr->next;
    }
}
node *swap(node *ptr1, node *ptr2)
{
    if (ptr1->prev == NULL)
    {
        node *temp = ptr2->next;
        ptr2->next = ptr1;
        ptr2->prev = NULL;
        ptr1->next = temp;
        ptr1->prev = ptr2;
        return ptr2;
    }
    else if (ptr2->next == NULL)
    {
        node *temp = ptr1->prev;
        ptr1->prev = ptr2;
        ptr1->next = NULL;
        ptr2->prev = temp;
        ptr2->next = ptr1;
        temp->next = ptr2;
        return ptr2;
    }
    else
    {
        node *temp2 = ptr2->next;
        node *temp1 = ptr1->prev;
        ptr2->next = ptr1;
        ptr2->prev = temp1;
        ptr1->next = temp2;
        ptr1->prev = ptr2;
        temp2->prev = ptr1;
        temp1->next = ptr2;
        return ptr2;
    }
}
void marks_list::sort()  //Sorted list
{
    node **h; 
    int swapped;
    node *ptr;
    for (int i = 0; i <= len; i++)
    {
        h = &head;
        swapped = 0;
        for (int j = 0; j < len - i - 1; j++)
        {
            node *p1 = *h;
            node *p2 = p1->next;
            if (p1->marks > p2->marks)
            {
                *h = swap(p1, p2);
                swapped = 1;
            }
            h = &(*h)->next;
        }
        if (swapped == 0)
        {
            break;
        }
    }
}
void marks_list::merge(marks_list l1, marks_list l2)  //Merge two list
{
    node *p = l1.head;
    node *q = l2.head;
    node *r = NULL;
    if (p == NULL)
    {
        head = p;
    }
    if (q == NULL)
    {
        head = q;
    }
    if (p != NULL && q != NULL)
    {
        if (p->marks < q->marks)
        {
            r = p;
            p = p->next;
        }
        else
        {
            r = q;
            q = q->next;
        }
        head = r;
    }
    while (p != NULL && q != NULL)
    {
        if (p->marks <= q->marks)
        {
            r->next = p;
            p->prev = r;
            r = p;
            p = p->next;
        }
        else if (p->marks > q->marks)
        {
            r->next = q;
            q->prev = r;
            r = q;
            q = q->next;
        }
    }
    if (p == NULL)
    {
        r->next = q;
        q->prev = r;
    }
    if (q == NULL)
    {
        r->next = p;
        p->prev = r;
    }
}
int main()
{
    marks_list l1, l2, l3;
    int choice,flag;
    do
    {
        cout << "\t\t<<Options\n1.For creating list\n2.Create List 2\n3.Display List 1\n4.Display List 2\n5.Sort 1&2\n6.Merge\n7.exit:";
        cout <<"\nEnter Your Choice:";
		cin  >> choice;
		cout <<"--------------------"<< endl;
        switch (choice)
        {
        case 1:
            l1.create();
            break;
        case 2:
            l2.create();
            break;
        case 3:
            cout << "\nLIST 1:\n";
            l1.display();
            break;
        case 4:
            cout << "\nLIST 2:\n";
            l2.display();
            break;
        case 5:
            l1.sort();
            cout << "Sorted by Marks of List 1\n";
            l1.display();
            l2.sort();
            cout << "Sorted by Marks of List 2\n";
            l2.display();
            break;
        case 6:
            l3.merge(l1, l2);
            l3.display();
            break;
        case 7:
		     flag=1;
			 break;    
        default:
            cout << "INVALID CHOICE!!" << endl;
            break;
            
        }
       
	  if(flag==1)
	     break;	
	  
	  
    } while (1);
    
    return 0;
}

