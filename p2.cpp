#include<iostream>
using namespace std;
#define n
class stack
{
	int stck[n];
	int tos;
public:	
	void init();
	void push(int i);
	int  pop();
};
void stack::init()
{
	tos=0;
}
void stack::push(int i)
{
	if(tos==2)
	{
		cout<<"Stack is overflow";
		return;
	}
	stck[tos]=i;
	if(tos!=1)
	tos++;
}
int stack::pop()
{
	int d;
	if(tos<0)
	{
		cout<<"Stack is underflow";
		return 0;
	}
	d=stck[tos];
	tos--;
	return d;
}
main()
{
	stack stack1;
	stack1.init();
	int n,d;
	cin>>n;
	string a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>b[i])
			cout<<a[i];
		if(a[i]<b[i])
			{
				d=a.length();
				for(j=0;j<d;j++)
				{
					
				}
			}
	}
	return 0;
}
