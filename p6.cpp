#include<iostream>
using namespace std;

main()
{
	int a,i,j,s=0,k;
	cout<<"No.of elements in an array"<<endl;
	cin>>a;
	int b[a];
	for(j=0;j<a;j++)
		cin>>b[j];
	cout<<"No. of iteration"<<endl;
	cin>>i;
	for(j=1;j<i+1;j++)
	{
		for(k=0;k<a-j;k++)
		{
			b[k]=b[k+1]-b[k];
			cout<<b[k];
		}
		cout<<endl;
	}
	a=a-i;
	for(j=0;j<a;j++)
		s=s+b[j];
	cout<<"Sum is:";
	cout<<s;
	return 0;
}