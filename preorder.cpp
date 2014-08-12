#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the number of node: ";
	cin>>n;
	cout<<"Enter the parent node: ";
	int p[n],lp[n],rp[n];
	int i;
	cin>>p[0];
	cout<<"Enter left child: ";
	cin>>lp[0];
	cout<<"Enter right child: ";
	cin>>rp[0];
	char c='y',a;
	while(c=='y')
	{
		cout<<"Do you want to continue: ";
		cin>>c;
		if(c=='n')
			break;
		cout<<"Enter in left child or right child: ";
		cin>>a;
		if(a=='l')
		{
			cout<<"Enter the left child or right child: ";
			p[i]=lp[0];
			cin>>b;
			if(b=='l')
			{
				cin>>lp[i];
			}
		}
		if(a=='r')
		{

		}
	}
}