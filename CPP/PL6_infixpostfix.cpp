/*Yash Sarnaik
221-D3
Infix to Postfix, Postfix to Prefix, Postfix Evaluation
*/

#include<iostream>
#define SIZE 30
#include<math.h>
#include<string>
#include<sstream>

using namespace std;

class stack
{
	string st[SIZE];
	int top;
	
	public:
		stack()
		{
			top=-1;
		}
		
		bool isempty()
		{
			if(top==-1)
				return true;
				
			else
				return false;
		}
		
		bool isfull()
		{
			if(top==SIZE-1)
				return true;
				
			else
				return false;
		}
		
		void push(string x)
		{
			if(!isfull())
			{
				top++;
				st[top]=x;
			}
			
			else
			{
				cout<<"\n Overflow\n";
			}
		}
		
		string pop()
		{
			string x;
			if(isempty())
				cout<<"\n Stack is Empty \n";
			else 
			{
				x = st[top];
				top--;
				return x;
			}	
		}
		
		string Top()
		{
			if(!isempty())
			{
				return st[top];
			}
			
			else
			{
				return ("NOTHING");
			}
		}
};

class expression 
{
	public:
		string postfix, infix;
		stack s;
		
		bool isoperator(char x)
		{
			if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^')
				return true;
			else
				return false;
		}
		
		int precedence (string x)
		{
			if(x=="^")
				return 3;
				
			else if (x=="*" || x=="/")
				return 2;
				
			else if (x=="+" || x=="-")
				return 1;
			else 
				return 0;
		}
		
		void infix_to_postfix()
		{
			cout<<"\n Enter INFIX Expression : ";
			cin>>infix;
			
			for(int i=0; i<infix.length(); i++)
			{
				if((infix[i]>='a' && infix[i]<='z') || (infix[i]>='A' && infix[i]<='Z'))
				{
					postfix = postfix + infix[i];
				}
				
				else if(infix[i]=='(')
				{
					s.push("(");
				}
				
				else if(infix[i]==')')
				{
					while(s.Top()!="(" && !s.isempty())
					{
						string str = s.pop();
						postfix = postfix + str;
					}
					
					if(s.Top()=="(")
					{
						s.pop();
					}
				}
				
				else
				{
					while( (precedence(string(1,infix[i])) <= precedence(s.Top()) ) && !s.isempty() )
					{
						string t = s.pop();
						postfix = postfix + t;
					}
					s.push(string(1,infix[i]));
				}
			}
			while(!(s.isempty()))
			{
				string x = s.pop();
				postfix = postfix + x;
			}	
			
			cout<<"\n\nINFIX Expression:  ";
			cout<<infix;
			cout<<"\n\nPOSTFIX Expression:  ";
			cout<<postfix;	
		}
		
		void postfix_to_prefix()
		{
			cout<<"\n Enter POSTFIX Expression : ";
			cin>>postfix;
			
			for(int i=0; i<postfix.length(); i++)
			{
				if(isoperator(postfix[i]))
				{
					string op2 = s.pop();
					string op1 = s.pop();
					string temp = postfix[i] + op1 + op2;
					s.push(temp);
				}
				else 
				{
					s.push(string(1,postfix[i]));
				}
			}
			cout<<"\n PREFIX: "<<s.pop();
		}
		
		void postfix_evalution()
		{
			cout<<"\n Enter POSTFIX Expression: ";
			cin>>postfix;
			
			for(int i=0;i<postfix.length();i++)
			{
				if(isoperator(postfix[i]))
				{
					int op_1,op_2;
					int res;
					string op2=s.pop();
					string op1=s.pop();
			
					stringstream ob1(op1);
					stringstream ob2(op2);
			
					ob1>>op_1;
					ob2>>op_2;
			
					if(postfix[i]=='+')
					{
						res=op_1 + op_2;
					}
					else if(postfix[i]=='-')
					{
						res = op_1 - op_2;
					}
					else if(postfix[i]=='*')
					{
						res = op_1 * op_2;
					}
					else if(postfix[i]=='/')
					{
						res = op_1 / op_2;
					}
					else if(postfix[i]=='^')
					{
						res = pow(op_1,op_2);
					}
			
					stringstream ob3;
					ob3<<res;
					string res1 = ob3.str();
					s.push(res1);
				}
		
				else
				{
					if(isdigit(postfix[i]))
					{
						s.push(string(1,postfix[i]));
					}
				}
			}
	
			string result = s.pop();
			cout<<"\n Result: "<<result<<endl<<endl;
		}
};

int main()
{
	int ch,ch1;
	expression e;
	
	do
	{
		cout<<"\n 1.INFIX to POSTFIX";
		cout<<"\n 2.POSTFIX to PREFIX";
		cout<<"\n 3.POSTFIX Evaluation";
		cout<<"\n Enter Choice: ";
		cin>>ch1;
		switch(ch1)
		{
			case 1:
				e.infix_to_postfix();
			break;
			
			case 2:
				e.postfix_to_prefix();
			break;
			
			case 3:
				e.postfix_evalution();
			break;
			
			default:
				cout<<"\nInvalid Choice";
		}
		
		cout<<"\n\nPress any key to Exit Program"<<endl;
		cout<<"Press 1 to Continue"<<endl;
		cout<<"Enter Choice: ";
		cin>>ch;
	}while(ch==1);

	return 0;
}

/*
OUTPUT

 1.INFIX to POSTFIX
 2.POSTFIX to PREFIX
 3.POSTFIX Evaluation
 Enter Choice: 1

 Enter INFIX Expression : (A+B)*(C+D)


INFIX Expression:  (A+B)*(C+D)

POSTFIX Expression:  AB+CD+*

Press any key to Exit Program
Press 1 to Continue
Enter Choice: 1

 1.INFIX to POSTFIX
 2.POSTFIX to PREFIX
 3.POSTFIX Evaluation
 Enter Choice: 2

 Enter POSTFIX Expression : AB+CD+*

 PREFIX: *+AB+CD

Press any key to Exit Program
Press 1 to Continue
Enter Choice: 1

 1.INFIX to POSTFIX
 2.POSTFIX to PREFIX
 3.POSTFIX Evaluation
 Enter Choice: 3

 Enter POSTFIX Expression: 231*+9-

 Result: -4



Press any key to Exit Program
Press 1 to Continue
Enter Choice: 0

--------------------------------
Process exited after 152.3 seconds with return value 0
Press any key to continue . . .

*/
