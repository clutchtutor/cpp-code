#include<iostream>
using namespace std;
main()
{
	int n,i,k;
	cout<<"Enter no. of elements:";
	cin>>n;
	int a[n],stack[n],top=0,d=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	k=a[0];
	for(i=1;i<n-1;i++)
	{
		if((k>0 && a[i]>0) || (k>0 && a[i]<0))
		{
			stack[top]=k;
			top++;
			k=a[i];
		}
		if(k<0 && a[i]<0)
			k=a[i];
		if(k<0 && a[i]>0)
		{
			d=d+top;
			top=0;
		}
	}
	cout<<d<<endl;
	return 0;
}