#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n,i,j,b,flag;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		b=0;
		flag=0;
		for(j=3;j<361;j++)
		{
			b=((j-2)*180)/j;
			if(b==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		if(flag==0)
			cout<<"NO"<<endl;
	}
}