#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cin>>n;
	char a[n][32];
	int b[n],c[n+1],d[n+1];
	for(i=0;i<n;i++)
	{
		j=0;
		while(a[j]!="\n")
		{
			cin>>a[i][j];
			j++;
		}
		cin>>b[i];
	}
	c[0]=0;
	d[0]=0;
	for(i=0;i<n;i++)
	{
		if(a[i][0]=='a')
		{
			c[i+1]=c[i]+b[i];
			cout<<c[i+1]<<endl;
		}
		else
		{
			d[i+1]=d[i]+b[i];
			cout<<d[i+1]<<endl;
		}
	}
	if(c[n]>d[n])
		cout<<"andrew";
	if(c[n]<d[n])
		cout<<"mike";
	if(c[n]==d[n])
	{
		if(c[n-1]>d[n-1])
			cout<<"andrew"<<endl;
		if(c[n-1]<d[n-1])
			cout<<"mike"<<endl;
	}
	return 0;
}