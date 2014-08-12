#include<iostream>
using namespace std;

void pop(int *a,int *lb, int *ub)
{   int test=0;
	if(*lb>*ub)
		cout<<"I am so sorry there has been underflow";
	test=a[(*ub)]; 
	cout<<"Pooping the value at"<<*ub<<" and value is "<<test<<endl;
	if(*lb==*ub)
		{*lb=0;
		*ub=-1;}
	else
		*ub=(*ub)-1;


}
void push(int *a,int *lb,int *ub,int max)
{   int test;
	if(*ub==max)
		cout<<"Stack overflow \n";
	else
		{
			cout<<"Enter the value to be stored";
			cin>>test;
			a[*ub+1]=test;
			*ub+=1;
		}
}

void transverse(int *a,int lb,int ub)
{
	for(int i=ub;i>=(lb);i--)
		cout<<a[i]<<'\t';
}

main()
{  int a[100],ub=-1,lb=0,val,max=99;
   char ch='n';

	do{cout<<"What would you like to perform"<<"\n1)enter 1 for push\n";
       cout<<"2)enter 2 for pop\n3)enter 3 for transverse";
       cin>>val;
       switch(val)
       {case 1:push(a,&lb,&ub,max);
       			break;
       	case 2: pop(a,&lb,&ub);
       			break;
       	case 3:transverse(a,lb,ub);
       			break;};
      cout<<"\nDo you want to want to continue(y/n) :";
      cin>>ch; 			
}while(ch=='y');



}