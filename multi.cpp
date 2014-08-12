#include<iostream>
using namespace std;
main()
{
	int a,i;
	double d;
	cin>>a;
	double b[a],c[a];
	for(i=0;i<a;i++)
	{
		cin>>b[i];
		cin>>c[i];
	}
	for(i=0;i<a;i++)
	{
		d=b[i]*c[i];
		cout<<d<<endl;
	}
}