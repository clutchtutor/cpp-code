#include<iostream>
using namespace std;
class stack
{ private:
  int data;
  public:
		void adddata(int ch)
		{data=ch;}
		int displaydata()
		{cout<<data;
			return data;}

		stack *next;

};

void pop(stack *top)
{   stack *k;
	if(top->next==NULL)
		cout<<"I am so sorry there is underflow";
	k=top; 
	cout<<"Value is "<<k->displaydata()<<endl;
	top=top->next;


}
void push(stack *top)
{   stack *s1;
	s1=new stack;
	int test;
	if(s1==NULL)
		cout<<"Stack overflow \n";
	else
		{
			cout<<"Enter the value to be stored";
			cin>>test;
			s1->adddata(test);
			s1->next=top;
			top=s1;
		}
}

void transverse(stack *top)
{   stack *s;
	s=top;
    while(s!=NULL)
    	{cout<<s->displaydata()<<'\t';
    	s=s->next;
    	}
}

main()
{  stack *top;
	char ch;
	int val;
	top=NULL;

	do{cout<<"What would you like to perform"<<"\n1)enter 1 for push\n";
       cout<<"2)enter 2 for pop\n3)enter 3 for transverse";
       cin>>val;
       switch(val)
       {case 1:push(top);
       			top->displaydata();
       			break;
       	case 2:pop(top);
       			break;
       	case 3:transverse(top);
       			break;};
      cout<<"\nDo you want to want to continue(y/n) :";
      cin>>ch; 			
}while(ch=='y');



}