#include<iostream>
using namespace std;
main()
{
	int n,i,j,k=1,l,m;
	cin>>n;
	int a[n];
	for(i=2;i<n;i++)
		a[i]=1;
	for(i=2;i<n;i++)
	{
		if(a[i]==1)
		{
			k++;
			for(j=2*i;j<n;j=i+j)
				a[j]=0;
		}
	}
	cout<<k<<endl;
	for(i=n;i>0;i=i-k)
	{
		if(a[i]==0)
		{
			cout<<a[i];
			break;
		}
	}
}