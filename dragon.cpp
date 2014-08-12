#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int s,n,i,temp,temp1,j;
	cin>>s;
	cin>>n;
	int x[n],y[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
				temp1=y[j];
				y[j]=y[i];
				y[i]=temp1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(s<x[i]|| s==x[i])
		{
			cout<<"NO";
			exit(0);
		}
		if(s>x[i])
		{
			s=s+y[i];
		}
	}
	cout<<"YES";
}