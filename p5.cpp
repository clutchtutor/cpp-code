#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=2*n;j>2*i;j--)
			cout<<' ';
		for(k=0;k<=i;k++)
			cout<<k<<' ';
		for(l=i-1;l>=0;l--)
		{
			cout<<l;
			if(l!=0)
				cout<<' ';
		}
		cout<<endl;
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=2*n;j>2*i;j--)
			cout<<' ';
		for(k=0;k<=i;k++)
		{
			cout<<k<<' ';
		}
		for(l=i-1;l>=0;l--)
		{
			cout<<l;
			if(l!=0)
				cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}