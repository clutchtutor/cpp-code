#include<iostream>
using namespace std;
main()
{
	int a[1000],i,j,k,n,t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	int c[n];
for(i=0;i<n;i=i+2)
	{
		for(j=i;j<i+1;j++)
		{
			if(a[j]>a[j+1])
			{
				c[j+1]=a[j];
				c[j]=a[j+1];
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<c[i]<<" ";
}
