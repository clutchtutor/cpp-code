#include<iostream>
using namespace std;
main()
{
	int n,i,t,j;
	cin>>n;
	int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]<a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		t=a[0];
		a[0]=a[n-1];
		a[n-1]=t;
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		return 0;
}