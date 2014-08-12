#include<iostream>
using namespace std;
int prio(char);
int main()
{
	char a[100];
	int n,top=0,i=0,j=0,k=0;
	char stack[100],op[100];
	cin>>n;
	cout<<"enter the string"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	a[n]=')';
	stack[top]='(';
	i=0;
	while(i<=n)
	{
		if(a[i]>=97 && a[i]<=122)
			op[k++]=a[i];
		else if(a[i]=='(')
		{
			stack[++top]=a[i];
		}
		else if (a[i]==')')
		{
			while(stack[top]!='(')
			{
				op[k++]=stack[top];
				top--;
			}
		}
		else
		{
			while(prio(stack[top])>=prio(a[i]))
			{
				op[k++]=stack[top];
				top--;
			}
			stack[++top]=a[i];
		}
		
		i++;
	}
	op[k]='\0';
	while(op[j]!='\0')
	{
		cout<<op[j];
		j++;
	}
	return 0;
}
int prio(char c)
{
	switch(c)
	{
		case'(' : return 1;break;
		case'+' : return 2;break;
		case'-' : return 2;break;
		case'*' : return 3;break;
		case'/' : return 3;break;
	}
}