#include<iostream>
using namespace std;
struct link
{
	int data;
	link* next;
};
class linklist
{
private:
	link* first;
public:
	linklist()
	{
		first=NULL;
	}
	void additem(int d);
	void display();		
};
void linklist::additem(int d)
{
	link* newlink=new link;
	newlink->data=d;
	newlink->next=first;
	first=newlink;
}
void linklist::display()
{
	link* current=first;
	while(current!=null)
	{
		cout<<current->data<<endl;
		current=current->next;
	}
}
main()
{
	linklist li;
	li.additem(34);
	li.additem(45);
	li.additem(56);
	li.display();
	return 0;
}