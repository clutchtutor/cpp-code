#include<iostream>
using namespace std;
int push(int *arr,int n1,int n2, int stack_choice)
{    
	if(n1+1==n2)
	{
		cout<<"\nStack OverFlow";
		return -1;

	}
	int val;
	cout<<"\nEnter the value to be Entered in stack "<<stack_choice<<':';
	cin>>val;
	if(stack_choice == 1)
	{	n1=n1+1;

		arr[n1]=val;
		return 1;

	}
	else
		if(stack_choice == 2)
	{	n2=n2-1;

		arr[n2]=val;
		return 1;
	}



}
int pop(int *arr, int n1, int n2, int stack_choice, int max)
{  int val;
	if(stack_choice==1)
	{
		if(n1<0)
			{cout<<"Stack UnderFlow"; return 0;}
		else
		{	val=arr[n1];
			

		}


	}
	else
		if(stack_choice==2)
	{
		if(n2>max)
			{cout<<"Stack UnderFlow";return 0;}
		else
		{	val=arr[n2];
			

		}


	}
	cout<<"\n THe value Popped from "<<stack_choice<<" is: "<<val;

}
int transverse(int *arr, int n1, int n2, int stack_choice, int max)
{  int tran;
	if(stack_choice==1)
	{ tran=n1;
		while(tran>=0)
		{ cout<<'\n'<<arr[tran]<<'\t';
			tran--;

		}


	}
	else
		if(stack_choice==2)
	{ tran=n2;
		while(tran<=max)
		{ cout<<'\n'<<arr[tran]<<'\t';
			tran++;

		}


	}


}


main()
{ int arr[100],n=0,n1=-1,n2=0,max,stack_choice,choice;
	char ch;
	cout<<"\nEnter The Max size of the array :";
	cin>>n;
	max=n-1;
	n2=n;
	do{
	cout<<"\nEnter the Stack Number :";
	cin>>stack_choice;
	cout<<"\nWhat would You like to perform (1 for Push, 2 for pop, 3 for transverse"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:	
				push(arr,n1,n2,stack_choice);
				if(stack_choice==1)
					n1++;
				else
				if (stack_choice==2)
				n2--;	
				break;
		case 2:
				pop(arr, n1, n2, stack_choice,max);
				if(stack_choice==1)
					n1--;
				else
				if (stack_choice==2)
				n2++;
				break;
		case 3:
				transverse(arr, n1,n2,stack_choice,max);
				break;
	}

	cout<<"\n\nDo you Want to Continue";
	cin>>ch;

	}while(ch=='y'||ch=='Y');

}