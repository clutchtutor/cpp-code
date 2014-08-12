#include<iostream>
#include<conio.h>
using namespace std;
class stack1{
	public:
		char ch;
		stack1 *next;

}sfsf;

int push(stack1 *top,char ch1)
{
	stack1 *s1=new stack1;
	s1->ch=ch1;
	s1->next=NULL;
	if(top!=NULL)
	{ s1->next=top;
		top=s1;
	}
	else
		top=s1;



}
char pop(stack1 *top)
{    if(top==NULL)
	return 'k';
	char ch1=top->ch;
	top=top->next;
	return ch1;
}

main()
{ char hello[100],ch;
	int i=0;
	stack1 *top1,*top2;
	while(((ch=scanf()))!='\n')&&i<100)
	{
		hello[i++]=ch;
	}
	hello[i]='\0';

	for(int j=0;j<100;j++)
	{  ch=hello[j];

		switch(ch)
		{  case '+': push(top1,'+');
					break;

		   case '-': push(top1,'-');
		   			break;
		   case '*': push(top1,'*');
		   			break;
		   case '/': push(top1,'/');
		   			break;
		   case '(': push(top1,'(');
		   			break;





		}

	}




}